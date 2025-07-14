#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    // Connect the login button signal
    connect(ui->pushButton, &QPushButton::clicked, this, &login::onLoginButtonClicked);
}

login::~login()
{
    delete ui;
}

void login::onLoginButtonClicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Username or password cannot be empty!");
        return;
    }

    // Emit signal to validate credentials
    emit checkCredentials(username, password);
}
















