/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName("OptionsDialog");
        OptionsDialog->resize(568, 287);
        pushButton = new QPushButton(OptionsDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 60, 151, 20));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        pushButton_2 = new QPushButton(OptionsDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 90, 131, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        pushButton_3 = new QPushButton(OptionsDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(170, 120, 171, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        pushButton_4 = new QPushButton(OptionsDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(170, 150, 171, 18));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        pushButton_5 = new QPushButton(OptionsDialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(160, 180, 211, 20));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        pushButton_6 = new QPushButton(OptionsDialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(170, 210, 171, 20));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:13px;\n"
"background: light gray;\n"
"color:white;\n"
"}"));
        label = new QLabel(OptionsDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 231, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(OptionsDialog);

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("OptionsDialog", "Register Donor", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OptionsDialog", "Register Patient", nullptr));
        pushButton_3->setText(QCoreApplication::translate("OptionsDialog", "Search Donor by Blood Type", nullptr));
        pushButton_4->setText(QCoreApplication::translate("OptionsDialog", "Update Blood Stock", nullptr));
        pushButton_5->setText(QCoreApplication::translate("OptionsDialog", "Log Blood Request", nullptr));
        pushButton_6->setText(QCoreApplication::translate("OptionsDialog", "Display Blood Request Status", nullptr));
        label->setText(QCoreApplication::translate("OptionsDialog", "                      Options ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
