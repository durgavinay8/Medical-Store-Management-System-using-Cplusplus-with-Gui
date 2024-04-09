#ifndef BUYMEDDIALOG_H
#define BUYMEDDIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtXml>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class BuyMedDialog; }
QT_END_NAMESPACE

class BuyMedDialog : public QDialog
{
    Q_OBJECT

public:
    BuyMedDialog(QWidget *parent = nullptr);
    ~BuyMedDialog();

private slots:
    void on_generatebill_button_clicked();

private:
    Ui::BuyMedDialog *ui;
};

bool CheckMedicine(QString medname)
{
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\medicineslist.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return -1;
    }
    if(!document.setContent(&file))
    {
        qDebug()<<"Failed to load document";
        return -1;
        file.close();
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
                return 1;
            }
        }
    }

    return 0;
}

/*
int get_available_quantity(QString medname)
{

}
*/
#endif // BUYMEDDIALOG_H
