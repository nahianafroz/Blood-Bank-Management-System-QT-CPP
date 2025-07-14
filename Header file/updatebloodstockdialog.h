#ifndef UPDATEBLOODSTOCKDIALOG_H
#define UPDATEBLOODSTOCKDIALOG_H

#include <QDialog>
#include<QLineEdit>

class UpdateBloodStockDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateBloodStockDialog(QWidget *parent = nullptr);
    ~UpdateBloodStockDialog();

private slots:
    void updateStock();

private:
    QLineEdit *bloodTypeEdit;
    QLineEdit *quantityEdit;
};

#endif // UPDATEBLOODSTOCKDIALOG_H
