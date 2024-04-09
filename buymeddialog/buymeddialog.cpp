#include "buymeddialog.h"
#include "ui_buymeddialog.h"

#include <QApplication>
#include <QMessageBox>
#include "buymeddialog.h"
#include <iostream>
#include <string.h>
using namespace std;

BuyMedDialog::BuyMedDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BuyMedDialog)
{
    ui->setupUi(this);
}

BuyMedDialog::~BuyMedDialog()
{
    delete ui;
}


void BuyMedDialog::on_generatebill_button_clicked()
{
   // QString medname=ui->getmedicine->text();
    if(CheckMedicine("dolo 650"))
    {
        qDebug()<<"found";
    }
}


