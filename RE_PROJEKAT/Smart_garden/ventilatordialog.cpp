#include "ventilatordialog.h"
#include "ui_ventilatordialog.h"

ventilatorDialog::ventilatorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventilatorDialog)
{
    ui->setupUi(this);
}

ventilatorDialog::~ventilatorDialog()
{
    delete ui;
}

void ventilatorDialog::on_horizontalSlider_valueChanged(int value)
{

    switch (value) {
    case 0:
            brzina_ventilatora=0;
        break;
     case 1:
            brzina_ventilatora=20;
        break;

       case 2:
            brzina_ventilatora=40;
        break;
    case 3:
          brzina_ventilatora=60;
          break;
    case 4:
            brzina_ventilatora=80;
          break;
    case 5:
          brzina_ventilatora=100;
         break;

    default:
          printf("NEPOSTOJECA KOMBINACIAJ BRZINE VENTILATOREA!!!");
        break;
    }


}

int ventilatorDialog::getSpeed()
{
   return brzina_ventilatora;
}

