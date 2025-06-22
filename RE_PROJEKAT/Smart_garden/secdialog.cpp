#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_horizontalSlider_valueChanged(int value)
{
     ui->label->setText(QString::number(value)+"\u00B0C");
     prag=value;
}

int SecDialog::getPrag(){
        return prag;
}
