/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(564, 300);
        label = new QLabel(signup);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 40, 111, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 120, 81, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(signup);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 120, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"color:black;\n"
"font-size:15px;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(signup);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 170, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"color:black;\n"
"font-size:15px;\n"
"}\n"
""));
        label_3 = new QLabel(signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        pushButton = new QPushButton(signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 240, 80, 18));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signup", "      SIGN UP", nullptr));
        label_2->setText(QCoreApplication::translate("signup", " Username:", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "  Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
