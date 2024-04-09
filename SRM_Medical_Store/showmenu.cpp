#include "showmenu.h"
#include "ui_showmenu.h"
#include <qpixmap.h>

ShowMenu::ShowMenu(QString Cashier,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowMenu)
{
    ui->setupUi(this);
    this->showMaximized();
    this->Cashier=Cashier;
    ui->AllFilesButtons->hide();
    QPixmap pix("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\SRMap logo.png");
    ui->SRMlogo->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatioByExpanding));
}

ShowMenu::~ShowMenu()
{
    delete ui;
}

void ShowMenu::on_BillingButton_clicked()
{
    myBuyMedDialog = new BuyMedDialog(Cashier);
    myBuyMedDialog->show();
}

void ShowMenu::on_ExpiryButton_clicked()
{
    myExpiryDates = new ExpiryDates;
    myExpiryDates->show();
}


void ShowMenu::on_PlaceOrderButton_clicked()
{
    myPlaceOrderDialog = new PlaceOrderDialog;
    myPlaceOrderDialog->show();
}

void ShowMenu::on_FilesButton_clicked()
{
    if(ui->AllFilesButtons->isVisible())
        ui->AllFilesButtons->hide();
    else
        ui->AllFilesButtons->show();

}


void ShowMenu::on_MedFileButton_clicked()
{
    myShowMedList = new ShowMedList;
    myShowMedList->show();
}


void ShowMenu::on_SupplierFileButton_clicked()
{
    mysupplierData = new supplierData;
    mysupplierData->show();
}


void ShowMenu::on_TransactionFileButton_clicked()
{
    myShowTransactions = new ShowTransactions;
    myShowTransactions->show();
}

