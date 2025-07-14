

#ifndef LOGBLOODREQUESTDIALOG_H
#define LOGBLOODREQUESTDIALOG_H

#include <QDialog>

#include<QLineEdit>
class LogBloodRequestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogBloodRequestDialog(QWidget *parent = nullptr);
    ~LogBloodRequestDialog();

private slots:
    void logRequest();

private:
    QLineEdit *bloodTypeEdit;
    QLineEdit *quantityEdit;
};

#endif // LOGBLOODREQUESTDIALOG_H
