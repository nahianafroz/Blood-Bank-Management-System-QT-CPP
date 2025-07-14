#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signup; // Forward declaration for the UI class
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

signals:
    void getVal(const QString &urnm, const QString &pass);

private slots:
    void addinfo_singup();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H











