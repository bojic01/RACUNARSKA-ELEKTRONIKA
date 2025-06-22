#ifndef ZALIVANJEDIALOG_H
#define ZALIVANJEDIALOG_H

#include <QDialog>

namespace Ui {
class zalivanjeDialog;
}

class zalivanjeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit zalivanjeDialog(QWidget *parent = nullptr);
    ~zalivanjeDialog();

private slots:
    void on_brzinaZalivanja_valueChanged(int value);

    void on_vlaznostZemljista_valueChanged(int value);
public slots:
      int getBrzinaZalivanja();
      int getVlaznost();
private:
    Ui::zalivanjeDialog *ui;
    int brzinaZalivanja;
    int vlaznost;
};

#endif // ZALIVANJEDIALOG_H
