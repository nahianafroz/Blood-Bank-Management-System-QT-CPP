#include "OptionsDialog.h"
#include "RegisterDonorDialog.h"
#include "RegisterPatientDialog.h"
#include "SearchDonorDialog.h"
#include "UpdateBloodStockDialog.h"
#include "LogBloodRequestDialog.h"
#include "DisplayBloodRequestStatusDialog.h"

#include <QVBoxLayout>
#include <QPushButton>

OptionsDialog::OptionsDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Options");
    QVBoxLayout *layout = new QVBoxLayout(this);

    registerDonorButton = new QPushButton("Register Donor", this);
    registerPatientButton = new QPushButton("Register Patient", this);
    searchDonorButton = new QPushButton("Search Donor by Blood Type", this);
    updateBloodStockButton = new QPushButton("Update Blood Stock", this);
    logBloodRequestButton = new QPushButton("Log Blood Request", this);
    displayBloodRequestStatusButton = new QPushButton("Display Blood Request Status", this);

    layout->addWidget(registerDonorButton);
    layout->addWidget(registerPatientButton);
    layout->addWidget(searchDonorButton);
    layout->addWidget(updateBloodStockButton);
    layout->addWidget(logBloodRequestButton);
    layout->addWidget(displayBloodRequestStatusButton);

    connect(registerDonorButton, &QPushButton::clicked, this, &OptionsDialog::registerDonor);
    connect(registerPatientButton, &QPushButton::clicked, this, &OptionsDialog::registerPatient);
    connect(searchDonorButton, &QPushButton::clicked, this, &OptionsDialog::searchDonor);
    connect(updateBloodStockButton, &QPushButton::clicked, this, &OptionsDialog::updateBloodStock);
    connect(logBloodRequestButton, &QPushButton::clicked, this, &OptionsDialog::logBloodRequest);
    connect(displayBloodRequestStatusButton, &QPushButton::clicked, this, &OptionsDialog::displayBloodRequestStatus);
}

OptionsDialog::~OptionsDialog() {}

void OptionsDialog::registerDonor()
{
    RegisterDonorDialog dialog(this);
    dialog.exec();
}

void OptionsDialog::registerPatient()
{
    RegisterPatientDialog dialog(this);
    dialog.exec();
}

void OptionsDialog::searchDonor()
{
    SearchDonorDialog dialog(this);
    dialog.exec();
}

void OptionsDialog::updateBloodStock()
{
    UpdateBloodStockDialog dialog(this);
    dialog.exec();
}

void OptionsDialog::logBloodRequest()
{
    LogBloodRequestDialog dialog(this);
    dialog.exec();
}

void OptionsDialog::displayBloodRequestStatus()
{
    DisplayBloodRequestStatusDialog dialog(this);
    dialog.exec();
}



























