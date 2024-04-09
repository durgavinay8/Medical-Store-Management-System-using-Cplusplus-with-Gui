#include "ShowMedList.h"
#include "ui_ShowMedList.h"
#include <QtCore>
#include <QtXml>
#include<addmed.h>

ShowMedList::ShowMedList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowMedList)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(120);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->horizontalHeader()->setVisible(true);

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

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");


    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);

        if(medicinenode.isElement())
        {
            QDomElement medicineele=medicinenode.toElement();
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            QTableWidgetItem * item;
            for(int j=0;j<=6;j++)

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
                    item->setText(medicineele.attribute("dd")+"-"+medicineele.attribute("mm")+"-"+medicineele.attribute("yy"));
                }
                if(j==5)
                    item->setText(medicineele.attribute("location"));
                if(j==6 )
                    item->setText(medicineele.attribute("status"));
                ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,j,item);
            }
        }
    }
}

ShowMedList::~ShowMedList()
{
    delete ui;
}

void ShowMedList::on_AddnewmedButton_clicked()
{
    Addmed x;
    x.setModal(true);
    x.exec();

    if(QWidget::isVisible())
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

        QDomElement medicines=document.documentElement();
        QDomElement medicine=medicines.lastChildElement();

        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        QTableWidgetItem * item;
        for(int j=0;j<=6;j++)
        {
            item = new QTableWidgetItem;
            if(j==0 )
                item->setText(medicine.attribute("id"));
            if(j==1 )
                item->setText(medicine.attribute("name"));
            if(j==2 )
                item->setText(medicine.attribute("quantity"));
            if(j==3 )
                item->setText(medicine.attribute("mrp"));
            if(j==4 )
                item->setText(medicine.attribute("dd")+"-"+medicine.attribute("mm")+"-"+medicine.attribute("yy"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,j,item);
        }
    }
}

void ShowMedList::on_DeleteMedButton_clicked()
{
    QString value_tobe_removed;
    auto rowList = ui->tableWidget->selectionModel()->selectedIndexes();
    value_tobe_removed=(ui->tableWidget->item(rowList.constFirst().row(),0)->text());
    ui->tableWidget->removeRow(rowList.constFirst().row());

    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"showmedlist Failed to open file";
        return;
    }

    if(!document.setContent(&file))
    {
        qDebug()<<"Transactions read Failed to load document";
        return;
        file.close();
    }
    file.close();

    QDomElement medicines = document.documentElement();
    QDomNodeList medicine = medicines.childNodes();
    for(int i = 0; i < medicine.count(); i++) {
      QDomNode node = medicine.at(i);
      if (node.isElement() && node.toElement().attribute("id") == value_tobe_removed) {
        medicines.removeChild(node);
      }
    }

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
    file.close();
}



void ShowMedList::on_EditButton_clicked()
{
    auto SelectedList = ui->tableWidget->selectionModel()->selectedIndexes();
    if(SelectedList.empty())
    {
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        ui->EditButton->setText("Save");
    }
    else
    {
        QString value_to_changed=ui->tableWidget->item(SelectedList.constFirst().row(),SelectedList.constFirst().column())->text();
        QString attribute_to_be_changed=ui->tableWidget->horizontalHeaderItem(SelectedList.constFirst().column())->text();

        QDomDocument document;

        QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug()<<"showmedlist Failed to open file";
            return;
        }

        if(!document.setContent(&file))
        {
            qDebug()<<"Failed to load document";
            return;
            file.close();
        }
        file.close();

        QDomElement medicines = document.documentElement();
        QDomNodeList medicine = medicines.childNodes();

        for(int i = 0; i < medicine.count(); i++)
        {
          QDomNode medicinenode = medicine.at(i);
          if (medicinenode.isElement())
          {
              QDomElement medicineele=medicinenode.toElement();
              if(medicineele.attribute("id")==ui->tableWidget->item(SelectedList.constFirst().row(),0)->text())
              {
                  qDebug()<<medicineele.attribute("name");
                  medicineele.setAttribute(attribute_to_be_changed,value_to_changed);
              }
          }
        }

        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream output(&file);
        output << document.toString();
        file.close();

        ui->EditButton->setText("Edit");
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    }
}

