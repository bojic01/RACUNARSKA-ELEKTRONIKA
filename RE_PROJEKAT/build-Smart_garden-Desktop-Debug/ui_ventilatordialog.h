/********************************************************************************
** Form generated from reading UI file 'ventilatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTILATORDIALOG_H
#define UI_VENTILATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_ventilatorDialog
{
public:
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QLabel *label;

    void setupUi(QDialog *ventilatorDialog)
    {
        if (ventilatorDialog->objectName().isEmpty())
            ventilatorDialog->setObjectName(QString::fromUtf8("ventilatorDialog"));
        ventilatorDialog->resize(400, 300);
        horizontalSlider = new QSlider(ventilatorDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(160, 60, 160, 41));
        horizontalSlider->setMaximum(5);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(ventilatorDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(170, 130, 161, 71));
        label = new QLabel(ventilatorDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 130, 101, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(ventilatorDialog);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(ventilatorDialog);
    } // setupUi

    void retranslateUi(QDialog *ventilatorDialog)
    {
        ventilatorDialog->setWindowTitle(QCoreApplication::translate("ventilatorDialog", "Podesavanje brzine ventilatora za hladjenje", nullptr));
        label->setText(QCoreApplication::translate("ventilatorDialog", "Brzina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventilatorDialog: public Ui_ventilatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTILATORDIALOG_H
