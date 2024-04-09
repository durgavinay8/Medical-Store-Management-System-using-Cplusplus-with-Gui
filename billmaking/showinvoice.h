#ifndef SHOWINVOICE_H
#define SHOWINVOICE_H

#include <QDialog>

namespace Ui {
class ShowInvoice;
}

class ShowInvoice : public QDialog
{
    Q_OBJECT

public:
    explicit ShowInvoice(QWidget *parent = nullptr);
    ~ShowInvoice();

private slots:
    void WriteInInvoice();

private:
    Ui::ShowInvoice *ui;
};

#endif // SHOWINVOICE_H
