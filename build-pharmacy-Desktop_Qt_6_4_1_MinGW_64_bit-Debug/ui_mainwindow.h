/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLineEdit *getusername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pass;
    QLineEdit *getpassword;
    QToolButton *showhide_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labe_role;
    QComboBox *getrole;
    QPushButton *loginbutton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 90, 381, 321));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 361, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName("label_username");

        horizontalLayout->addWidget(label_username);

        getusername = new QLineEdit(layoutWidget);
        getusername->setObjectName("getusername");

        horizontalLayout->addWidget(getusername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_pass = new QLabel(layoutWidget);
        label_pass->setObjectName("label_pass");

        horizontalLayout_2->addWidget(label_pass);

        getpassword = new QLineEdit(layoutWidget);
        getpassword->setObjectName("getpassword");

        horizontalLayout_2->addWidget(getpassword);

        showhide_button = new QToolButton(layoutWidget);
        showhide_button->setObjectName("showhide_button");

        horizontalLayout_2->addWidget(showhide_button);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labe_role = new QLabel(layoutWidget);
        labe_role->setObjectName("labe_role");

        horizontalLayout_3->addWidget(labe_role);

        getrole = new QComboBox(layoutWidget);
        getrole->addItem(QString());
        getrole->addItem(QString());
        getrole->setObjectName("getrole");

        horizontalLayout_3->addWidget(getrole);


        verticalLayout->addLayout(horizontalLayout_3);

        loginbutton = new QPushButton(layoutWidget);
        loginbutton->setObjectName("loginbutton");

        verticalLayout->addWidget(loginbutton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 351, 44));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "USERNAME :", nullptr));
        label_pass->setText(QCoreApplication::translate("MainWindow", "PASSWORD :", nullptr));
        showhide_button->setText(QString());
        labe_role->setText(QCoreApplication::translate("MainWindow", "ROLE :", nullptr));
        getrole->setItemText(0, QCoreApplication::translate("MainWindow", "Employee", nullptr));
        getrole->setItemText(1, QCoreApplication::translate("MainWindow", "Admin", nullptr));

        loginbutton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; text-decoration: underline;\">SRM MEDICAL STORE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
