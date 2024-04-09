#include <QCoreApplication>
#include<QtXml>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("C:/loginXML.xml");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"failed to open file";
        return -1;
    }


    QDomDocument document;
    /*
    QDomElement login = document.createElement("login");
    document.appendChild(login);

    QDomElement admin=document.createElement("admin");
    login.appendChild(admin);
    QDomElement employee=document.createElement("employee");
    login.appendChild(employee);


    QDomElement admin1=document.createElement("person");
    admin1.setAttribute("username","vinay@srmap");
    admin1.setAttribute("password","vinay123");
    admin.appendChild(admin1);

    QDomElement employee1=document.createElement("person");
    employee1.setAttribute("username","gowtham@srmap");
    employee1.setAttribute("password","gowtham123");
    employee.appendChild(employee1);

    QDomElement employee2=document.createElement("person");
    employee2.setAttribute("username","tony@srmap");
    employee2.setAttribute("password","tony123");
    employee.appendChild(employee2);

    QDomElement employee3=document.createElement("person");
    employee3.setAttribute("username","nanda@srmap");
    employee3.setAttribute("password","nanda123");
    employee.appendChild(employee3);
    */
    QDomElement employee3=document.createElement("person");
    employee3.setAttribute("username","devesh@srmap");
    employee3.setAttribute("password","devesh123");
    employee.appendChild(employee3);

    QTextStream stream(&file);
    stream<<document.toString();

    file.close();
    qDebug()<<"Finished";

    return a.exec();
}
