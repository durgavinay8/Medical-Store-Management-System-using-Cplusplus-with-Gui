#ifndef SHOWMEDLIST_H
#define SHOWMEDLIST_H

#include <QDialog>

namespace Ui {
class ShowMedList;
}

class ShowMedList : public QDialog
{
    Q_OBJECT

public:
    explicit ShowMedList(QWidget *parent = nullptr);
    ~ShowMedList();

private slots:
    void on_AddnewmedButton_clicked();
    void on_DeleteMedButton_clicked();
    //void on_pushButton_2_clicked();

    void on_EditButton_clicked();

private:
    Ui::ShowMedList *ui;
};

#endif // SHOWMEDLIST_H
