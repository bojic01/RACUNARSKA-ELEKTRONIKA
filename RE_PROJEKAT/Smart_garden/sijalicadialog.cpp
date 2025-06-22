#include "sijalicadialog.h"
#include "ui_sijalicadialog.h"

sijalicaDialog::sijalicaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sijalicaDialog)
{
    ui->setupUi(this);

    ui->timeStart->setVisible(false);
    ui->timeEnd->setVisible(false);
    ui->pwmSlajder->setVisible(false);
    ui->jacinaSvetla->setVisible(false);
    ui->label_PocetnoVreme->setVisible(false);
    ui->label_krajnjeVreme->setVisible(false);
    ui->label_jacina->setVisible(false);


}

sijalicaDialog::~sijalicaDialog()
{
    delete ui;
}

void sijalicaDialog::on_sijalicaOn_clicked()
{
      isOn=true;

     ui->timeStart->setVisible(true);
     ui->timeEnd->setVisible(true);
     ui->pwmSlajder->setVisible(true);
     ui->jacinaSvetla->setVisible(true);
     ui->label_PocetnoVreme->setVisible(true);
     ui->label_krajnjeVreme->setVisible(true);
     ui->label_jacina->setVisible(true);

}


void sijalicaDialog::on_sijalicaOFF_clicked()
{
    isOn=false;
    ui->timeStart->setVisible(false);
    ui->timeEnd->setVisible(false);
    ui->pwmSlajder->setVisible(false);
    ui->pwmSlajder->setValue(0);
    ui->jacinaSvetla->setVisible(false);
    ui->label_PocetnoVreme->setVisible(false);
    ui->label_krajnjeVreme->setVisible(false);
    ui->label_jacina->setVisible(false);

}

int sijalicaDialog::getPwm()
{
    return pwm;
}

bool sijalicaDialog::getTurnONOFF()
{
    return isOn;
}

QTime sijalicaDialog::getPocetnoVreme()
{
    return pocetnoVreme;
}

QTime sijalicaDialog::getKrajnjeVreme()
{
   return krajnjeVreme;
}


void sijalicaDialog::on_pwmSlajder_valueChanged(int value)
{

    pwm=value;

}


void sijalicaDialog::on_timeStart_userTimeChanged(const QTime &time)
{
     pocetnoVreme=time;

     //qDebug()<<"IZAVRANO VRME:"<<pocetnoVreme.toString("HH:mm:ss AP");
}


void sijalicaDialog::on_timeEnd_userTimeChanged(const QTime &time)
{
    krajnjeVreme=time;
    //qDebug()<<"IZAVRANO VRME:"<<krajnjeVreme.toString("HH:mm:ss AP");
}

