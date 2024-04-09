#include <QtCore>
#include <QtXml>
#include <QDebug>

bool ListElements(QDomElement tagname,QString u_tocheck,QString p_tocheck)
{
    QString uname, pword;
    QDomNodeList items = tagname.elementsByTagName("person");
    for(int i=0;i<items.count();i++)
    {
        QDomNode itemnode = items.at(i);
        if(itemnode.isElement())
        {
            QDomElement itemele=itemnode.toElement();
            if(u_tocheck==itemele.attribute("username"))
            {
                if(p_tocheck==itemele.attribute("password"))
                {
                    qDebug()<<itemele.attribute("username")<<itemele.attribute("password");
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool CheckLogin(int role_index, QString uname, QString pword)
{
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

    //////////

    if(role_index==1)
    {
        QDomNodeList admins=login.elementsByTagName("admin");
        for(int i=0;i < admins.count();i++)
        {
            QDomNode adminnode = admins.at(i);
            if(adminnode.isElement())
            {
                QDomElement admin = adminnode.toElement();
                ListElements(admin,uname,pword);
            }
        }
    }
    else
    {
        QDomNodeList employees=login.elementsByTagName("employee");
        for(int i=0;i < employees.count();i++)
        {
            QDomNode employeenode = employees.at(i);
            if(employeenode.isElement())
            {
                QDomElement employee = employeenode.toElement();
                ListElements(employee,uname,pword);
            }
        }
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if(CheckLogin(1,"vinay@srmap","vinay123"))
    {
        qDebug()<<"found";
    }
    else
        qDebug()<<"not found";

    return a.exec();
}
