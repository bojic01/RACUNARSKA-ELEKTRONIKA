/********************************************************************************
** Form generated from reading UI file 'sijalicadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIJALICADIALOG_H
#define UI_SIJALICADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sijalicaDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *sijalicaOn;
    QPushButton *sijalicaOFF;
    QSlider *pwmSlajder;
    QProgressBar *jacinaSvetla;
    QLabel *label_jacina;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QTimeEdit *timeStart;
    QTimeEdit *timeEnd;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_PocetnoVreme;
    QLabel *label_krajnjeVreme;

    void setupUi(QDialog *sijalicaDialog)
    {
        if (sijalicaDialog->objectName().isEmpty())
            sijalicaDialog->setObjectName(QString::fromUtf8("sijalicaDialog"));
        sijalicaDialog->resize(400, 300);
        layoutWidget = new QWidget(sijalicaDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 0, 82, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sijalicaOn = new QPushButton(layoutWidget);
        sijalicaOn->setObjectName(QString::fromUtf8("sijalicaOn"));
        QFont font;
        font.setPointSize(24);
        sijalicaOn->setFont(font);

        verticalLayout->addWidget(sijalicaOn);

        sijalicaOFF = new QPushButton(layoutWidget);
        sijalicaOFF->setObjectName(QString::fromUtf8("sijalicaOFF"));
        sijalicaOFF->setFont(font);

        verticalLayout->addWidget(sijalicaOFF);

        pwmSlajder = new QSlider(sijalicaDialog);
        pwmSlajder->setObjectName(QString::fromUtf8("pwmSlajder"));
        pwmSlajder->setGeometry(QRect(150, 200, 160, 51));
        pwmSlajder->setMaximum(100);
        pwmSlajder->setOrientation(Qt::Horizontal);
        jacinaSvetla = new QProgressBar(sijalicaDialog);
        jacinaSvetla->setObjectName(QString::fromUtf8("jacinaSvetla"));
        jacinaSvetla->setGeometry(QRect(160, 260, 118, 31));
        QFont font1;
        font1.setPointSize(14);
        jacinaSvetla->setFont(font1);
        jacinaSvetla->setValue(0);
        label_jacina = new QLabel(sijalicaDialog);
        label_jacina->setObjectName(QString::fromUtf8("label_jacina"));
        label_jacina->setGeometry(QRect(10, 270, 141, 20));
        label_jacina->setFont(font1);
        layoutWidget1 = new QWidget(sijalicaDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 150, 248, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        timeStart = new QTimeEdit(layoutWidget1);
        timeStart->setObjectName(QString::fromUtf8("timeStart"));
        timeStart->setFont(font1);

        horizontalLayout->addWidget(timeStart);

        timeEnd = new QTimeEdit(layoutWidget1);
        timeEnd->setObjectName(QString::fromUtf8("timeEnd"));
        timeEnd->setFont(font1);

        horizontalLayout->addWidget(timeEnd);

        layoutWidget2 = new QWidget(sijalicaDialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 110, 284, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_PocetnoVreme = new QLabel(layoutWidget2);
        label_PocetnoVreme->setObjectName(QString::fromUtf8("label_PocetnoVreme"));
        label_PocetnoVreme->setFont(font1);

        horizontalLayout_2->addWidget(label_PocetnoVreme);

        label_krajnjeVreme = new QLabel(layoutWidget2);
        label_krajnjeVreme->setObjectName(QString::fromUtf8("label_krajnjeVreme"));
        label_krajnjeVreme->setFont(font1);

        horizontalLayout_2->addWidget(label_krajnjeVreme);


        retranslateUi(sijalicaDialog);
        QObject::connect(pwmSlajder, SIGNAL(valueChanged(int)), jacinaSvetla, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(sijalicaDialog);
    } // setupUi

    void retranslateUi(QDialog *sijalicaDialog)
    {
        sijalicaDialog->setWindowTitle(QCoreApplication::translate("sijalicaDialog", "Sijalica ON/OFF", nullptr));
        sijalicaOn->setText(QCoreApplication::translate("sijalicaDialog", "ON", nullptr));
        sijalicaOFF->setText(QCoreApplication::translate("sijalicaDialog", "OFF", nullptr));
        label_jacina->setText(QCoreApplication::translate("sijalicaDialog", "Jacina svetlosti", nullptr));
        label_PocetnoVreme->setText(QCoreApplication::translate("sijalicaDialog", "Pocetno vreme", nullptr));
        label_krajnjeVreme->setText(QCoreApplication::translate("sijalicaDialog", "Krajnje vreme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sijalicaDialog: public Ui_sijalicaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIJALICADIALOG_H
