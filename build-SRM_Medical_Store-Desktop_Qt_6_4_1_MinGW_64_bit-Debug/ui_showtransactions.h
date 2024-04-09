/********************************************************************************
** Form generated from reading UI file 'showtransactions.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTRANSACTIONS_H
#define UI_SHOWTRANSACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowTransactions
{
public:
    QLabel *label;
    QTableWidget *TransactionsTable;

    void setupUi(QDialog *ShowTransactions)
    {
        if (ShowTransactions->objectName().isEmpty())
            ShowTransactions->setObjectName("ShowTransactions");
        ShowTransactions->resize(798, 703);
        label = new QLabel(ShowTransactions);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 161, 21));
        TransactionsTable = new QTableWidget(ShowTransactions);
        if (TransactionsTable->columnCount() < 10)
            TransactionsTable->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TransactionsTable->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        TransactionsTable->setObjectName("TransactionsTable");
        TransactionsTable->setGeometry(QRect(20, 60, 751, 500));

        retranslateUi(ShowTransactions);

        QMetaObject::connectSlotsByName(ShowTransactions);
    } // setupUi

    void retranslateUi(QDialog *ShowTransactions)
    {
        ShowTransactions->setWindowTitle(QCoreApplication::translate("ShowTransactions", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ShowTransactions", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:700; text-decoration: underline;\">All Transactions :</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TransactionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShowTransactions", "Bill No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TransactionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShowTransactions", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TransactionsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShowTransactions", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TransactionsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShowTransactions", "TotalValue", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TransactionsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ShowTransactions", "Customer ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TransactionsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ShowTransactions", "Customer Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TransactionsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ShowTransactions", "Cashier", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TransactionsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ShowTransactions", "Product IDs", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TransactionsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ShowTransactions", "Product Names", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TransactionsTable->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ShowTransactions", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowTransactions: public Ui_ShowTransactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTRANSACTIONS_H
