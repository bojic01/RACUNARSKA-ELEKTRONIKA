#ifndef VENTILATORDIALOG_H
#define VENTILATORDIALOG_H

#include <QDialog>

namespace Ui {
class ventilatorDialog;
}

class ventilatorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ventilatorDialog(QWidget *parent = nullptr);
    ~ventilatorDialog();

private slots:
    void on_horizontalSlider_valueChanged(int value);
public slots:
       int getSpeed();

private:
    Ui::ventilatorDialog *ui;
    int brzina_ventilatora=0;
};

#endif // VENTILATORDIALOG_H
