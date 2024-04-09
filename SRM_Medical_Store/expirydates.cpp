#include "expirydates.h"
#include "ui_expirydates.h"

#include <ctime>
#include <QtCore>
#include <QtXml>
#include <difference_between_date.h>

ExpiryDates::ExpiryDates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExpiryDates)
{
    ui->setupUi(this);
    ui->ExpiryTable->horizontalHeader()->setDefaultSectionSize(120);
    ui->ExpiryTable->horizontalHeader()->setStretchLastSection(true);
    ui->ExpiryTable->horizontalHeader()->setVisible(true);
    check();
}

ExpiryDates::~ExpiryDates()
{
    delete ui;
}

void ExpiryDates::check()
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

    QDomElement medicines = document.firstChildElement();

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");

    time_t now = time(0);
    tm *ltm = localtime(&now);

    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);

        if(medicinenode.isElement())
        {

            QDomElement medicineele=medicinenode.toElement();
            Date d1,d2;
            d1={ltm->tm_mday,1 + ltm->tm_mon,1900 + ltm->tm_year};
            d2={(medicineele.attribute("dd")).toInt(),(medicineele.attribute("mm")).toInt(),(medicineele.attribute("yy")).toInt()};
            if(getDifference(d1, d2)<=30)
            {

                    ui->ExpiryTable->insertRow(ui->ExpiryTable->rowCount());
                    QTableWidgetItem * item;
                    for(int j=0;j<=6;j++)
                    {
                        item = new QTableWidgetItem;
                        if(j==0 )
                            item->setText(medicineele.attribute("id"));
                        if(j==1 )
                            item->setText(medicineele.attribute("name"));
                        if(j==2 )
                            item->setText(medicineele.attribute("location"));
                        if(j==3 )
                            item->setText(medicineele.attribute("quantity"));
                        if(j==4 )
                            item->setText(medicineele.attribute("mrp"));
                        if(j==5 )
                            item->setText(medicineele.attribute("dd")+"-"+medicineele.attribute("mm")+"-"+medicineele.attribute("yy"));
                        if(j==6)
                            item->setText(medicineele.attribute("status"));
                        ui->ExpiryTable->setItem(ui->ExpiryTable->rowCount()-1,j,item);
                }
            }
        }
   }
}
void ExpiryDates::on_PlaceOrderButton_clicked()
{
    QDomDocument document;
    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");\
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

    QDomElement medicines = document.firstChildElement();
    auto rowList = ui->ExpiryTable->selectionModel()->selectedIndexes();
    QString id=(ui->ExpiryTable->item(rowList.constFirst().row(),0)->text());

    QDomNodeList medicineslist1 = medicines.elementsByTagName("medicine");
    for(int i=0;i<medicineslist1.count();i++){
        QDomNode medicinenode = medicineslist1.at(i);
          if(medicinenode.isElement()){
                QDomElement medicineele=medicinenode.toElement();
                if(id==medicineele.attribute("id"))
                {
                    medicineele.setAttribute("status","YES");
                    ui->ExpiryTable->item(rowList.constFirst().row(),6)->setText("YES");
                }
          }
    }
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << document.toString();
     file.close();
}

