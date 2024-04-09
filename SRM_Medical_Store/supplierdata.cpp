#include "supplierdata.h"
#include "ui_supplierdata.h"
#include <QtCore>
#include <QtXml>
#include<addsupplier.h>

supplierData::supplierData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supplierData)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(150);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->horizontalHeader()->setVisible(true);

    QDomDocument document;


    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\Supplierlist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return ;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        file.close();
        return ;
    }

    QDomElement suppliers = document.firstChildElement();

    QDomNodeList Supplier = suppliers.elementsByTagName("supplier");


    for(int i=0;i<Supplier.count();i++)
    {
        QDomNode suppliernode = Supplier.at(i);

        if(suppliernode.isElement())
        {
            QDomElement supplierele=suppliernode.toElement();
            QDomElement Medicines=supplierele.firstChildElement();
            QDomNodeList MedicinesList = Medicines.elementsByTagName("medicine");
            int rowCount = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(rowCount);
            QTableWidgetItem * item;
            qDebug()<<Medicines.firstChildElement().attribute("id");
            for(int j=0;j<=4;j++)
            {
                item = new QTableWidgetItem;
                if(j==0 )
                    item->setText(supplierele.attribute("name"));
                if(j==1 )
                    item->setText(supplierele.attribute("company"));
                if(j==2)
                    item->setText(Medicines.firstChildElement().attribute("id"));
                if(j==3)
                    item->setText(Medicines.firstChildElement().attribute("name"));
                if(j==4 )
                    item->setText(supplierele.attribute("contact"));

                ui->tableWidget->setItem(rowCount,j,item);
            }
            for(int i=1;i<MedicinesList.count();i++)
                        {
                            QDomNode MedicineNode = MedicinesList.at(i);
                            if(MedicineNode.isElement())
                            {
                                QDomElement Medicine=MedicineNode.toElement();
                                ui->tableWidget->insertRow(rowCount+i);
                                QTableWidgetItem * item;
                                for(int j=2;j<=3;j++)
                                {
                                    item = new QTableWidgetItem;
                                    if(j==2)
                                        item->setText(Medicine.attribute("id"));
                                    if(j==3)
                                        item->setText(Medicine.attribute("name"));
                                    ui->tableWidget->setItem(rowCount+i,j,item);
                                }
                            }
                        }
        }
    }
    file.close();
}

supplierData::~supplierData()
{
    delete ui;
}

void supplierData::on_AddButton_clicked()
{
    Addsupplier x;
    x.setModal(true);
    x.exec();

    if(QWidget::isVisible())
    {

        QDomDocument document;

        QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\Supplierlist.xml");

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

        QDomElement suppliers=document.documentElement();
        QDomElement supplier=suppliers.lastChildElement();

        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        QTableWidgetItem * item;
        for(int j=0;j<=6;j++)
        {
            item = new QTableWidgetItem;
            if(j==0 )
                item->setText(supplier.attribute("name"));
            if(j==1 )
                item->setText(supplier.attribute("company"));
            if(j==2 )
                item->setText(supplier.firstChildElement().firstChildElement().attribute("id"));
            if(j==3 )
                item->setText(supplier.firstChildElement().firstChildElement().attribute("name"));
            if(j==4 )
                item->setText(supplier.attribute("contact"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,j,item);
        }

        file.close();
    }
}


void supplierData::on_DeleteButton_clicked()
{
    QString value_tobe_removed;
    auto rowList = ui->tableWidget->selectionModel()->selectedIndexes();
    value_tobe_removed=(ui->tableWidget->item(rowList.constFirst().row(),0)->text());
    ui->tableWidget->removeRow(rowList.constFirst().row());
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\Supplierlist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return;
    }

    if(!document.setContent(&file))
    {
        qDebug()<<"Transactions read Failed to load document";
        return;
        file.close();
    }
    file.close();
    QDomElement suppliers = document.documentElement();
    QDomNodeList supplier = suppliers.childNodes();
    for(int i = 0; i < supplier.count(); i++) {
      QDomNode node = supplier.at(i);
      if (node.isElement() && node.toElement().attribute("Name") == value_tobe_removed) {
        suppliers.removeChild(node);
      }
    }

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
    file.close();
}

void supplierData::on_AddButton_2_clicked()
{

}

