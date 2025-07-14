/********************************************************************************
** Form generated from reading UI file 'registerpatientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPATIENTDIALOG_H
#define UI_REGISTERPATIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterPatientDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *RegisterPatientDialog)
    {
        if (RegisterPatientDialog->objectName().isEmpty())
            RegisterPatientDialog->setObjectName("RegisterPatientDialog");
        RegisterPatientDialog->resize(568, 286);
        pushButton = new QPushButton(RegisterPatientDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 240, 80, 18));
        label = new QLabel(RegisterPatientDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 130, 171, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(RegisterPatientDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 170, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(RegisterPatientDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 51, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(RegisterPatientDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 50, 113, 20));
        lineEdit_2 = new QLineEdit(RegisterPatientDialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 90, 113, 20));
        lineEdit_3 = new QLineEdit(RegisterPatientDialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 130, 113, 20));
        lineEdit_4 = new QLineEdit(RegisterPatientDialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 170, 113, 20));
        label_4 = new QLabel(RegisterPatientDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 50, 51, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_5 = new QLabel(RegisterPatientDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 20, 151, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(RegisterPatientDialog);

        QMetaObject::connectSlotsByName(RegisterPatientDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterPatientDialog)
    {
        RegisterPatientDialog->setWindowTitle(QCoreApplication::translate("RegisterPatientDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterPatientDialog", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterPatientDialog", "Required Blood Type", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterPatientDialog", "Contact Info", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterPatientDialog", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterPatientDialog", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterPatientDialog", "Register patient ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPatientDialog: public Ui_RegisterPatientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPATIENTDIALOG_H
