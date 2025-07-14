#ifndef SEARCHDONORDIALOG_H
#define SEARCHDONORDIALOG_H

#include "qlineedit.h"
#include <QDialog>
#include<QTextEdit>


class SearchDonorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDonorDialog(QWidget *parent = nullptr);
    ~SearchDonorDialog();

private slots:
    void searchDonor();

private:
    QLineEdit *bloodTypeEdit;
    QTextEdit *resultDisplay;
};

#endif // SEARCHDONORDIALOG_H
