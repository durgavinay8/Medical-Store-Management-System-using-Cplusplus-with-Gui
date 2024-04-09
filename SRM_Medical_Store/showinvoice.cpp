#include "ui_showinvoice.h"
#include "C:\Users\Durga Vinay\Desktop\Projects\Cpp project\SRM_Medical_Store\showinvoice.h"

#include <QDomDocument>
#include <QtXml>
#include <QMessageBox>

ShowInvoice::ShowInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowInvoice)
{
    ui->setupUi(this);
    ui->allitems_table->horizontalHeader()->setDefaultSectionSize(120);
    ui->allitems_table->horizontalHeader()->setStretchLastSection(true);
    ui->allitems_table->horizontalHeader()->setVisible(true);
    WriteInInvoice();
}

ShowInvoice::~ShowInvoice()
{
    delete ui;
}

void ShowInvoice::WriteInInvoice()
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
    QDomElement Transaction=Transactions.lastChildElement();
    QDomNodeList TrasactionsList =  Transactions.elementsByTagName("Transaction");
    Transaction.setAttribute("BillNo",TrasactionsList.count());
    QDomElement Customer=Transaction.firstChildElement();
    QDomElement Orders=Transaction.lastChildElement();
    QDomNodeList OrdersList = Orders.elementsByTagName("Order");
    for(int i=0;i<OrdersList.count();i++)
    {
        QDomNode OrderNode = OrdersList.at(i);
        if(OrderNode.isElement())
        {
            QDomElement Order=OrderNode.toElement();
            ui->allitems_table->insertRow(ui->allitems_table->rowCount());
            QTableWidgetItem * item;
            QString mrp,quantity;
            for(int j=0;j<4;j++)
            {
                item = new QTableWidgetItem;
                mrp=Order.attribute("Mrp");
                quantity=Order.attribute("Quantity");
                if(j==0)
                    item->setText(Order.attribute("ProductName"));
                if(j==1)
                    item->setText(quantity);
                if(j==2)
                    item->setText(mrp);
                if(j==3)
                    item->setText(QString::number(mrp.toInt()*quantity.toInt()));
                ui->allitems_table->setItem(i,j,item);
            }
        }
    }

    ui->time_label->setText(Transaction.attribute("Time"));
    ui->date_label->setText(Transaction.attribute("Date"));
    ui->billno_label->setText(Transaction.attribute("BillNo"));
    ui->show_c_name->setText(Customer.attribute("CustomerName"));
    ui->show_c_id->setText(Customer.attribute("CustomerID"));
    ui->t_value_label->setText(Orders.attribute("TotalValue"));
    ui->cashier_label->setText(Transaction.attribute("Cashier"));

    file.close();

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
    file.close();

    return ;
}


void ShowInvoice::on_pushButton_clicked()
{
    this->close();
}

