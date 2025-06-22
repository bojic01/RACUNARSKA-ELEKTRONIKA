#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QTimer>
#include<QTime>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    //int threshold_temperature;
  public slots:
     void digital_clock();
     void read_sensor_lm35();

private slots:
     void on_termostat_clicked();
     void on_sijalica_clicked();

     void on_ventilator_clicked();

     void on_zalivanje_clicked();

     void on_pomoc_clicked();
     void ocitavanje_ldr();

     void on_manuelno_clicked();
     void smartGarden();
     void senzorVlaznosti();

     void on_automatski_clicked();

private:
    Ui::Dialog *ui;
    QTimer *timer;
    QTimer *timer_lm35;
    QTimer *timer_ldr;
    QTimer *timer_garden;
    QTimer *timer_vlaznost;
    int threshold_temperature;
    int threshold_vlaznosti;
    int dimovanjeSvetla;
    QTime pocetak;
    QTime kraj;
    int ventilatorSpeed;
    int zalivanjeSpeed;
    int vlaznostZemljista;
    int ldr;
    bool is_manual;
    float temperatura;

};
#endif // DIALOG_H
