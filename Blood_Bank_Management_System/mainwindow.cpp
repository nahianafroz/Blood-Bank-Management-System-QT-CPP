#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , signupDialog(new signup(this))
    , loginDialog(new login(this))
    , optionsDialog(nullptr)  // Initialize to nullptr since we'll create it after successful login
{
    ui->setupUi(this);

    // Connect signup button
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::signupfun);
    connect(signupDialog, &signup::getVal, this, &MainWindow::on_Add);

    // Connect login button
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::loginfun);
    connect(loginDialog, &login::checkCredentials, this, &MainWindow::validateLogin);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete signupDialog;
    delete loginDialog;
    // optionsDialog will be deleted automatically due to Qt::WA_DeleteOnClose
}

void MainWindow::signupfun()
{
    signupDialog->show();
}

void MainWindow::on_Add(const QString &urnm, const QString &pass)
{
    usernameList.append(urnm);
    passwordList.append(pass);
}

void MainWindow::loginfun()
{
    loginDialog->show();
}

void MainWindow::validateLogin(const QString &username, const QString &password)
{
    QFile file("credentials.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to load credentials!");
        return;
    }

    QTextStream in(&file);
    bool loginSuccess = false;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList credentials = line.split(",");
        if (credentials.size() == 2) {
            QString storedUsername = credentials.at(0);
            QString storedPassword = credentials.at(1);

            if (storedUsername == username && storedPassword == password) {
                loginSuccess = true;
                break;
            }
        }
    }

    file.close();

    if (loginSuccess) {
        QMessageBox::information(this, "Success", "Login successful!");
        loginDialog->accept();

        // Create and show the options dialog
        if (optionsDialog) {
            delete optionsDialog;
        }
        optionsDialog = new OptionsDialog(this);
        optionsDialog->setAttribute(Qt::WA_DeleteOnClose);
        optionsDialog->show();
    } else {
        QMessageBox::warning(this, "Error", "Invalid username or password!");
    }
}


