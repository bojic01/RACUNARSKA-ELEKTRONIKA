#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QDateTime>
#include<string>
#include<QFile>
#include<QDebug>
#include"wiringPi.h"
#include<wiringPiI2C.h>
#include"secdialog.h"
#include"sijalicadialog.h"
#include"ventilatordialog.h"
#include"zalivanjedialog.h"
#include"pomocdialog.h"
#include"softPwm.h"
#define PCF8591 0x48
#define AIN2 2 //PIN ZA LDR
#define SVETLO 22//LED DIODA KOJA SIMULIRA SVETLO
#define VENTILATOR 23//DIODA KOJA SIMULIRA VENTILATOR
#define LM35 3//PIN ZA LM35
#define SENZOR_VLAZNOSTI 0//senzor vlaznosti zemljista pin
#define PUMPA 26
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{

    ui->setupUi(this);

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(digital_clock()));


   timer_ldr=new QTimer(this);
   connect(timer_ldr,SIGNAL(timeout()),this,SLOT(ocitavanje_ldr()));

    timer_garden=new QTimer(this);
    connect(timer_garden,SIGNAL(timeout()),this,SLOT(smartGarden()));

    timer_lm35=new QTimer(this);
connect(timer_lm35,SIGNAL(timeout()),this,SLOT(read_sensor_lm35()));

     timer_vlaznost=new QTimer(this);
     connect(timer_vlaznost,SIGNAL(timeout()),this,SLOT(senzorVlaznosti()));

    timer->start(1000);
    timer_ldr->start(1000);
    timer_garden->start(1000);
    timer_lm35->start(1000);
    timer_vlaznost->start(1000);


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::digital_clock()
{
  QDateTime time=QDateTime::currentDateTime();
  QString time_text=time.toString("dd.MM.yyyy   hh: mm :ss");
  ui->labela_vreme->setText(time_text);

}




void Dialog::on_termostat_clicked()
{

    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();

    threshold_temperature=secDialog.getPrag();
    printf("VREDNSOT A I KLASE SECDIALOG JE=%d\u00BBC\n",threshold_temperature);

}

void Dialog::read_sensor_lm35()
{

     int fd=wiringPiI2CSetup(PCF8591);
     int adc_raw;
     float napon;
     wiringPiI2CReadReg8(fd,PCF8591+LM35);//dummy
     adc_raw=wiringPiI2CReadReg8(fd,PCF8591+LM35);

     napon=(3.3*(float)adc_raw)/255.0;//u voltima

     temperatura=napon/0.01;//eljeno sa 0.01 zato sto sa savkim porastom 1 stepena celzijusovog temeprature napon poraste za 10mV=0.01V
     ui->labela_lm35->setText(QString::number(temperatura,'f',2)+"\u00B0C");



}


void Dialog::on_sijalica_clicked()
{
    sijalicaDialog sijalica;
    sijalica.setModal(true);
    sijalica.exec();

    dimovanjeSvetla=sijalica.getPwm();

    pocetak=sijalica.getPocetnoVreme();
    kraj=sijalica.getKrajnjeVreme();
    //printf("JACINA:%d%\n",dimovanjeSvetla);
    //qDebug()<<"POCETNO VREMEM:"<<pocetak.toString("HH:mm:ss AP");
    //qDebug()<<"KRAJNJE VREMEM:"<<kraj.toString("HH:mm:ss AP");


}


void Dialog::on_ventilator_clicked()
{
     ventilatorDialog ventilator;
     ventilator.setModal(true);
     ventilator.exec();
     ventilatorSpeed=ventilator.getSpeed();
     //printf("SPEED:%d\n",ventilatorSpeed);
}


void Dialog::on_zalivanje_clicked()
{
  zalivanjeDialog zalivanje;
  zalivanje.setModal(true);
  zalivanje.exec();
  zalivanjeSpeed=zalivanje.getBrzinaZalivanja();
  threshold_vlaznosti=zalivanje.getVlaznost();
  //printf("BRZINA:%d\n",zalivanjeSpeed);
 // printf("VLAZNOST:%d%\n",vlaznostZemljista);

}


void Dialog::on_pomoc_clicked()
{
    pomocDialog pomoc;
    pomoc.setModal(true);
    pomoc.exec();

}

void Dialog::ocitavanje_ldr()
{
    int fd;


     fd=wiringPiI2CSetup(PCF8591);

     wiringPiI2CReadReg8(fd,PCF8591+AIN2);//DUMMY
     ldr=wiringPiI2CReadReg8(fd,PCF8591+AIN2);
     ui->label_ldr->setText(QString::number(ldr)+"lux");

}


void Dialog::on_manuelno_clicked()
{
    is_manual=true;
}

void Dialog::smartGarden()
{
    QTime vreme=QTime::currentTime();
    wiringPiSetup();
    pinMode(SVETLO,OUTPUT);
    pinMode(VENTILATOR,OUTPUT);
    pinMode(PUMPA,OUTPUT);
      softPwmCreate(SVETLO,0,100);
      softPwmCreate(VENTILATOR,0,100);
      softPwmCreate(PUMPA,0,100);
      SecDialog prag;
      qDebug()<<"VREME:"<<vreme.toString("HH:mm:ss AP");
      qDebug()<<"POCETNO VREMEM:"<<pocetak.toString("HH:mm:ss AP");
      qDebug()<<"KRAJNJE VREMEM:"<<kraj.toString("HH:mm:ss AP");
      qDebug()<<"JACINA SVETLA="<<dimovanjeSvetla;
      qDebug()<<"VENTILATOR SPEED"<<ventilatorSpeed;
      qDebug()<<"BRZINA PUMPE="<<zalivanjeSpeed;
    switch (is_manual) {
    case true:

         if(vreme>=pocetak && vreme<kraj){

             softPwmWrite(SVETLO,dimovanjeSvetla);
         }else{
             softPwmWrite(SVETLO,0);

         }

            if(temperatura>prag.getPrag()){

           softPwmWrite(VENTILATOR,ventilatorSpeed);

            }else{
                softPwmWrite(VENTILATOR,0);
            }

            if(vlaznostZemljista<threshold_vlaznosti){
                  softPwmWrite(PUMPA,zalivanjeSpeed);
            }else{
                   softPwmWrite(PUMPA,0);
            }

        break;
      case false:

           if(temperatura>21){
               softPwmWrite(VENTILATOR,75);
           }else{
               softPwmWrite(VENTILATOR,0);
           }

           if(ldr>180){
               softPwmWrite(SVETLO,85);
           }else{
               softPwmWrite(SVETLO,0);
           }

           if(vlaznostZemljista<50){
               softPwmWrite(PUMPA,90);
           }else{
               softPwmWrite(PUMPA,0);
           }


        break;
    default:
        printf("NIJE ODABRAN NIJEDAN MOD RADA\n");
        break;
    }




}

void Dialog::senzorVlaznosti()
{
    int fd1;
    int adc;

    fd1=wiringPiI2CSetup(PCF8591);
    wiringPiI2CReadReg8(fd1,PCF8591+SENZOR_VLAZNOSTI);
    adc=wiringPiI2CReadReg8(fd1,PCF8591+SENZOR_VLAZNOSTI);

   vlaznostZemljista=abs(-0.9*(adc-255));//jednacina prave krzo dve tacke.Opseg 145 do 225,gde je 145=0%,255=100%
   ui->vlaznostZemljista->setValue(vlaznostZemljista);

}



void Dialog::on_automatski_clicked()
{
    is_manual=false;
}

