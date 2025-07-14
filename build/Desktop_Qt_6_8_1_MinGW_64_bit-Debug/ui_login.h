/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(560, 295);
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 81, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:20px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 81, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 90, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"color:black;\n"
"font-size:15px;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 140, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"color:black;\n"
"font-size:15px;\n"
"}\n"
""));
        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 140, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        pushButton = new QPushButton(login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 190, 80, 18));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login", "   Login", nullptr));
        label_2->setText(QCoreApplication::translate("login", " Username:", nullptr));
        label_3->setText(QCoreApplication::translate("login", "  Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
