#ifndef SHOWMENU_H
#define SHOWMENU_H

#include "buymeddialog.h"
#include "showtransactions.h"
#include "expirydates.h"
#include <ShowMedList.h>
#include "supplierdata.h"
#include "placeorderdialog.h"

#include <QWidget>

namespace Ui {
class ShowMenu;
}

class ShowMenu : public QWidget
{
    Q_OBJECT

public:
    explicit ShowMenu(QString Cashier,QWidget *parent = nullptr);
    BuyMedDialog *myBuyMedDialog;
    ShowTransactions *myShowTransactions;
    ExpiryDates *myExpiryDates;
    ShowMedList *myShowMedList;
    supplierData *mysupplierData;
    PlaceOrderDialog *myPlaceOrderDialog;
    QString Cashier;
    ~ShowMenu();

private slots:
    void on_BillingButton_clicked();

    void on_ExpiryButton_clicked();

    void on_PlaceOrderButton_clicked();

    void on_FilesButton_clicked();

    void on_MedFileButton_clicked();

    void on_SupplierFileButton_clicked();

    void on_TransactionFileButton_clicked();

private:
    Ui::ShowMenu *ui;
};

#endif // SHOWMENU_H
