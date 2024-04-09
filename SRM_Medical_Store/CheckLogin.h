#ifndef CHECKLOGIN_H
#define CHECKLOGIN_H

#include <QtCore>
#include <QtXml>
#include <QDebug>

bool ListElements(QDomElement tagname,QString u_tocheck,QString p_tocheck)
{
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
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool CheckLogin(QString role_text, QString uname, QString pword)
{
    QDomDocument document;

    QFile file("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\XML files\\loginXML.xml");

    //add exception handling

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
    //has to change this code
    QDomNodeList roles=login.elementsByTagName(role_text);

    for(int i=0;i < roles.count();i++)
    {
        QDomNode rolenode = roles.at(i);
        if(rolenode.isElement())
        {
            QDomElement role = rolenode.toElement();
            if(ListElements(role,uname,pword))
                return 1;
        }
    }

    return 0;
}

#endif // CHECKLOGIN_H
