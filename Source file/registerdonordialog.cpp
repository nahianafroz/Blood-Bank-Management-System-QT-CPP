#include "RegisterDonorDialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include<QLineEdit>

RegisterDonorDialog::RegisterDonorDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Register Donor");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QFormLayout *formLayout = new QFormLayout();
    nameEdit = new QLineEdit(this);
    ageEdit = new QLineEdit(this);
    bloodTypeEdit = new QLineEdit(this);
    contactInfoEdit = new QLineEdit(this);
    lastDonationDateEdit = new QLineEdit(this);

    formLayout->addRow("Name:", nameEdit);
    formLayout->addRow("Age:", ageEdit);
    formLayout->addRow("Blood Type:", bloodTypeEdit);
    formLayout->addRow("Contact Info:", contactInfoEdit);
    formLayout->addRow("Last Donation Date:", lastDonationDateEdit);

    layout->addLayout(formLayout);

    QPushButton *saveButton = new QPushButton("Save", this);
    layout->addWidget(saveButton);

    connect(saveButton, &QPushButton::clicked, this, &RegisterDonorDialog::saveDonor);
}

RegisterDonorDialog::~RegisterDonorDialog() {}

void RegisterDonorDialog::saveDonor()
{
    QString name = nameEdit->text();
    QString age = ageEdit->text();
    QString bloodType = bloodTypeEdit->text();
    QString contactInfo = contactInfoEdit->text();
    QString lastDonationDate = lastDonationDateEdit->text();

    if (name.isEmpty() || age.isEmpty() || bloodType.isEmpty() || contactInfo.isEmpty() || lastDonationDate.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required!");
        return;
    }

    QFile file("donors.txt");
    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.contains(name)) {
                QMessageBox::warning(this, "Error", "Donor already registered!");
                return;
            }
        }

        QTextStream out(&file);
        out << name << "," << age << "," << bloodType << "," << contactInfo << "," << lastDonationDate << "\n";
        file.close();

        QMessageBox::information(this, "Success", "Donor registered successfully!");
        this->accept();
    } else {
        QMessageBox::critical(this, "Error", "Could not open file for writing!");
    }
}
