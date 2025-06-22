/********************************************************************************
** Form generated from reading UI file 'zalivanjedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZALIVANJEDIALOG_H
#define UI_ZALIVANJEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_zalivanjeDialog
{
public:
    QSlider *brzinaZalivanja;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QSlider *vlaznostZemljista;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *zalivanjeDialog)
    {
        if (zalivanjeDialog->objectName().isEmpty())
            zalivanjeDialog->setObjectName(QString::fromUtf8("zalivanjeDialog"));
        zalivanjeDialog->resize(400, 300);
        brzinaZalivanja = new QSlider(zalivanjeDialog);
        brzinaZalivanja->setObjectName(QString::fromUtf8("brzinaZalivanja"));
        brzinaZalivanja->setGeometry(QRect(200, 10, 160, 31));
        brzinaZalivanja->setMaximum(5);
        brzinaZalivanja->setPageStep(1);
        brzinaZalivanja->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(zalivanjeDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(210, 60, 121, 51));
        progressBar = new QProgressBar(zalivanjeDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(210, 210, 121, 51));
        progressBar->setValue(0);
        vlaznostZemljista = new QSlider(zalivanjeDialog);
        vlaznostZemljista->setObjectName(QString::fromUtf8("vlaznostZemljista"));
        vlaznostZemljista->setGeometry(QRect(200, 160, 160, 41));
        vlaznostZemljista->setOrientation(Qt::Horizontal);
        label = new QLabel(zalivanjeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 181, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(zalivanjeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 230, 191, 16));
        label_2->setFont(font);

        retranslateUi(zalivanjeDialog);
        QObject::connect(brzinaZalivanja, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(vlaznostZemljista, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(zalivanjeDialog);
    } // setupUi

    void retranslateUi(QDialog *zalivanjeDialog)
    {
        zalivanjeDialog->setWindowTitle(QCoreApplication::translate("zalivanjeDialog", "Podesavanje vlaznosi i brzine zalivanja", nullptr));
        label->setText(QCoreApplication::translate("zalivanjeDialog", "Brzina zalivanja", nullptr));
        label_2->setText(QCoreApplication::translate("zalivanjeDialog", "Vlaznost zemljista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zalivanjeDialog: public Ui_zalivanjeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZALIVANJEDIALOG_H
