#ifndef SUPPLIERDATA_H
#define SUPPLIERDATA_H

#include <QDialog>
#include "addsupplier.h"

namespace Ui {
class supplierData;
}

class supplierData : public QDialog
{
    Q_OBJECT

public:
    explicit supplierData(QWidget *parent = nullptr);
    ~supplierData();

private slots:
    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

    void on_AddButton_2_clicked();

private:
    Ui::supplierData *ui;
};

#endif // SUPPLIERDATA_H
