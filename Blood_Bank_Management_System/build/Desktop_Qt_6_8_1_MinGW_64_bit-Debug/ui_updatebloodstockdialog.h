/********************************************************************************
** Form generated from reading UI file 'updatebloodstockdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBLOODSTOCKDIALOG_H
#define UI_UPDATEBLOODSTOCKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateBloodStockDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *UpdateBloodStockDialog)
    {
        if (UpdateBloodStockDialog->objectName().isEmpty())
            UpdateBloodStockDialog->setObjectName("UpdateBloodStockDialog");
        UpdateBloodStockDialog->resize(570, 282);
        pushButton = new QPushButton(UpdateBloodStockDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 240, 80, 18));
        label = new QLabel(UpdateBloodStockDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 90, 151, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(UpdateBloodStockDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 140, 161, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(UpdateBloodStockDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 80, 113, 20));
        lineEdit_2 = new QLineEdit(UpdateBloodStockDialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 140, 113, 20));
        label_3 = new QLabel(UpdateBloodStockDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 20, 151, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(UpdateBloodStockDialog);

        QMetaObject::connectSlotsByName(UpdateBloodStockDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateBloodStockDialog)
    {
        UpdateBloodStockDialog->setWindowTitle(QCoreApplication::translate("UpdateBloodStockDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateBloodStockDialog", "Update", nullptr));
        label->setText(QCoreApplication::translate("UpdateBloodStockDialog", "Blood Type", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateBloodStockDialog", "Quantity ", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateBloodStockDialog", "Update Blood Stock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateBloodStockDialog: public Ui_UpdateBloodStockDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBLOODSTOCKDIALOG_H
