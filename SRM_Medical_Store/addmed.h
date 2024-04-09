#ifndef ADDMED_H
#define ADDMED_H

#include <QDialog>

namespace Ui {
class Addmed;
}

class Addmed : public QDialog
{
    Q_OBJECT

public:
    explicit Addmed(QWidget *parent = nullptr);
    ~Addmed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Addmed *ui;
};

#endif // ADDMED_H
