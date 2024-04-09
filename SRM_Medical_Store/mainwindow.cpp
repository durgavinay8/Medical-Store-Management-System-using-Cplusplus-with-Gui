#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CheckLogin.h"

#include <QApplication>
#include <QMessageBox>
#include <iostream>
#include <string.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    ui->verticalLayout_2->setAlignment(Qt::AlignCenter);
    setWindowTitle("SRM MEDICAL STORE");

    ui->getusername->setClearButtonEnabled(true);
    ui->getpassword->setClearButtonEnabled(true);
    ui->getpassword->setEchoMode(QLineEdit::Password);
    ui->showhide_button->setIcon(QIcon("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\hidepng.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbutton_clicked()
{
    QString username = ui->getusername->text();
    QString password = ui->getpassword->text();
    QString role_text = ui->getrole->currentText();
    if(CheckLogin(role_text,username,password)==1)
    {
        this->close();
        myShowMenu=new ShowMenu(ui->getusername->text());
        myShowMenu->show();
    }
    else
    {
        QMessageBox::information(this,"login","Incorrect password or username or role !");
    }
}

void MainWindow::on_showhide_button_clicked()
{
    static bool pressed;
    if(!pressed)
    {
        ui->getpassword->setEchoMode(QLineEdit::Normal);
        ui->showhide_button->setIcon(QIcon("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\showpng.png"));
        pressed=1;
    }
    else
    {
        ui->getpassword->setEchoMode(QLineEdit::Password);
        ui->showhide_button->setIcon(QIcon("C:\\Users\\Durga Vinay\\Desktop\\Cpp project\\hidepng.png"));
        pressed=0;
    }
}
