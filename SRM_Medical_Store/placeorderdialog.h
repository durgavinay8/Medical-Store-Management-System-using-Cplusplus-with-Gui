#ifndef PLACEORDERDIALOG_H
#define PLACEORDERDIALOG_H

#include <QDialog>

namespace Ui {
class PlaceOrderDialog;
}

class PlaceOrderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlaceOrderDialog(QWidget *parent = nullptr);
    ~PlaceOrderDialog();

private slots:
    void DisplayPlaceOrderTable();

    void on_pushButton_clicked();

    void on_OrderRecievedButton_clicked();

private:
    Ui::PlaceOrderDialog *ui;
};

#endif // PLACEORDERDIALOG_H
