#ifndef SHOWTRANSACTIONS_H
#define SHOWTRANSACTIONS_H

#include <QDialog>

namespace Ui {
class ShowTransactions;
}

class ShowTransactions : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTransactions(QWidget *parent = nullptr);
    ~ShowTransactions();

private slots:
    void WriteTransactions();

private:
    Ui::ShowTransactions *ui;
};

#endif // SHOWTRANSACTIONS_H
