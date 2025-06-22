#include "zalivanjedialog.h"
#include"ui_zalivanjedialog.h"

zalivanjeDialog::zalivanjeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zalivanjeDialog)
{
    ui->setupUi(this);
}

zalivanjeDialog::~zalivanjeDialog()
{
    delete ui;
}

void zalivanjeDialog::on_brzinaZalivanja_valueChanged(int value)
{
    switch (value) {
    case 0:
            brzinaZalivanja=0;
        break;
     case 1:
            brzinaZalivanja=20;
        break;

       case 2:
            brzinaZalivanja=40;
        break;
    case 3:
          brzinaZalivanja=60;
          break;
    case 4:
            brzinaZalivanja=80;
          break;
    case 5:
          brzinaZalivanja=100;
         break;

    default:
          printf("NEPOSTOJECA KOMBINACIAJ BRZINE ZALIVANJA!!!");
        break;
    }


}


void zalivanjeDialog::on_vlaznostZemljista_valueChanged(int value)
{
     vlaznost=value;

}

int zalivanjeDialog::getBrzinaZalivanja()
{
    return brzinaZalivanja;
}

int zalivanjeDialog::getVlaznost()
{
    return vlaznost;
}

