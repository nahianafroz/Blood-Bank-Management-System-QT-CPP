#include "updatebloodstockdialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>

UpdateBloodStockDialog::UpdateBloodStockDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Update Blood Stock");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QFormLayout *formLayout = new QFormLayout();
    bloodTypeEdit = new QLineEdit(this);
    quantityEdit = new QLineEdit(this);

    formLayout->addRow("Blood Type:", bloodTypeEdit);
    formLayout->addRow("Quantity:", quantityEdit);

    layout->addLayout(formLayout);

    QPushButton *updateButton = new QPushButton("Update", this);
    layout->addWidget(updateButton);

    connect(updateButton, &QPushButton::clicked, this, &UpdateBloodStockDialog::updateStock);
}

UpdateBloodStockDialog::~UpdateBloodStockDialog() {}

void UpdateBloodStockDialog::updateStock()
{
    QString bloodType = bloodTypeEdit->text();
    QString quantity = quantityEdit->text();

    if (bloodType.isEmpty() || quantity.isEmpty()) {
        QMessageBox::warning(this, "Error", "All fields are required!");
        return;
    }

    QFile file("blood_stock.txt");
    QFile tempFile("temp_blood_stock.txt");
    if (file.open(QIODevice::ReadWrite | QIODevice::Text) && tempFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QTextStream out(&tempFile);
        bool updated = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList details = line.split(",");

            if (details.size() == 2 && details[0] == bloodType) {
                int currentStock = details[1].toInt();
                currentStock += quantity.toInt();
                out << bloodType << "," << currentStock << "\n";
                updated = true;
            } else {
                out << line << "\n";
            }
        }

        if (!updated) {
            out << bloodType << "," << quantity << "\n";
        }

        file.close();
        tempFile.close();

        file.remove();
        tempFile.rename("blood_stock.txt");

        QMessageBox::information(this, "Success", "Blood stock updated successfully!");
        this->accept();
    } else {
        QMessageBox::critical(this, "Error", "Could not update blood stock!");
    }
}


