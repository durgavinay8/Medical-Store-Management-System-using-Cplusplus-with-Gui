#include "addsupplier.h"
#include "ui_addsupplier.h"
#include <QtCore>
#include <QtXml>
#include<supplierdata.h>

Addsupplier::Addsupplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addsupplier)
{
    ui->setupUi(this);
}

Addsupplier::~Addsupplier()
{
    delete ui;
}

void Addsupplier::on_pushButton_clicked()
{
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
    file.close();

    QDomElement suppliers = document.firstChildElement();
    QDomElement supplier=document.createElement("supplier");
    supplier.setAttribute("name",ui->lineEdit->text());
    supplier.setAttribute("company",ui->lineEdit_2->text());
    supplier.setAttribute("contact",ui->lineEdit_4->text());

    QDomElement Medicines=document.createElement("medicines");
    supplier.appendChild(Medicines);

    QDomElement medicine;
    medicine= document.createElement("medicine");
    medicine.setAttribute("id",ui->lineEdit_5->text());
    medicine.setAttribute("name",ui->lineEdit_3->text());
    Medicines.appendChild(medicine);

    suppliers.appendChild(supplier);

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
    file.close();
    hide();

}



