#include "buymeddialog.h"
#include "ui_buymeddialog.h"

#include "checkmedicines.h"

#include <QApplication>
#include <QMessageBox>

#include <ctime>
#include <string.h>

CheckMedicineClass obj;

BuyMedDialog::BuyMedDialog(QString Cashier,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BuyMedDialog)
{

    ui->setupUi(this);
    this->Cashier=Cashier;
    setWindowTitle("SRM MEDICAL STORE");
    ui->medicine_lineedit->setClearButtonEnabled(true);
    ui->allitems_table->horizontalHeader()->setDefaultSectionSize(125);
    ui->allitems_table->horizontalHeader()->setStretchLastSection(true);
    ui->allitems_table->horizontalHeader()->setVisible(true);

}

BuyMedDialog::~BuyMedDialog()
{
    delete ui;
}


void BuyMedDialog::on_generatebill_button_clicked()
{
    if(ui->show_tvalue->text()=="0" || ui->custname_linedit->text()=="" || ui->custid_lineedit->text()=="")
    {
        QMessageBox::information(this,"Error","Enter required information to generate the bill");
        return;
    }
    WriteTransactionXML();
    EditMedicineList();
    myShowInvoice=new ShowInvoice;
    myShowInvoice->show();
}

void BuyMedDialog::on_addbutton_clicked()
{
    if((obj.quantity_available).toInt()==0)
    {
        QMessageBox::information(this,"Error","Cannot add an unavailable product ");
        return;
    }
    if(ui->quantity_sb->value()==0 || ui->quantity_sb->value()>=obj.quantity_available.toInt())
    {
        QMessageBox::information(this,"Error","Cannot add an product with unavailable quantity !");
        return;
    }

    int quantity_entered,mrp,total_value;
    total_value=(ui->show_tvalue->text()).toInt();
    qDebug()<<total_value;
    quantity_entered= ui->quantity_sb->value();
    mrp=(ui->mrp_label->text()).toInt();

    ui->allitems_table->insertRow(ui->allitems_table->rowCount());
    QTableWidgetItem * item;
    for(int j=0;j<5;j++)
    {
        item = new QTableWidgetItem;
        if(j==0)
            item->setText(obj.productid);
        if(j==1)
            item->setText(ui->medicine_lineedit->text());
        if(j==2)
            item->setText(QString::number(quantity_entered));
        if(j==3)
            item->setText(QString::number(mrp));
        if(j==4)
            item->setText(QString::number(mrp*quantity_entered));
        ui->allitems_table->setItem(ui->allitems_table->rowCount()-1,j,item);
    }
    total_value+=mrp*quantity_entered;
    ui->show_tvalue->setText(QString::number(total_value));
    ui->t_items_label->setText(QString::number(ui->allitems_table->rowCount()));

    ui->medicine_lineedit->setText("");
    ui->avai_quant_label->setText("");
    ui->mrp_label->setText("");
    ui->quantity_sb->setValue(0);
}

void BuyMedDialog::on_search_button_clicked()
{
    QString medname=ui->medicine_lineedit->text();
    if(medname=="")
    {
        QMessageBox::information(this,"Error","Enter the product name to search !");
        return;
    }
    try
    {
        if(obj.CheckMedicine(medname))
        {
            if((obj.quantity_available).toInt()==0)
                ui->avai_quant_label->setText("NOT AVAILABLE");
            else
                ui->avai_quant_label->setText(obj.quantity_available);
            ui->LocationLabel->setText(obj.location);
            ui->mrp_label->setText(obj.mrp);
        }
        else
        {
            ui->avai_quant_label->setText("NOT AVAILABLE");
            ui->mrp_label->setText("");
            ui->quantity_sb->setValue(0);
        }
    }
    catch(int error)
    {
        if(error==-1){QMessageBox::information(this,"Error","Failed to open file");}
        else{QMessageBox::information(this,"Error","Failed to load document");}
    }
}

