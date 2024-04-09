#include "showtransactions.h"
#include "ui_showtransactions.h"

#include <QDomDocument>
#include <QtXml>
#include <QMessageBox>

ShowTransactions::ShowTransactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowTransactions)
{
    ui->setupUi(this);
    ui->TransactionsTable->horizontalHeader()->setDefaultSectionSize(120);
    ui->TransactionsTable->horizontalHeader()->setStretchLastSection(true);
    ui->TransactionsTable->horizontalHeader()->setVisible(true);
    WriteTransactions();
}

ShowTransactions::~ShowTransactions()
{
    delete ui;
}

void ShowTransactions::WriteTransactions()
{
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\transactions.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(this,"Error","Failed to open file");
        return;
    }

    if(!document.setContent(&file))
    {
        QMessageBox::information(this,"Error","Failed to load document");
        file.close();
        return;
    }

    QDomElement Transactions=document.documentElement();
    QDomNodeList TrasactionsList =  Transactions.elementsByTagName("Transaction");
    int TransactionsCount = TrasactionsList.count();
    for(int i=0;i<=TransactionsCount;i++)
    {
        QDomNode TransactionNode = TrasactionsList.at(TransactionsCount-i);
        if(TransactionNode.isElement())
        {
            QDomElement Transaction=TransactionNode.toElement();
            QDomElement Customer = Transaction.firstChildElement();
            QDomElement Orders=Transaction.lastChildElement();
            QDomNodeList OrdersList = Orders.elementsByTagName("Order");
            int rowCount = ui->TransactionsTable->rowCount();
            ui->TransactionsTable->insertRow(rowCount);
            QTableWidgetItem * item;
            for(int j=0;j<10;j++)
            {
                item = new QTableWidgetItem;
                if(j==0)
                    item->setText(Transaction.attribute("BillNo"));
                if(j==1)
                    item->setText(Transaction.attribute("Date"));
                if(j==2)
                    item->setText(Transaction.attribute("Time"));
                if(j==3)
                    item->setText(Orders.attribute("TotalValue"));
                if(j==4)
                    item->setText(Customer.attribute("CustomerID"));
                if(j==5)
                    item->setText(Customer.attribute("CustomerName"));
                if(j==6)
                    item->setText(Transaction.attribute("Cashier"));
                if(j==7)
                    item->setText(Orders.firstChildElement().attribute("ProductID"));
                if(j==8)
                    item->setText(Orders.firstChildElement().attribute("ProductName"));
                if(j==9)
                    item->setText(Orders.firstChildElement().attribute("Quantity"));
                ui->TransactionsTable->setItem(rowCount,j,item);
            }
            for(int i=1;i<OrdersList.count();i++)
            {
                QDomNode OrderNode = OrdersList.at(i);
                if(OrderNode.isElement())
                {
                    QDomElement Order=OrderNode.toElement();
                    ui->TransactionsTable->insertRow(rowCount+i);
                    QTableWidgetItem * item;
                    for(int j=7;j<=9;j++)
                    {
                        item = new QTableWidgetItem;
                        if(j==7)
                            item->setText(Order.attribute("ProductID"));
                        if(j==8)
                            item->setText(Order.attribute("ProductName"));
                        if(j==9)
                            item->setText(Order.attribute("Quantity"));
                        ui->TransactionsTable->setItem(rowCount+i,j,item);
                    }
                }
            }
        }
    }

    file.close();

    return ;
}
