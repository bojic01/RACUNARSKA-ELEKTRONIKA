/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label;
    QSlider *horizontalSlider;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(400, 300);
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 130, 101, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("QLabel{color: lime;\n"
"             background-color: black;\n"
"            border: 2px solid gray;\n"
"            padding: 5px;\n"
"            font: bold 24pt \"Courier\"\n"
" }"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setMargin(5);
        horizontalSlider = new QSlider(SecDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(120, 65, 160, 61));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(SecDialog);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Prag temperature", nullptr));
        label->setText(QCoreApplication::translate("SecDialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
