#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_horizontalSlider_valueChanged(int value);
  public slots:
    int getPrag();

private:
    Ui::SecDialog *ui;
    int prag;
};

#endif // SECDIALOG_H
