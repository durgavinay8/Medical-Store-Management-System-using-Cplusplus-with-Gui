/********************************************************************************
** Form generated from reading UI file 'placeorderdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEORDERDIALOG_H
#define UI_PLACEORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaceOrderDialog
{
public:
    QPushButton *OrderRecievedButton;
    QTableWidget *PlaceOrderTable;
    QPushButton *PlaceOrder;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *PlaceOrderDialog)
    {
        if (PlaceOrderDialog->objectName().isEmpty())
            PlaceOrderDialog->setObjectName("PlaceOrderDialog");
        PlaceOrderDialog->resize(840, 598);
        OrderRecievedButton = new QPushButton(PlaceOrderDialog);
        OrderRecievedButton->setObjectName("OrderRecievedButton");
        OrderRecievedButton->setGeometry(QRect(570, 520, 150, 50));
        PlaceOrderTable = new QTableWidget(PlaceOrderDialog);
        if (PlaceOrderTable->columnCount() < 5)
            PlaceOrderTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        PlaceOrderTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        PlaceOrderTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        PlaceOrderTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        PlaceOrderTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        PlaceOrderTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        PlaceOrderTable->setObjectName("PlaceOrderTable");
        PlaceOrderTable->setGeometry(QRect(20, 60, 791, 441));
        PlaceOrderTable->setSelectionMode(QAbstractItemView::SingleSelection);
        PlaceOrderTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        PlaceOrder = new QPushButton(PlaceOrderDialog);
        PlaceOrder->setObjectName("PlaceOrder");
        PlaceOrder->setGeometry(QRect(330, 520, 150, 50));
        pushButton = new QPushButton(PlaceOrderDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 520, 150, 50));
        label = new QLabel(PlaceOrderDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 91, 41));

        retranslateUi(PlaceOrderDialog);

        QMetaObject::connectSlotsByName(PlaceOrderDialog);
    } // setupUi

    void retranslateUi(QDialog *PlaceOrderDialog)
    {
        PlaceOrderDialog->setWindowTitle(QCoreApplication::translate("PlaceOrderDialog", "Dialog", nullptr));
        OrderRecievedButton->setText(QCoreApplication::translate("PlaceOrderDialog", "OrderRecieved", nullptr));
        QTableWidgetItem *___qtablewidgetitem = PlaceOrderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PlaceOrderDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = PlaceOrderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PlaceOrderDialog", "Medicine", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = PlaceOrderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PlaceOrderDialog", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = PlaceOrderTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PlaceOrderDialog", "MRP", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = PlaceOrderTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PlaceOrderDialog", "Status", nullptr));
        PlaceOrder->setText(QCoreApplication::translate("PlaceOrderDialog", "PlaceOrder", nullptr));
        pushButton->setText(QCoreApplication::translate("PlaceOrderDialog", "NewMedOrder", nullptr));
        label->setText(QCoreApplication::translate("PlaceOrderDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">Orders:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaceOrderDialog: public Ui_PlaceOrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEORDERDIALOG_H
