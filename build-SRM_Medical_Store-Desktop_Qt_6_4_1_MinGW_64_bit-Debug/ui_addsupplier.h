/********************************************************************************
** Form generated from reading UI file 'addsupplier.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPPLIER_H
#define UI_ADDSUPPLIER_H

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

class Ui_Addsupplier
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *Addsupplier)
    {
        if (Addsupplier->objectName().isEmpty())
            Addsupplier->setObjectName("Addsupplier");
        Addsupplier->resize(445, 337);
        pushButton = new QPushButton(Addsupplier);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 270, 111, 51));
        widget = new QWidget(Addsupplier);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 50, 341, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_4->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_5);

#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_5->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Addsupplier);

        QMetaObject::connectSlotsByName(Addsupplier);
    } // setupUi

    void retranslateUi(QDialog *Addsupplier)
    {
        Addsupplier->setWindowTitle(QCoreApplication::translate("Addsupplier", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Addsupplier", "ADD", nullptr));
        label->setText(QCoreApplication::translate("Addsupplier", "Supplier", nullptr));
        label_2->setText(QCoreApplication::translate("Addsupplier", "Company", nullptr));
        label_3->setText(QCoreApplication::translate("Addsupplier", "Product Name:", nullptr));
        label_5->setText(QCoreApplication::translate("Addsupplier", "Product ID", nullptr));
        label_4->setText(QCoreApplication::translate("Addsupplier", "Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Addsupplier: public Ui_Addsupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPPLIER_H
