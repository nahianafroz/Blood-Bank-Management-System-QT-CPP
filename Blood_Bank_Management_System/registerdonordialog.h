#ifndef REGISTERDONORDIALOG_H
#define REGISTERDONORDIALOG_H

#include "qlineedit.h"
#include <QDialog>
#include<QLineEdit>

class RegisterDonorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDonorDialog(QWidget *parent = nullptr);
    ~RegisterDonorDialog();

private slots:
    void saveDonor();

private:
    QLineEdit *nameEdit;
    QLineEdit *ageEdit;
    QLineEdit *bloodTypeEdit;
    QLineEdit *contactInfoEdit;
    QLineEdit *lastDonationDateEdit;
};

#endif // REGISTERDONORDIALOG_H
