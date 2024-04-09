#include "addmed.h"
#include "ui_addmed.h"
#include <QtCore>
#include <QtXml>
#include <ShowMedList.h>

Addmed::Addmed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addmed)
{
    ui->setupUi(this);
}

Addmed::~Addmed()
{
    delete ui;
}

void Addmed::on_pushButton_clicked()
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

      QDomElement medicines = document.documentElement();
      file.close();
      QDomElement medicine=document.createElement("medicine");
      medicine.setAttribute("id",ui->lineEdit->text());
      medicine.setAttribute("name",ui->lineEdit_2->text());
      medicine.setAttribute("quantity",ui->lineEdit_3->text());
      medicine.setAttribute("mrp",ui->lineEdit_4->text());
      medicine.setAttribute("dd",ui->lineEdit_5->text());
      medicine.setAttribute("mm",ui->lineEdit_6->text());
      medicine.setAttribute("yy",ui->lineEdit_7->text());
      medicine.setAttribute("status",ui->lineEdit_8->text());
      medicine.setAttribute("location",ui->lineEdit_9->text());

      medicines.appendChild(medicine);

      file.open(QIODevice::WriteOnly | QIODevice::Text);
      QTextStream output(&file);
      output << document.toString();
       file.close();
      hide();
}

