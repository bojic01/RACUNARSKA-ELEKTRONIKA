#ifndef POMOCDIALOG_H
#define POMOCDIALOG_H

#include <QDialog>

namespace Ui {
class pomocDialog;
}

class pomocDialog : public QDialog
{
    Q_OBJECT

public:
    explicit pomocDialog(QWidget *parent = nullptr);
    ~pomocDialog();

private:
    Ui::pomocDialog *ui;
};

#endif // POMOCDIALOG_H
