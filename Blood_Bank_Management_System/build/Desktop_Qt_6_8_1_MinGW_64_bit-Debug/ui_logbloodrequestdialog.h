/********************************************************************************
** Form generated from reading UI file 'logbloodrequestdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGBLOODREQUESTDIALOG_H
#define UI_LOGBLOODREQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LogBloodRequestDialog
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *LogBloodRequestDialog)
    {
        if (LogBloodRequestDialog->objectName().isEmpty())
            LogBloodRequestDialog->setObjectName("LogBloodRequestDialog");
        LogBloodRequestDialog->resize(561, 300);
        lineEdit = new QLineEdit(LogBloodRequestDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 110, 113, 20));
        label = new QLabel(LogBloodRequestDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 110, 131, 16));
        pushButton = new QPushButton(LogBloodRequestDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 210, 80, 18));
        label_2 = new QLabel(LogBloodRequestDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 30, 211, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(LogBloodRequestDialog);

        QMetaObject::connectSlotsByName(LogBloodRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *LogBloodRequestDialog)
    {
        LogBloodRequestDialog->setWindowTitle(QCoreApplication::translate("LogBloodRequestDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LogBloodRequestDialog", "Required Blood Type:", nullptr));
        pushButton->setText(QCoreApplication::translate("LogBloodRequestDialog", "Log", nullptr));
        label_2->setText(QCoreApplication::translate("LogBloodRequestDialog", "Log Blood Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogBloodRequestDialog: public Ui_LogBloodRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGBLOODREQUESTDIALOG_H
