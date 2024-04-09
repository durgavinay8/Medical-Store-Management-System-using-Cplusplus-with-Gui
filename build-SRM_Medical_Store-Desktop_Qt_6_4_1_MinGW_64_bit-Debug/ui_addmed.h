/********************************************************************************
** Form generated from reading UI file 'addmed.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMED_H
#define UI_ADDMED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Addmed
{
public:
    QLabel *label_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;

    void setupUi(QDialog *Addmed)
    {
        if (Addmed->objectName().isEmpty())
            Addmed->setObjectName("Addmed");
        Addmed->resize(466, 327);
        label_10 = new QLabel(Addmed);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(160, 10, 151, 20));
        layoutWidget = new QWidget(Addmed);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 42, 421, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_3->addWidget(lineEdit_4);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_4->addWidget(lineEdit_8);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_4->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(label_9);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setMinimumSize(QSize(10, 0));
        lineEdit_5->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(lineEdit_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(lineEdit_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_8->setBuddy(lineEdit_8);
        label_5->setBuddy(lineEdit_5);
        label_6->setBuddy(lineEdit_6);
        label_7->setBuddy(lineEdit_7);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Addmed);

        QMetaObject::connectSlotsByName(Addmed);
    } // setupUi

    void retranslateUi(QDialog *Addmed)
    {
        Addmed->setWindowTitle(QCoreApplication::translate("Addmed", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Addmed", "<html><head/><body><p><span style=\" font-weight:700; text-decoration: underline;\">ADD NEW MEDICINE</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Addmed", "  ID", nullptr));
        label_2->setText(QCoreApplication::translate("Addmed", "Medicine", nullptr));
        label_3->setText(QCoreApplication::translate("Addmed", "Quantity", nullptr));
        label_4->setText(QCoreApplication::translate("Addmed", "MRP", nullptr));
        label_8->setText(QCoreApplication::translate("Addmed", "Status", nullptr));
        label_11->setText(QCoreApplication::translate("Addmed", "Location :", nullptr));
        label_9->setText(QCoreApplication::translate("Addmed", "Expiry :", nullptr));
        label_5->setText(QCoreApplication::translate("Addmed", "DD", nullptr));
        label_6->setText(QCoreApplication::translate("Addmed", "MM", nullptr));
        label_7->setText(QCoreApplication::translate("Addmed", "YY", nullptr));
        pushButton->setText(QCoreApplication::translate("Addmed", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addmed: public Ui_Addmed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMED_H
