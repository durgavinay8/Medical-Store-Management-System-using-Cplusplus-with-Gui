#include "placeorderdialog.h"
#include "ui_placeorderdialog.h"

#include<addmed.h>

#include <QtCore>
#include <QtXml>


PlaceOrderDialog::PlaceOrderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaceOrderDialog)
{
    ui->setupUi(this);
    ui->PlaceOrderTable->horizontalHeader()->setDefaultSectionSize(120);
    ui->PlaceOrderTable->horizontalHeader()->setStretchLastSection(true);
    ui->PlaceOrderTable->horizontalHeader()->setVisible(true);

    DisplayPlaceOrderTable();
}

PlaceOrderDialog::~PlaceOrderDialog()
{
    delete ui;
}

void PlaceOrderDialog::on_pushButton_clicked()
{
      Addmed x;
      x.setModal(true);
      x.exec();
}

void PlaceOrderDialog::on_OrderRecievedButton_clicked()
{
    QDomDocument document;


    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        file.close();
        return;
    }
    file.close();

    QDomElement medicines = document.firstChildElement();
    QString value;

    auto rowList = ui->PlaceOrderTable->selectionModel()->selectedIndexes();
    value=(ui->PlaceOrderTable->item(rowList.constFirst().row(),0)->text());

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");
    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);
          if(medicinenode.isElement()){
                QDomElement medicineele=medicinenode.toElement();
                if(value==medicineele.attribute("id"))
                {
                    medicines.setAttribute("status","NO");
                    file.open(QIODevice::WriteOnly | QIODevice::Text);
                    QTextStream output(&file);
                    output << document.toString();
                    file.close();
                    ui->PlaceOrderTable->item(rowList.constFirst().row(),4)->setText("NO");
                }
          }
    }
}

void PlaceOrderDialog::DisplayPlaceOrderTable()
{
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        file.close();
        return ;
    }

    QDomElement medicines = document.firstChildElement();

    QDomNodeList medicineslist = medicines.elementsByTagName("medicine");


    for(int i=0;i<medicineslist.count();i++){
        QDomNode medicinenode = medicineslist.at(i);

        if(medicinenode.isElement())
        {
            QDomElement medicineele=medicinenode.toElement();
            if((medicineele.attribute("status"))=="YES" || medicineele.attribute("quantity")=="10")
            {
                QTableWidgetItem * item;
                ui->PlaceOrderTable->insertRow(ui->PlaceOrderTable->rowCount());
            for(int j=0;j<=4;j++)
            {
                item = new QTableWidgetItem;
                if(j==0 )
                    item->setText(medicineele.attribute("id"));
                if(j==1 )
                    item->setText(medicineele.attribute("name"));
                if(j==2 )
                    item->setText(medicineele.attribute("quantity"));
                if(j==3 )
                    item->setText(medicineele.attribute("mrp"));
                if(j==4 ){
                    item->setText(medicineele.attribute("status"));
                }
                ui->PlaceOrderTable->setItem(ui->PlaceOrderTable->rowCount()-1,j,item);
            }
          }
        }
    }
}

/*
void placeOrder::on_pushButton_2_clicked()
{

}
*/
