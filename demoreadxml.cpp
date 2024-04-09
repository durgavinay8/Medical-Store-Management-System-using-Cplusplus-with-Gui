#include <QtCore>
#include <QtXml>
#include <QDebug>

void listElements(QDomElement login, QString tagname,QString attribute)
{
    QDomNodeList items = login.elementsByTagName(tagname);
    qDebug()<<"Total accounts = "<<items.count();
    for(int i=0;i<items.count();i++)
    {
        QDomNode itemnode = items.at(i);
        if(itemnode.isElement())
        {
            QDomElement itemele=itemnode.toElement();
            qDebug()<<itemele.attribute(attribute);
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\loginXML.xml");

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

    QDomElement login = document.firstChildElement();
    listElements(login,"person","username");

    qDebug()<<"Finished";

    return a.exec();
}
