#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <QDialog>

class OptionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsDialog(QWidget *parent = nullptr);
    ~OptionsDialog();

private slots:
    void registerDonor();
    void registerPatient();
    void searchDonor();
    void updateBloodStock();
    void logBloodRequest();
    void displayBloodRequestStatus();

private:
    QPushButton *registerDonorButton;
    QPushButton *registerPatientButton;
    QPushButton *searchDonorButton;
    QPushButton *updateBloodStockButton;
    QPushButton *logBloodRequestButton;
    QPushButton *displayBloodRequestStatusButton;
};

#endif // OPTIONSDIALOG_H













