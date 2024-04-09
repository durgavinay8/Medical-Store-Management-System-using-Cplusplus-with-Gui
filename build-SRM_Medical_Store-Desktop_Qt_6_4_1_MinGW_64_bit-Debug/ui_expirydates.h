/********************************************************************************
** Form generated from reading UI file 'expirydates.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPIRYDATES_H
#define UI_EXPIRYDATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpiryDates
{
public:
    QTableWidget *ExpiryTable;
    QPushButton *PlaceOrderButton;
    QLabel *label;

    void setupUi(QDialog *ExpiryDates)
    {
        if (ExpiryDates->objectName().isEmpty())
            ExpiryDates->setObjectName("ExpiryDates");
        ExpiryDates->resize(840, 598);
        ExpiryDates->setMaximumSize(QSize(1000, 1000));
        ExpiryTable = new QTableWidget(ExpiryDates);
        if (ExpiryTable->columnCount() < 7)
            ExpiryTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ExpiryTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        ExpiryTable->setObjectName("ExpiryTable");
        ExpiryTable->setGeometry(QRect(20, 70, 791, 450));
        ExpiryTable->setMaximumSize(QSize(800, 450));
        ExpiryTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ExpiryTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        PlaceOrderButton = new QPushButton(ExpiryDates);
        PlaceOrderButton->setObjectName("PlaceOrderButton");
        PlaceOrderButton->setGeometry(QRect(260, 530, 300, 40));
        PlaceOrderButton->setMinimumSize(QSize(300, 40));
        PlaceOrderButton->setMaximumSize(QSize(500, 20));
        label = new QLabel(ExpiryDates);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 331, 31));

        retranslateUi(ExpiryDates);

        QMetaObject::connectSlotsByName(ExpiryDates);
    } // setupUi

    void retranslateUi(QDialog *ExpiryDates)
    {
        ExpiryDates->setWindowTitle(QCoreApplication::translate("ExpiryDates", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ExpiryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ExpiryDates", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ExpiryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ExpiryDates", "Medicine", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ExpiryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ExpiryDates", "Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ExpiryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ExpiryDates", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ExpiryTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ExpiryDates", "MRP", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ExpiryTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ExpiryDates", "Expiry", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ExpiryTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ExpiryDates", "Status", nullptr));
        PlaceOrderButton->setText(QCoreApplication::translate("ExpiryDates", "Place Order", nullptr));
        label->setText(QCoreApplication::translate("ExpiryDates", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; text-decoration: underline;\">Less Than One Month To Expiry :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpiryDates: public Ui_ExpiryDates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPIRYDATES_H
