
#include "buymeddialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BuyMedDialog w;
    w.show();
    return a.exec();
}

