/********************************************************************************
** Form generated from reading UI file 'pomocdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POMOCDIALOG_H
#define UI_POMOCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_pomocDialog
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *pomocDialog)
    {
        if (pomocDialog->objectName().isEmpty())
            pomocDialog->setObjectName(QString::fromUtf8("pomocDialog"));
        pomocDialog->resize(542, 321);
        textEdit = new QTextEdit(pomocDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 10, 541, 311));

        retranslateUi(pomocDialog);

        QMetaObject::connectSlotsByName(pomocDialog);
    } // setupUi

    void retranslateUi(QDialog *pomocDialog)
    {
        pomocDialog->setWindowTitle(QCoreApplication::translate("pomocDialog", "Help", nullptr));
        textEdit->setHtml(QCoreApplication::translate("pomocDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Dobro dosli u help centar Vase pametne baste.U okviru ovog fajla,bice Vam objasnejno kako da koristitie Vasu pametnu bastu.Kao sto se vidi na pocetku pokretanja programa,sa leve starne se nalze ikonice koje omogucavaju rucno promenu parametara,,centralni deo sadrzi ocitavanaj senzora temperature,kolicine svetlosti,i vlaznosti zemljista.U donjem desnom uglu se nalaze "
                        "modovi u kojima ce da radi pametna basta.Na osnovu svega gore navedenog,ovaj dokument ce imati 3 celine:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1)Objasnjenje ikonica</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2)Vrednsoti senzora u centralnom delu</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">3)Modovi  rada</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:"
                        "12pt; font-weight:700;\">1.UPOTREBA IKONICA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Termostat</span><span style=\" font-size:12pt;\">-Pritiskom na ovu ikoniocu moguce je podesavanje praga temperature,tj vrednosti temperature pri kojoj ce se aktivirati ventilator za hladjenje/grejanje.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Sijalica</span><span style=\" font-size:12pt;\">-u okviru ove kartice moguce je podesavnaje da li ce svetlo biti ukljuceno ili ne.Ako se korisnik odluci da ukljuci svetlo nudi mu se opciaj da podesi vreme koliko dugo ce sveto biti ukljuceno,kao i da podesi intenzitet jacine svetlosti.Ako se ipak odluci da svetlo bude iskljuceno onda ce biljke biti u mraku kada nema sunceve svetlsoti.Kod podesavanja vreme"
                        "na,postavlajju se vednosti od 1 do 12,a dodavanjem AM ILI PM sisitem automatski prepoznaje o kom vremeu se radi(npr ako podesite 1:00:00AM treitrace ga kao 1h ujutru,a ako se posatvi 1:00:00PM tretira ga kao 13h popodne)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Ventilator</span><span style=\" font-size:12pt;\">-u ovoj kartici podesavamo briznu kojom ce ventilator da radi kada temeratura predje prag podesen u kartici termostat.Brizne idu od 1 do 5.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Zalivanje</span><span style=\" font-size:12pt;\">-u okviru ove kartice korisnik konfigurise brzinu zalivanja,tj protoka vode kao i prag vaznosti zemljista kada treba ukljuciti zalivanje.Brzine idu od 1 do 5,a vlaznost od 0% do 100%</span></p>"
                        "\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">2.OCITAVANJA SENZORA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    Kao sto je ranije receno centralni deo ce ciniti ocitavanja 3 senozra:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1)</span><span style=\" font-size:12pt; font-weight:700;\">Senzor temperature</span><span style=\" font-size:12pt;\"> ocitava spoljnu temepraturu</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2)</span><span style=\" font-size:12pt; font-weight:700;\">Senzor kolicine svetlosti</span><span style=\" font-size:12pt;\">,ocitava kolika je jacina svetlsoti koja pada na biljku.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">3)</span><span style=\" font-size:12pt; font-weight:700;\">Senzor vlaznosti zemljista </span><span style=\" font-size:12pt;\">ocitava vlaznost zemljista gde se nalzi biljka</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">3.REZIMI RADA</span></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    Postoje dva rezima rada:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1)</span><span style=\" font-size:12pt; font-weight:700;\">Manuelni rezim rada</span><span style=\" font-size:12pt;\"> gde korsinik pomocu kartica(objasnejnih u glavi 1),modeluje po svom nahodjenju kako ce sistem najbolje da radi.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2)</span><span style=\" font-size:12pt; font-weight:700;\">Automatski rezim rada</span><span style=\" font-size:12pt;\"> u okviru ovog rezima sve se desava automatski i svi parametri su podeseni u softveru,tj korisnik nema mogucnost da ih menja.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pomocDialog: public Ui_pomocDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMOCDIALOG_H
