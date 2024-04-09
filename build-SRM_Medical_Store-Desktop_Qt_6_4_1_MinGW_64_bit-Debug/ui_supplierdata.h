/********************************************************************************
** Form generated from reading UI file 'supplierdata.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLIERDATA_H
#define UI_SUPPLIERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_supplierData
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *AddButton;
    QPushButton *DeleteButton;

    void setupUi(QDialog *supplierData)
    {
        if (supplierData->objectName().isEmpty())
            supplierData->setObjectName("supplierData");
        supplierData->resize(800, 598);
        label = new QLabel(supplierData);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 10, 141, 31));
        tableWidget = new QTableWidget(supplierData);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 50, 761, 451));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        AddButton = new QPushButton(supplierData);
        AddButton->setObjectName("AddButton");
        AddButton->setGeometry(QRect(180, 520, 151, 41));
        DeleteButton = new QPushButton(supplierData);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(450, 520, 151, 41));

        retranslateUi(supplierData);

        QMetaObject::connectSlotsByName(supplierData);
    } // setupUi

    void retranslateUi(QDialog *supplierData)
    {
        supplierData->setWindowTitle(QCoreApplication::translate("supplierData", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("supplierData", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">Supplier list:</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("supplierData", "Supplier", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("supplierData", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("supplierData", "Product ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("supplierData", "Product Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("supplierData", "Contact", nullptr));
        AddButton->setText(QCoreApplication::translate("supplierData", "Add New Supplier", nullptr));
        DeleteButton->setText(QCoreApplication::translate("supplierData", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class supplierData: public Ui_supplierData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLIERDATA_H
