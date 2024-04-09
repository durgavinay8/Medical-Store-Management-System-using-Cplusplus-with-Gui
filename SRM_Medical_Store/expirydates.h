#ifndef EXPIRYDATES_H
#define EXPIRYDATES_H

#include <QDialog>

namespace Ui {
class ExpiryDates;
}

class ExpiryDates : public QDialog
{
    Q_OBJECT

public:
    explicit ExpiryDates(QWidget *parent = nullptr);
    ~ExpiryDates();

private slots:
    void check();
    void on_PlaceOrderButton_clicked();

private:
    Ui::ExpiryDates *ui;
};

#endif // EXPIRYDATES_H
