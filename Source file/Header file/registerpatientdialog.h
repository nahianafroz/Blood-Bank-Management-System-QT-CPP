#ifndef REGISTERPATIENTDIALOG_H
#define REGISTERPATIENTDIALOG_H

#include "qlineedit.h"
#include <QDialog>
#include<QLineEdit>

class RegisterPatientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterPatientDialog(QWidget *parent = nullptr);
    ~RegisterPatientDialog();

private slots:
    void savePatient();

private:
    QLineEdit *nameEdit;
    QLineEdit *ageEdit;
    QLineEdit *bloodTypeEdit;
    QLineEdit *contactInfoEdit;
};

#endif // REGISTERPATIENTDIALOG_H

