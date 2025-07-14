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



