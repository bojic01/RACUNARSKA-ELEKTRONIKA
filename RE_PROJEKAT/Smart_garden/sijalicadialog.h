#ifndef SIJALICADIALOG_H
#define SIJALICADIALOG_H

#include <QDialog>
#include<QTime>
#include<QTimer>
#include<QDebug>
#include<QString>
namespace Ui {
class sijalicaDialog;
}

class sijalicaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit sijalicaDialog(QWidget *parent = nullptr);
    ~sijalicaDialog();

private slots:
    void on_sijalicaOn_clicked();

    void on_sijalicaOFF_clicked();
    void on_pwmSlajder_valueChanged(int value);

    void on_timeStart_userTimeChanged(const QTime &time);

    void on_timeEnd_userTimeChanged(const QTime &time);

public slots:
     int getPwm();
     bool getTurnONOFF();
     QTime getPocetnoVreme();
     QTime getKrajnjeVreme();

private:
    Ui::sijalicaDialog *ui;


    QTime pocetnoVreme,krajnjeVreme;
    bool isOn=false;
    int pwm;
};

#endif // SIJALICADIALOG_H
