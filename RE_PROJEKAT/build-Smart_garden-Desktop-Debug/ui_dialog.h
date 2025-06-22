/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *labela_vreme;
    QLabel *labela_lm35;
    QPushButton *pomoc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *termostat;
    QPushButton *sijalica;
    QPushButton *ventilator;
    QPushButton *zalivanje;
    QProgressBar *vlaznostZemljista;
    QLabel *label_ldr;
    QPushButton *manuelno;
    QPushButton *automatski;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        Dialog->setStyleSheet(QString::fromUtf8("QLabel{\n"
"              background-color: #F0F0F0;\n"
"              color: #333333;\n"
"\n"
"\n"
"\n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 211, 31));
        labela_vreme = new QLabel(Dialog);
        labela_vreme->setObjectName(QString::fromUtf8("labela_vreme"));
        labela_vreme->setGeometry(QRect(500, 10, 221, 31));
        labela_vreme->setFrameShape(QFrame::Box);
        labela_lm35 = new QLabel(Dialog);
        labela_lm35->setObjectName(QString::fromUtf8("labela_lm35"));
        labela_lm35->setGeometry(QRect(240, 70, 161, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        labela_lm35->setFont(font);
        labela_lm35->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 201, 255);\n"
"color: rgb(60, 118, 255);\n"
"border-radius: 10px;\n"
""));
        labela_lm35->setAlignment(Qt::AlignCenter);
        pomoc = new QPushButton(Dialog);
        pomoc->setObjectName(QString::fromUtf8("pomoc"));
        pomoc->setGeometry(QRect(20, 350, 80, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pomoc/pomoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        pomoc->setIcon(icon);
        pomoc->setIconSize(QSize(64, 64));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 78, 300));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        termostat = new QPushButton(layoutWidget);
        termostat->setObjectName(QString::fromUtf8("termostat"));
        termostat->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/termostat/termostat.png"), QSize(), QIcon::Normal, QIcon::Off);
        termostat->setIcon(icon1);
        termostat->setIconSize(QSize(64, 64));
        termostat->setFlat(true);

        verticalLayout->addWidget(termostat);

        sijalica = new QPushButton(layoutWidget);
        sijalica->setObjectName(QString::fromUtf8("sijalica"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/sijalica/sijalica.png"), QSize(), QIcon::Normal, QIcon::Off);
        sijalica->setIcon(icon2);
        sijalica->setIconSize(QSize(64, 64));

        verticalLayout->addWidget(sijalica);

        ventilator = new QPushButton(layoutWidget);
        ventilator->setObjectName(QString::fromUtf8("ventilator"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ventilator/ventilator.png"), QSize(), QIcon::Normal, QIcon::Off);
        ventilator->setIcon(icon3);
        ventilator->setIconSize(QSize(64, 64));

        verticalLayout->addWidget(ventilator);

        zalivanje = new QPushButton(layoutWidget);
        zalivanje->setObjectName(QString::fromUtf8("zalivanje"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/zalivanje/zalivanje.png"), QSize(), QIcon::Normal, QIcon::Off);
        zalivanje->setIcon(icon4);
        zalivanje->setIconSize(QSize(64, 64));

        verticalLayout->addWidget(zalivanje);

        vlaznostZemljista = new QProgressBar(Dialog);
        vlaznostZemljista->setObjectName(QString::fromUtf8("vlaznostZemljista"));
        vlaznostZemljista->setGeometry(QRect(270, 270, 118, 51));
        QFont font1;
        font1.setPointSize(16);
        vlaznostZemljista->setFont(font1);
        vlaznostZemljista->setValue(0);
        label_ldr = new QLabel(Dialog);
        label_ldr->setObjectName(QString::fromUtf8("label_ldr"));
        label_ldr->setGeometry(QRect(270, 170, 111, 71));
        QFont font2;
        font2.setPointSize(24);
        label_ldr->setFont(font2);
        label_ldr->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 248, 219);\n"
"color: rgb(230, 153, 0);\n"
"border-radius: 15px;"));
        label_ldr->setAlignment(Qt::AlignCenter);
        manuelno = new QPushButton(Dialog);
        manuelno->setObjectName(QString::fromUtf8("manuelno"));
        manuelno->setGeometry(QRect(480, 340, 141, 51));
        manuelno->setFont(font1);
        automatski = new QPushButton(Dialog);
        automatski->setObjectName(QString::fromUtf8("automatski"));
        automatski->setGeometry(QRect(480, 410, 141, 51));
        automatski->setFont(font1);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "SMART GARDEN", nullptr));
        labela_vreme->setText(QString());
        labela_lm35->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        pomoc->setText(QString());
        termostat->setText(QString());
        sijalica->setText(QString());
        ventilator->setText(QString());
        zalivanje->setText(QString());
        label_ldr->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        manuelno->setText(QCoreApplication::translate("Dialog", "Manuelno", nullptr));
        automatski->setText(QCoreApplication::translate("Dialog", "Automatski", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
