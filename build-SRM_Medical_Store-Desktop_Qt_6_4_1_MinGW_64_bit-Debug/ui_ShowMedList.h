/********************************************************************************
** Form generated from reading UI file 'ShowMedList.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMEDLIST_H
#define UI_SHOWMEDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMedList
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *AddnewmedButton;
    QPushButton *DeleteMedButton;
    QPushButton *EditButton;

    void setupUi(QDialog *ShowMedList)
    {
        if (ShowMedList->objectName().isEmpty())
            ShowMedList->setObjectName("ShowMedList");
        ShowMedList->resize(800, 598);
        label = new QLabel(ShowMedList);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 201, 31));
        label->setFrameShadow(QFrame::Plain);
        tableWidget = new QTableWidget(ShowMedList);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 60, 761, 451));
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        AddnewmedButton = new QPushButton(ShowMedList);
        AddnewmedButton->setObjectName("AddnewmedButton");
        AddnewmedButton->setGeometry(QRect(90, 530, 101, 31));
        DeleteMedButton = new QPushButton(ShowMedList);
        DeleteMedButton->setObjectName("DeleteMedButton");
        DeleteMedButton->setGeometry(QRect(320, 530, 91, 31));
        EditButton = new QPushButton(ShowMedList);
        EditButton->setObjectName("EditButton");
        EditButton->setGeometry(QRect(540, 530, 91, 31));

        retranslateUi(ShowMedList);

        QMetaObject::connectSlotsByName(ShowMedList);
    } // setupUi

    void retranslateUi(QDialog *ShowMedList)
    {
        ShowMedList->setWindowTitle(QCoreApplication::translate("ShowMedList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ShowMedList", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; text-decoration: underline;\">Medicines List:</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShowMedList", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShowMedList", "Medicine ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShowMedList", "quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShowMedList", "mrp", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ShowMedList", "ExpiryDate", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ShowMedList", "Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ShowMedList", "Status", nullptr));
        AddnewmedButton->setText(QCoreApplication::translate("ShowMedList", "ADD", nullptr));
        DeleteMedButton->setText(QCoreApplication::translate("ShowMedList", "DELETE", nullptr));
        EditButton->setText(QCoreApplication::translate("ShowMedList", "EDIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMedList: public Ui_ShowMedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMEDLIST_H
