#include "displaybloodrequeststatusdialog.h"
#include "ui_displaybloodrequeststatusdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>




DisplayBloodRequestStatusDialog::DisplayBloodRequestStatusDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statusTextEdit)
{
    ui->setupUi(this);

    // Connect the close button
    connect(ui->pushButton, &QPushButton::clicked, this, &DisplayBloodRequestStatusDialog::onCloseButtonClicked);


    // Load blood request status when the dialog is shown
    loadBloodRequestStatus();
}

DisplayBloodRequestStatusDialog::~DisplayBloodRequestStatusDialog()
{
    delete ui;
}

void DisplayBloodRequestStatusDialog::loadBloodRequestStatus()
{
    QFile file("blood_requests.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->textEdit->setText("No blood requests found.");
        return;
    }

    QTextStream in(&file);
    QString data;
    while (!in.atEnd()) {
        data += in.readLine() + "\n";
    }
    file.close();

    if (data.isEmpty()) {
        ui->textEdit->setText("No blood requests found.");
    } else {
        ui->textEdit->setText(data);
    }
}

void DisplayBloodRequestStatusDialog::onCloseButtonClicked()
{
    this->close();
}
