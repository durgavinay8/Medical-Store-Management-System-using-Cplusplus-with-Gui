/********************************************************************************
** Form generated from reading UI file 'showinvoice.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWINVOICE_H
#define UI_SHOWINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowInvoice
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *billno_label;
    QLabel *label_5;
    QLabel *date_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *cashier_label;
    QLabel *label_9;
    QLabel *time_label;
    QFrame *line;
    QTableWidget *allitems_table;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *show_c_name;
    QLabel *label_11;
    QLabel *show_c_id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *t_items_label;
    QLabel *label_6;
    QLabel *t_value_label;
    QLabel *label_12;
    QFrame *line_3;
    QLabel *label_8;
    QPushButton *pushButton;

    void setupUi(QWidget *ShowInvoice)
    {
        if (ShowInvoice->objectName().isEmpty())
            ShowInvoice->setObjectName("ShowInvoice");
        ShowInvoice->resize(564, 658);
        groupBox = new QGroupBox(ShowInvoice);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 541, 611));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 521, 581));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(verticalLayout);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        billno_label = new QLabel(layoutWidget);
        billno_label->setObjectName("billno_label");

        horizontalLayout->addWidget(billno_label);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        date_label = new QLabel(layoutWidget);
        date_label->setObjectName("date_label");

        horizontalLayout->addWidget(date_label);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_2->addWidget(label_7);

        cashier_label = new QLabel(layoutWidget);
        cashier_label->setObjectName("cashier_label");

        horizontalLayout_2->addWidget(cashier_label);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        time_label = new QLabel(layoutWidget);
        time_label->setObjectName("time_label");

        horizontalLayout_2->addWidget(time_label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        allitems_table = new QTableWidget(layoutWidget);
        if (allitems_table->columnCount() < 4)
            allitems_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allitems_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allitems_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allitems_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allitems_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        allitems_table->setObjectName("allitems_table");

        verticalLayout_2->addWidget(allitems_table);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        show_c_name = new QLabel(layoutWidget);
        show_c_name->setObjectName("show_c_name");

        horizontalLayout_4->addWidget(show_c_name);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);

        show_c_id = new QLabel(layoutWidget);
        show_c_id->setObjectName("show_c_id");

        horizontalLayout_4->addWidget(show_c_id);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        t_items_label = new QLabel(layoutWidget);
        t_items_label->setObjectName("t_items_label");

        horizontalLayout_3->addWidget(t_items_label);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        t_value_label = new QLabel(layoutWidget);
        t_value_label->setObjectName("t_value_label");

        horizontalLayout_3->addWidget(t_value_label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        verticalLayout_2->addWidget(label_12);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(ShowInvoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(12, 620, 541, 29));

        retranslateUi(ShowInvoice);

        QMetaObject::connectSlotsByName(ShowInvoice);
    } // setupUi

    void retranslateUi(QWidget *ShowInvoice)
    {
        ShowInvoice->setWindowTitle(QCoreApplication::translate("ShowInvoice", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShowInvoice", "INVOICE", nullptr));
        label->setText(QCoreApplication::translate("ShowInvoice", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">SRM MEDICAL STORE</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ShowInvoice", "Neerukonda, Mangalagiri Mandal, Andhra Pradesh", nullptr));
        label_3->setText(QCoreApplication::translate("ShowInvoice", " Bill No :", nullptr));
        billno_label->setText(QCoreApplication::translate("ShowInvoice", "----------", nullptr));
        label_5->setText(QCoreApplication::translate("ShowInvoice", "Date:", nullptr));
        date_label->setText(QCoreApplication::translate("ShowInvoice", "--------", nullptr));
        label_7->setText(QCoreApplication::translate("ShowInvoice", " Cashier: ", nullptr));
        cashier_label->setText(QCoreApplication::translate("ShowInvoice", "---------", nullptr));
        label_9->setText(QCoreApplication::translate("ShowInvoice", "Time:", nullptr));
        time_label->setText(QCoreApplication::translate("ShowInvoice", "---------", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allitems_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShowInvoice", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allitems_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShowInvoice", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allitems_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShowInvoice", "MRP", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allitems_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShowInvoice", "Value", nullptr));
        label_10->setText(QCoreApplication::translate("ShowInvoice", "Customer Name:", nullptr));
        show_c_name->setText(QCoreApplication::translate("ShowInvoice", "----", nullptr));
        label_11->setText(QCoreApplication::translate("ShowInvoice", "Customer Id:", nullptr));
        show_c_id->setText(QCoreApplication::translate("ShowInvoice", "----", nullptr));
        label_4->setText(QCoreApplication::translate("ShowInvoice", "<html><head/><body><p><span style=\" font-weight:700;\">Total Items:</span></p></body></html>", nullptr));
        t_items_label->setText(QCoreApplication::translate("ShowInvoice", "0", nullptr));
        label_6->setText(QCoreApplication::translate("ShowInvoice", "<html><head/><body><p><span style=\" font-weight:700;\">Total Value:</span></p></body></html>", nullptr));
        t_value_label->setText(QCoreApplication::translate("ShowInvoice", "0", nullptr));
        label_12->setText(QCoreApplication::translate("ShowInvoice", "<html><head/><body><p align=\"center\">THANK YOU !</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("ShowInvoice", "This is a computer generated invoice", nullptr));
        pushButton->setText(QCoreApplication::translate("ShowInvoice", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowInvoice: public Ui_ShowInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWINVOICE_H
