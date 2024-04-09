#ifndef BUYMEDDIALOG_H
#define BUYMEDDIALOG_H

#include "showinvoice.h"

#include <QDialog>
#include <QtCore>
#include <QtXml>
#include <QDebug>
#include <iostream>
#include <vector>
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class BuyMedDialog; }
QT_END_NAMESPACE

class BuyMedDialog : public QDialog
{
    Q_OBJECT

public:
    BuyMedDialog(QString Cashier,QWidget *parent = nullptr);

    ShowInvoice *myShowInvoice;
    QString Cashier;
    ~BuyMedDialog();

private slots:

    void on_generatebill_button_clicked();

    void on_addbutton_clicked();

    void on_search_button_clicked();

    void on_delete_button_clicked();

    void on_cancel_button_clicked();

    void WriteTransactionXML();

    void EditMedicineList();

private:
    Ui::BuyMedDialog *ui;
};



#endif // BUYMEDDIALOG_H
