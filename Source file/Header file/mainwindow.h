/*#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "signup.h"
#include "login.h"
#include "RegisterDonorDialog.h"
#include "RegisterPatientDialog.h"
#include "searchdonordialog.h"
#include "UpdateBloodStockDialog.h"
#include "LogBloodRequestDialog.h"
#include "DisplayBloodRequestStatusDialog.h"

#include <QMainWindow>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void signupfun();
    void on_Add(const QString &urnm, const QString &pass);
    void loginfun();
    void validateLogin(const QString &username, const QString &password);

    // Dialog slots
    void openRegisterDonorDialog();
    void openRegisterPatientDialog();
    void openSearchDonorDialog();
    void openUpdateBloodStockDialog();
    void openLogBloodRequestDialog();
    void openDisplayBloodRequestStatusDialog();

private:
    Ui::MainWindow *ui;
    signup *signupDialog;
    login *loginDialog;

    RegisterDonorDialog *registerDonorDialog;
    RegisterPatientDialog *registerPatientDialog;
    SearchDonorDialog *searchDonorDialog;
    UpdateBloodStockDialog *updateBloodStockDialog;
    LogBloodRequestDialog *logBloodRequestDialog;
    DisplayBloodRequestStatusDialog *displayBloodRequestStatusDialog;

    QStringList usernameList;
    QStringList passwordList;
};

#endif // MAINWINDOW_H                             FINAL CODE*/



#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup.h"
#include "login.h"
#include "OptionsDialog.h"
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void signupfun();
    void loginfun();
    void on_Add(const QString &urnm, const QString &pass);
    void validateLogin(const QString &username, const QString &password);

private:
    Ui::MainWindow *ui;
    signup *signupDialog;
    login *loginDialog;
    OptionsDialog *optionsDialog;
    QStringList usernameList;
    QStringList passwordList;
};
#endif // MAINWINDOW_H




