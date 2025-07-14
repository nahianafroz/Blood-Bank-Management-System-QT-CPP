#include "RegisterPatientDialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

#include<QLineEdit>
RegisterPatientDialog::RegisterPatientDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Register Patient");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QFormLayout *formLayout = new QFormLayout();
    nameEdit = new QLineEdit(this);
    ageEdit = new QLineEdit(this);
    bloodTypeEdit = new QLineEdit(this);
    contactInfoEdit = new QLineEdit(this);

    formLayout->addRow("Name:", nameEdit);
    formLayout->addRow("Age:", ageEdit);
    formLayout->addRow("Required Blood Type:", bloodTypeEdit);
    formLayout->addRow("Contact Info:", contactInfoEdit);

    layout->addLayout(formLayout);

    QPushButton *saveButton = new QPushButton("Save", this);
    layout->addWidget(saveButton);

    connect(saveButton, &QPushButton::clicked, this, &RegisterPatientDialog::savePatient);
}

RegisterPatientDialog::~RegisterPatientDialog() {}

void RegisterPatientDialog::savePatient()
{
    QString name = nameEdit->text();
    QString age = ageEdit->text();
    QString bloodType = bloodTypeEdit->text();
    QString contactInfo = contactInfoEdit->text();

    if (name.isEmpty() || age.isEmpty() || bloodType.isEmpty() || contactInfo.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required!");
        return;
    }

    QFile file("patients.txt");
    if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            if (line.contains(name)) {
                QMessageBox::warning(this, "Error", "Patient already registered!");
                return;
            }
        }

        QTextStream out(&file);
        out << name << "," << age << "," << bloodType << "," << contactInfo << "\n";
        file.close();

        QMessageBox::information(this, "Success", "Patient registered successfully!");
        this->accept();
    } else {
        QMessageBox::critical(this, "Error", "Could not open file for writing!");
    }
}


