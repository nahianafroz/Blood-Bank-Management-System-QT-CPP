#include "signup.h"
#include "qpushbutton.h"
#include "ui_signup.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &signup::addinfo_singup);
}

signup::~signup()
{
    delete ui;
}

void signup::addinfo_singup()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Username or password cannot be empty!");
        return;
    }

    // Save to file
    QFile file("credentials.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << "," << password << "\n";
        file.close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to save credentials!");
        return;
    }

    emit getVal(username, password);
    QMessageBox::information(this, "Success", "Signup is successful!");
    this->close(); // Close the signup dialog
}



