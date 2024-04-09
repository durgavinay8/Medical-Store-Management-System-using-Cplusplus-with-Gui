
#ifndef CHECKMEDICINES_H
#define CHECKMEDICINES_H

#include <QDialog>
#include <QtCore>
#include <QtXml>
#include <QDebug>


class CheckMedicineClass
{
public:
    QString quantity_available,mrp,medname,productid,location;
    bool CheckMedicine(QString medname);
};

bool CheckMedicineClass::CheckMedicine(QString medname)
{
    this->medname=medname;
    quantity_available=0;
    mrp=0;
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        throw -1;
    }
    if(!document.setContent(&file))
    {
        file.close();
        throw -2;
    }

    QDomElement medicines = document.firstChildElement();

    QDomNodeList medicineslist = medicines.elementsByTagName("medicine");
    for(int i=0;i<medicineslist.count();i++)
    {
        QDomNode medicinenode = medicineslist.at(i);
        if(medicinenode.isElement())
        {
            QDomElement medicineele=medicinenode.toElement();
            if(medname==medicineele.attribute("name"))
            {
                productid=medicineele.attribute("id");
                quantity_available=medicineele.attribute("quantity");
                mrp=medicineele.attribute("mrp");
                location=medicineele.attribute("location");
                return 1;
            }
        }
    }
    file.close();
    return 0;
}

#endif // CHECKMEDICINES_H
