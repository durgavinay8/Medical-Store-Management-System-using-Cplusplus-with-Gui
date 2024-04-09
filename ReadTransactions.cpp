#include <QtCore>
#include <QtXml>
#include <QDebug>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\transactions.xml");

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to open file";
        return -1;
    }

    if(!document.setContent(&file))
    {
        qDebug()<<"Transactions read Failed to load document";
        return -1;
        file.close();
    }

    QDomElement Transaction = document.lastChildElement();

    qDebug()<<Transaction.attribute("Time");
    qDebug()<<Transaction.attribute("Date");
    qDebug()<<Transaction.attribute("BillNo");
    qDebug()<<Transaction.attribute("CustomerName");
    qDebug()<<Transaction.attribute("CustomerID");
    qDebug()<<Transaction.attribute("TotalValue");
    /*
    ui->time_label->setText(Transaction.attribute("Time"));
    ui->date_label->setText(Transaction.attribute("Date"));
    ui->billno_label->setText(Transaction.attribute("BillNo"));
    ui->show_c_name->setText(Transaction.attribute("CustomerName"));
    ui->show_c_id->setText(Transaction.attribute("CustomerID"));
    ui->t_value_label->setText(Transaction.attribute("TotalValue"));
    */

    qDebug()<<"printed";
    file.close();

    return 0;
}