void BuyMedDialog::on_delete_button_clicked()
{
    auto rowList = ui->allitems_table->selectionModel()->selectedIndexes();
    if(rowList.empty())
    {
        QMessageBox::information(this,"Error","Select an item to delete");
        return;
    }
    int total_value,value_tobe_removed;
    total_value=(ui->show_tvalue->text()).toInt();
    value_tobe_removed=(ui->allitems_table->item(rowList.constFirst().row(),4)->text()).toInt();
    ui->allitems_table->removeRow(rowList.constFirst().row());
    total_value-=value_tobe_removed;
    ui->show_tvalue->setText(QString::number(total_value));
    ui->t_items_label->setText(QString::number(ui->t_items_label->text().toInt()-1));

}

void BuyMedDialog::on_cancel_button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Cancel", "Cancel The Billing?",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        this->close();
    }
}

void BuyMedDialog::WriteTransactionXML()
{

    time_t now=time(0);
    tm *ltm=localtime(&now);

    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\transactions.xml");

    if(!file.open(QIODevice::ReadOnly  | QIODevice::Text))
    {
        QMessageBox::information(this,"Error","Failed to open file");
        return;
    }

    if(!document.setContent(&file))
    {
        QMessageBox::information(this,"Error","Failed to load document");
        file.close();
        return ;
    }

    QDomElement Transactions = document.documentElement();
    file.close();

    QDomElement Transaction=document.createElement("Transaction");
    Transaction.setAttribute("BillNo","");
    Transaction.setAttribute("Date",QString::number(ltm->tm_mday)+"/"+QString::number(ltm->tm_mon + 1)+"/"+QString::number(ltm->tm_year + 1900));
    Transaction.setAttribute("Time",QString::number(ltm->tm_hour)+":"+ QString::number(ltm->tm_min)+":"+QString::number(ltm->tm_sec));
    Transaction.setAttribute("Cashier",Cashier);
    Transactions.appendChild(Transaction);

    QDomElement Customer=document.createElement("Customer");
    Customer.setAttribute("CustomerName",ui->custname_linedit->text());
    Customer.setAttribute("CustomerID",ui->custid_lineedit->text());
    Transaction.appendChild(Customer);

    QDomElement Orders=document.createElement("Orders");
    Orders.setAttribute("TotalValue",ui->show_tvalue->text());
    Transaction.appendChild(Orders);

    QDomElement Order;

    for(int i=0;i<ui->allitems_table->rowCount();i++)
    {
        Order= document.createElement("Order");
        Order.setAttribute("ProductID",ui->allitems_table->item(i,0)->text());
        Order.setAttribute("ProductName",ui->allitems_table->item(i,1)->text());
        Order.setAttribute("Quantity",ui->allitems_table->item(i,2)->text());
        Order.setAttribute("Mrp",ui->allitems_table->item(i,3)->text());
        Orders.appendChild(Order);
    }

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
    file.close();
}

void BuyMedDialog::EditMedicineList()
{
    QDomDocument document;

   QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

   if(!file.open(QIODevice::ReadOnly  | QIODevice::Text))
      {
          qDebug () << "Error saving XML file....";
          file.close();
      }

      if(!document.setContent(&file))
      {
          qDebug()<<"Failed to load document";
          return ;
          file.close();
      }

      file.close();

      QDomElement medicines = document.documentElement();
      QDomNodeList medicine = medicines.childNodes();
      QString id,EditedQuantity,QuantityToRemove;
      for(int j=0;j<(ui->t_items_label->text()).toInt();j++)
      {
          id=ui->allitems_table->item(j,0)->text();
          QuantityToRemove=ui->allitems_table->item(j,2)->text();
          for(int i = 0; i < medicine.count(); i++)
          {
            QDomNode medicinenode = medicine.at(i);
            if (medicinenode.isElement())
            {
                QDomElement medicineele=medicinenode.toElement();
                if(medicineele.attribute("id")==id)
                {
                    EditedQuantity=QString::number(medicineele.attribute("quantity").toInt()-QuantityToRemove.toInt());
                    medicineele.setAttribute("quantity",EditedQuantity);
                }
            }
          }
      }

      file.open(QIODevice::WriteOnly | QIODevice::Text);
      QTextStream output(&file);
      output << document.toString();
       file.close();
}
