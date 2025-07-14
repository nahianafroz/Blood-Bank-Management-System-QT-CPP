#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

signals:
    void checkCredentials(const QString &username, const QString &password);

private slots:
    void onLoginButtonClicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H






