#ifndef ADDSUPPLIER_H
#define ADDSUPPLIER_H

#include <QDialog>
#include "addmed.h"

namespace Ui {
class Addsupplier;
}

class Addsupplier : public QDialog
{
    Q_OBJECT

public:
    explicit Addsupplier(QWidget *parent = nullptr);
    ~Addsupplier();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Addsupplier *ui;
};

#endif // ADDSUPPLIER_H
