#ifndef PLACEORDER_H
#define PLACEORDER_H

#include <QDialog>

namespace Ui {
class placeOrder;
}

class placeOrder : public QDialog
{
    Q_OBJECT

public:
    explicit placeOrder(QWidget *parent = nullptr);
    ~placeOrder();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

   // void on_pushButton_2_clicked();

private:
    Ui::placeOrder *ui;
};

#endif // PLACEORDER_H
