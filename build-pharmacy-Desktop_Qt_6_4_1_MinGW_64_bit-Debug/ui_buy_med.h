/********************************************************************************
** Form generated from reading UI file 'buy_med.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_MED_H
#define UI_BUY_MED_H

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

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
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

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(818, 500);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 20, 761, 461));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 741, 421));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        billno_label = new QLabel(widget);
        billno_label->setObjectName("billno_label");

        horizontalLayout->addWidget(billno_label);

        show_billn_label = new QLabel(widget);
        show_billn_label->setObjectName("show_billn_label");

        horizontalLayout->addWidget(show_billn_label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        getmedicine = new QLineEdit(widget);
        getmedicine->setObjectName("getmedicine");

        horizontalLayout_2->addWidget(getmedicine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        getquantity = new QSpinBox(widget);
        getquantity->setObjectName("getquantity");

        horizontalLayout_3->addWidget(getquantity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        addbutton = new QPushButton(widget);
        addbutton->setObjectName("addbutton");

        horizontalLayout_4->addWidget(addbutton);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        generatebill_button = new QPushButton(widget);
        generatebill_button->setObjectName("generatebill_button");

        horizontalLayout_5->addWidget(generatebill_button);

        edit_button = new QPushButton(widget);
        edit_button->setObjectName("edit_button");

        horizontalLayout_5->addWidget(edit_button);

        cancel_button = new QPushButton(widget);
        cancel_button->setObjectName("cancel_button");

        horizontalLayout_5->addWidget(cancel_button);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Billing", nullptr));
        billno_label->setText(QCoreApplication::translate("Dialog", "Bill number :", nullptr));
        show_billn_label->setText(QCoreApplication::translate("Dialog", "show_bill_number", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Medicine:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Available qt:", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "show_available", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Quantity:", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "MRP (for each):", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "show_mrp", nullptr));
        addbutton->setText(QCoreApplication::translate("Dialog", "ADD", nullptr));
        generatebill_button->setText(QCoreApplication::translate("Dialog", "generate bill", nullptr));
        edit_button->setText(QCoreApplication::translate("Dialog", "Edit", nullptr));
        cancel_button->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
class Dialog: public Ui_Dialprivate slots:
        void on_generatebill_button_clicked();
og {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_MED_H
