#include "logbloodrequestdialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

#include<QLineEdit>
LogBloodRequestDialog::LogBloodRequestDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Log Blood Request");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QFormLayout *formLayout = new QFormLayout();
    bloodTypeEdit = new QLineEdit(this);
    quantityEdit = new QLineEdit(this);

    formLayout->addRow("Blood Type:", bloodTypeEdit);
    formLayout->addRow("Quantity:", quantityEdit);

    layout->addLayout(formLayout);

    QPushButton *logButton = new QPushButton("Log Request", this);
    layout->addWidget(logButton);

    connect(logButton, &QPushButton::clicked, this, &LogBloodRequestDialog::logRequest);
}

LogBloodRequestDialog::~LogBloodRequestDialog() {}

void LogBloodRequestDialog::logRequest()
{
    QString bloodType = bloodTypeEdit->text();
    QString quantity = quantityEdit->text();

    if (bloodType.isEmpty() || quantity.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required!");
        return;
    }

    QFile file("blood_requests.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << bloodType << "," << quantity << ",Pending\n";
        file.close();
        QMessageBox::information(this, "Success", "Blood request logged for " + bloodType + "!");
        this->accept();
    } else {
        QMessageBox::critical(this, "Error", "Could not log blood request!");
    }
}
