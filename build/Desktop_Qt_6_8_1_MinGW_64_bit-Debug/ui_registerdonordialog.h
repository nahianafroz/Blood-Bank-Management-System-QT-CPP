/********************************************************************************
** Form generated from reading UI file 'registerdonordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDONORDIALOG_H
#define UI_REGISTERDONORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterDonorDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QDialog *RegisterDonorDialog)
    {
        if (RegisterDonorDialog->objectName().isEmpty())
            RegisterDonorDialog->setObjectName("RegisterDonorDialog");
        RegisterDonorDialog->resize(565, 287);
        label = new QLabel(RegisterDonorDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 37, 12));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:10px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(RegisterDonorDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 50, 113, 20));
        lineEdit_2 = new QLineEdit(RegisterDonorDialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 90, 113, 20));
        lineEdit_3 = new QLineEdit(RegisterDonorDialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 130, 113, 20));
        lineEdit_4 = new QLineEdit(RegisterDonorDialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(140, 210, 113, 20));
        lineEdit_5 = new QLineEdit(RegisterDonorDialog);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(140, 170, 113, 20));
        label_2 = new QLabel(RegisterDonorDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 210, 81, 20));
        label_3 = new QLabel(RegisterDonorDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 90, 37, 12));
        label_4 = new QLabel(RegisterDonorDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 130, 81, 20));
        label_5 = new QLabel(RegisterDonorDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 170, 111, 20));
        pushButton = new QPushButton(RegisterDonorDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 260, 80, 18));
        label_6 = new QLabel(RegisterDonorDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 20, 161, 16));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(RegisterDonorDialog);

        QMetaObject::connectSlotsByName(RegisterDonorDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDonorDialog)
    {
        RegisterDonorDialog->setWindowTitle(QCoreApplication::translate("RegisterDonorDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterDonorDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDonorDialog", "Last Donation Date", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterDonorDialog", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDonorDialog", "Blood Type", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterDonorDialog", "Contact Info", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterDonorDialog", "Register", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterDonorDialog", "Register Donor ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDonorDialog: public Ui_RegisterDonorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDONORDIALOG_H
