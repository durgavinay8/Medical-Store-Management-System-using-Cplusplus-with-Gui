#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "showmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ShowMenu *myShowMenu;
    ~MainWindow();

private slots:
    void on_loginbutton_clicked();

    void on_showhide_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
