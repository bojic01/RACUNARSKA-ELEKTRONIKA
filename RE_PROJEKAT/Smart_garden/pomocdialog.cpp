#include "pomocdialog.h"
#include "ui_pomocdialog.h"

pomocDialog::pomocDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pomocDialog)
{
    ui->setupUi(this);
}

pomocDialog::~pomocDialog()
{
    delete ui;
}
