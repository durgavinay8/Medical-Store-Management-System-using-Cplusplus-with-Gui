#include "placeorder.h"
#include "qtablewidget.h"
#include "ui_placeorder.h"
#include <QtCore>
#include <QtXml>
#include<addmed.h>
#include<checkmedicines.h>

placeOrder::placeOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::placeOrder)
{
    ui->setupUi(this);
    QDomDocument document;


    QFile file("C:\\Users\\91868\\OneDrive\\Desktop\\cpp\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        //return -1;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        //return -1;
        file.close();
    }

    QDomElement medicines = document.firstChildElement();

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");


    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);

        if(medicinenode.isElement())
        {
            QDomElement medicineele=medicinenode.toElement();
            //ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            QTableWidgetItem * item;
          if(medicineele.attribute("status")=="YES"){
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
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
                ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,j,item);
            }
          }
        }
    }
}

placeOrder::~placeOrder()
{
    delete ui;
}

void placeOrder::on_pushButton_clicked()
{
      Addmed x;
      x.setModal(true);
      x.exec();
}


void placeOrder::on_pushButton_3_clicked()
{
    QDomDocument document;


    QFile file("C:\\Users\\91868\\OneDrive\\Desktop\\cpp\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        //return -1;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        //return -1;
        file.close();
    }
    QDomElement medicines = document.firstChildElement();
    QString value;

    auto rowList = ui->tableWidget->selectionModel()->selectedIndexes();
    value=(ui->tableWidget->item(rowList.constFirst().row(),0)->text());

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");
    //QTableWidgetItem * item;
    //item = new QTableWidgetItem;
    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);
          if(medicinenode.isElement()){
                QDomElement medicineele=medicinenode.toElement();
                if(value==medicineele.attribute("id")){
                    medicines.setAttribute("status","NO");
                    ui->tableWidget->item(rowList.constFirst().row(),4)->setText("NO");
                }
          }
    }
}

/*
void placeOrder::on_pushButton_2_clicked()
{

}

*/
