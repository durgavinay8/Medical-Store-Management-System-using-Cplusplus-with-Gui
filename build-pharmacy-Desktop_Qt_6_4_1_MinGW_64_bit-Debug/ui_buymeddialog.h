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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BuyMedDialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *medicine_lineedit;
    QPushButton *search_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *avai_quant_label;
    QLabel *label_7;
    QLabel *mrp_label;
    QLabel *label_6;
    QLabel *label_9;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *quantity_sb;
    QPushButton *addbutton;
    QPushButton *delete_button;
    QTableWidget *allitems_table;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLabel *t_items_label;
    QLabel *label_11;
    QLabel *show_tvalue;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *custid_lineedit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *custname_linedit;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *generatebill_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *BuyMedDialog)
    {
        if (BuyMedDialog->objectName().isEmpty())
            BuyMedDialog->setObjectName("BuyMedDialog");
        BuyMedDialog->resize(683, 534);
        groupBox = new QGroupBox(BuyMedDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 661, 511));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        line_4 = new QFrame(groupBox);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        medicine_lineedit = new QLineEdit(groupBox);
        medicine_lineedit->setObjectName("medicine_lineedit");

        horizontalLayout_2->addWidget(medicine_lineedit);

        search_button = new QPushButton(groupBox);
        search_button->setObjectName("search_button");

        horizontalLayout_2->addWidget(search_button);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        avai_quant_label = new QLabel(groupBox);
        avai_quant_label->setObjectName("avai_quant_label");
        avai_quant_label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(avai_quant_label);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        mrp_label = new QLabel(groupBox);
        mrp_label->setObjectName("mrp_label");

        horizontalLayout_3->addWidget(mrp_label);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_3);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        quantity_sb = new QSpinBox(groupBox);
        quantity_sb->setObjectName("quantity_sb");

        horizontalLayout_4->addWidget(quantity_sb);

        addbutton = new QPushButton(groupBox);
        addbutton->setObjectName("addbutton");

        horizontalLayout_4->addWidget(addbutton);

        delete_button = new QPushButton(groupBox);
        delete_button->setObjectName("delete_button");

        horizontalLayout_4->addWidget(delete_button);


        verticalLayout->addLayout(horizontalLayout_4);

        allitems_table = new QTableWidget(groupBox);
        if (allitems_table->columnCount() < 5)
            allitems_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allitems_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setBold(false);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        allitems_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        allitems_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        allitems_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        allitems_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        allitems_table->setObjectName("allitems_table");
        allitems_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allitems_table->setAlternatingRowColors(true);
        allitems_table->setSelectionMode(QAbstractItemView::SingleSelection);
        allitems_table->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(allitems_table);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        t_items_label = new QLabel(groupBox);
        t_items_label->setObjectName("t_items_label");

        horizontalLayout_10->addWidget(t_items_label);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        horizontalLayout_10->addWidget(label_11);

        show_tvalue = new QLabel(groupBox);
        show_tvalue->setObjectName("show_tvalue");

        horizontalLayout_10->addWidget(show_tvalue);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        custid_lineedit = new QLineEdit(groupBox);
        custid_lineedit->setObjectName("custid_lineedit");

        horizontalLayout_6->addWidget(custid_lineedit);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_7->addWidget(label_3);

        custname_linedit = new QLineEdit(groupBox);
        custname_linedit->setObjectName("custname_linedit");

        horizontalLayout_7->addWidget(custname_linedit);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_8);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        generatebill_button = new QPushButton(groupBox);
        generatebill_button->setObjectName("generatebill_button");

        horizontalLayout_5->addWidget(generatebill_button);

        cancel_button = new QPushButton(groupBox);
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
        label->setText(QCoreApplication::translate("BuyMedDialog", "Medicine:", nullptr));
        search_button->setText(QCoreApplication::translate("BuyMedDialog", "search", nullptr));
        label_5->setText(QCoreApplication::translate("BuyMedDialog", "Available qt:", nullptr));
        avai_quant_label->setText(QCoreApplication::translate("BuyMedDialog", "<html><head/><body><p>0</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("BuyMedDialog", "MRP (for each):   ", nullptr));
        mrp_label->setText(QCoreApplication::translate("BuyMedDialog", "0", nullptr));
        label_6->setText(QCoreApplication::translate("BuyMedDialog", "Location:", nullptr));
        label_9->setText(QCoreApplication::translate("BuyMedDialog", "---", nullptr));
        label_4->setText(QCoreApplication::translate("BuyMedDialog", "Quantity:", nullptr));
        addbutton->setText(QCoreApplication::translate("BuyMedDialog", "ADD", nullptr));
        delete_button->setText(QCoreApplication::translate("BuyMedDialog", "DELETE", nullptr));
        QTableWidgetItem *___qtablewidgetitem = allitems_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BuyMedDialog", "Item ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allitems_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BuyMedDialog", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allitems_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BuyMedDialog", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allitems_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BuyMedDialog", "MRP", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = allitems_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BuyMedDialog", "Value", nullptr));
        label_8->setText(QCoreApplication::translate("BuyMedDialog", "Total Items:", nullptr));
        t_items_label->setText(QCoreApplication::translate("BuyMedDialog", "<html><head/><body><p>0</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("BuyMedDialog", "TOTAL VALUE:", nullptr));
        show_tvalue->setText(QCoreApplication::translate("BuyMedDialog", "0  Rs", nullptr));
        label_2->setText(QCoreApplication::translate("BuyMedDialog", "Customer ID:", nullptr));
        label_3->setText(QCoreApplication::translate("BuyMedDialog", "Customer Name:", nullptr));
        generatebill_button->setText(QCoreApplication::translate("BuyMedDialog", "generate bill", nullptr));
        cancel_button->setText(QCoreApplication::translate("BuyMedDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuyMedDialog: public Ui_BuyMedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYMEDDIALOG_H
