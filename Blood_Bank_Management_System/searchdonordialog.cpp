#include "searchdonordialog.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTextEdit>

SearchDonorDialog::SearchDonorDialog(QWidget *parent) : QDialog(parent)
{
    setWindowTitle("Search Donor by Blood Type");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QFormLayout *formLayout = new QFormLayout();
    bloodTypeEdit = new QLineEdit(this);
    formLayout->addRow("Blood Type:", bloodTypeEdit);

    layout->addLayout(formLayout);

    resultDisplay = new QTextEdit(this);
    resultDisplay->setReadOnly(true);
    layout->addWidget(resultDisplay);

    QPushButton *searchButton = new QPushButton("Search", this);
    layout->addWidget(searchButton);

    connect(searchButton, &QPushButton::clicked, this, &SearchDonorDialog::searchDonor);
}

SearchDonorDialog::~SearchDonorDialog() {}

void SearchDonorDialog::searchDonor()
{
    QString bloodType = bloodTypeEdit->text();

    if (bloodType.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a blood type to search!");
        return;
    }

    QFile file("donors.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        bool found = false;
        resultDisplay->clear();

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList details = line.split(",");
            if (details.size() == 5 && details[2] == bloodType) {
                found = true;
                resultDisplay->append("Name: " + details[0] + ", Contact: " + details[3]);
            }
        }

        if (!found) {
            resultDisplay->setText("No donors found with blood type: " + bloodType);
        }

        file.close();
    } else {
        QMessageBox::critical(this, "Error", "Could not open file for reading!");
    }
}
