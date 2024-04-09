/********************************************************************************
** Form generated from reading UI file 'buymeddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYMEDDIALOG_H
#define UI_BUYMEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuyMedDialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *billno_label;
    QLabel *show_billn_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *getmedicine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QSpinBox *getquantity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *addbutton;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *generatebill_button;
    QPushButton *edit_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *BuyMedDialog)
    {
        if (BuyMedDialog->objectName().isEmpty())
            BuyMedDialog->setObjectName("BuyMedDialog");
        BuyMedDialog->resize(800, 600);
        groupBox = new QGroupBox(BuyMedDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 761, 461));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 741, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        billno_label = new QLabel(layoutWidget);
        billno_label->setObjectName("billno_label");

        horizontalLayout->addWidget(billno_label);

        show_billn_label = new QLabel(layoutWidget);
        show_billn_label->setObjectName("show_billn_label");

        horizontalLayout->addWidget(show_billn_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        getmedicine = new QLineEdit(layoutWidget);
        getmedicine->setObjectName("getmedicine");

        horizontalLayout_2->addWidget(getmedicine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        getquantity = new QSpinBox(layoutWidget);
        getquantity->setObjectName("getquantity");

        horizontalLayout_3->addWidget(getquantity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        addbutton = new QPushButton(layoutWidget);
        addbutton->setObjectName("addbutton");

        horizontalLayout_4->addWidget(addbutton);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        generatebill_button = new QPushButton(layoutWidget);
        generatebill_button->setObjectName("generatebill_button");

        horizontalLayout_5->addWidget(generatebill_button);

        edit_button = new QPushButton(layoutWidget);
        edit_button->setObjectName("edit_button");

        horizontalLayout_5->addWidget(edit_button);

        cancel_button = new QPushButton(layoutWidget);
        cancel_button->setObjectName("cancel_button");

        horizontalLayout_5->addWidget(cancel_button);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(BuyMedDialog);

        QMetaObject::connectSlotsByName(BuyMedDialog);
    } // setupUi

    void retranslateUi(QDialog *BuyMedDialog)
    {
        BuyMedDialog->setWindowTitle(QCoreApplication::translate("BuyMedDialog", "BuyMedDialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BuyMedDialog", "Billing", nullptr));
        billno_label->setText(QCoreApplication::translate("BuyMedDialog", "Bill number :", nullptr));
        show_billn_label->setText(QCoreApplication::translate("BuyMedDialog", "show_bill_number", nullptr));
        label->setText(QCoreApplication::translate("BuyMedDialog", "Medicine:", nullptr));
        label_5->setText(QCoreApplication::translate("BuyMedDialog", "Available qt:", nullptr));
        label_6->setText(QCoreApplication::translate("BuyMedDialog", "show_available", nullptr));
        label_4->setText(QCoreApplication::translate("BuyMedDialog", "Quantity:", nullptr));
        label_7->setText(QCoreApplication::translate("BuyMedDialog", "MRP (for each):", nullptr));
        label_8->setText(QCoreApplication::translate("BuyMedDialog", "show_mrp", nullptr));
        addbutton->setText(QCoreApplication::translate("BuyMedDialog", "ADD", nullptr));
        generatebill_button->setText(QCoreApplication::translate("BuyMedDialog", "generate bill", nullptr));
        edit_button->setText(QCoreApplication::translate("BuyMedDialog", "Edit", nullptr));
        cancel_button->setText(QCoreApplication::translate("BuyMedDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyMedDialog: public Ui_BuyMedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYMEDDIALOG_H
