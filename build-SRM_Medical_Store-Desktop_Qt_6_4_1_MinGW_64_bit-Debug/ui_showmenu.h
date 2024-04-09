/********************************************************************************
** Form generated from reading UI file 'showmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMENU_H
#define UI_SHOWMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMenu
{
public:
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *logopage;
    QLabel *SRMlogo;
    QWidget *page1;
    QLabel *label;
    QPushButton *PlaceOrderButton;
    QPushButton *ExpiryButton;
    QPushButton *BillingButton;
    QPushButton *FilesButton;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *AllFilesButtons;
    QFrame *line_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *MedFileButton;
    QPushButton *SupplierFileButton;
    QPushButton *TransactionFileButton;

    void setupUi(QWidget *ShowMenu)
    {
        if (ShowMenu->objectName().isEmpty())
            ShowMenu->setObjectName("ShowMenu");
        ShowMenu->resize(1500, 740);
        groupBox = new QGroupBox(ShowMenu);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 1500, 771));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 50, 1360, 661));
        logopage = new QWidget();
        logopage->setObjectName("logopage");
        SRMlogo = new QLabel(logopage);
        SRMlogo->setObjectName("SRMlogo");
        SRMlogo->setGeometry(QRect(480, 200, 561, 221));
        stackedWidget->addWidget(logopage);
        page1 = new QWidget();
        page1->setObjectName("page1");
        stackedWidget->addWidget(page1);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 180, 91, 41));
        PlaceOrderButton = new QPushButton(groupBox);
        PlaceOrderButton->setObjectName("PlaceOrderButton");
        PlaceOrderButton->setGeometry(QRect(20, 390, 120, 50));
        PlaceOrderButton->setCursor(QCursor(Qt::PointingHandCursor));
        ExpiryButton = new QPushButton(groupBox);
        ExpiryButton->setObjectName("ExpiryButton");
        ExpiryButton->setGeometry(QRect(20, 320, 120, 50));
        ExpiryButton->setCursor(QCursor(Qt::PointingHandCursor));
        BillingButton = new QPushButton(groupBox);
        BillingButton->setObjectName("BillingButton");
        BillingButton->setGeometry(QRect(20, 250, 120, 50));
        BillingButton->setCursor(QCursor(Qt::PointingHandCursor));
        FilesButton = new QPushButton(groupBox);
        FilesButton->setObjectName("FilesButton");
        FilesButton->setGeometry(QRect(20, 460, 120, 50));
        FilesButton->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(150, 40, 20, 701));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(20, 230, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(20, 300, 118, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(groupBox);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(20, 380, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(20, 450, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(20, 520, 118, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        AllFilesButtons = new QFrame(groupBox);
        AllFilesButtons->setObjectName("AllFilesButtons");
        AllFilesButtons->setGeometry(QRect(20, 530, 120, 181));
        AllFilesButtons->setFrameShape(QFrame::StyledPanel);
        AllFilesButtons->setFrameShadow(QFrame::Raised);
        line_7 = new QFrame(AllFilesButtons);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(0, 20, 20, 141));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(AllFilesButtons);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(22, 10, 91, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MedFileButton = new QPushButton(layoutWidget);
        MedFileButton->setObjectName("MedFileButton");
        MedFileButton->setMinimumSize(QSize(50, 40));

        verticalLayout->addWidget(MedFileButton);

        SupplierFileButton = new QPushButton(layoutWidget);
        SupplierFileButton->setObjectName("SupplierFileButton");
        SupplierFileButton->setMinimumSize(QSize(50, 40));

        verticalLayout->addWidget(SupplierFileButton);

        TransactionFileButton = new QPushButton(layoutWidget);
        TransactionFileButton->setObjectName("TransactionFileButton");
        TransactionFileButton->setMinimumSize(QSize(50, 40));

        verticalLayout->addWidget(TransactionFileButton);


        retranslateUi(ShowMenu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShowMenu);
    } // setupUi

    void retranslateUi(QWidget *ShowMenu)
    {
        ShowMenu->setWindowTitle(QCoreApplication::translate("ShowMenu", "SRM MEDICAL STORE", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShowMenu", "SRM MEDICAL STORE", nullptr));
        SRMlogo->setText(QCoreApplication::translate("ShowMenu", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("ShowMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">MENU</span></p></body></html>", nullptr));
        PlaceOrderButton->setText(QCoreApplication::translate("ShowMenu", "PlaceOrder", nullptr));
        ExpiryButton->setText(QCoreApplication::translate("ShowMenu", "Expiry", nullptr));
        BillingButton->setText(QCoreApplication::translate("ShowMenu", "Billing", nullptr));
        FilesButton->setText(QCoreApplication::translate("ShowMenu", "Files", nullptr));
        MedFileButton->setText(QCoreApplication::translate("ShowMenu", "Medcines List", nullptr));
        SupplierFileButton->setText(QCoreApplication::translate("ShowMenu", "Supplier", nullptr));
        TransactionFileButton->setText(QCoreApplication::translate("ShowMenu", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMenu: public Ui_ShowMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMENU_H
