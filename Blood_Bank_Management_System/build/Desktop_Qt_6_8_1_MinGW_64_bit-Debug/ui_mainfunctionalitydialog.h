/********************************************************************************
** Form generated from reading UI file 'mainfunctionalitydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFUNCTIONALITYDIALOG_H
#define UI_MAINFUNCTIONALITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainfunctionalitydialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *mainfunctionalitydialog)
    {
        if (mainfunctionalitydialog->objectName().isEmpty())
            mainfunctionalitydialog->setObjectName("mainfunctionalitydialog");
        mainfunctionalitydialog->resize(400, 300);
        label = new QLabel(mainfunctionalitydialog);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 30, 37, 12));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        pushButton = new QPushButton(mainfunctionalitydialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 140, 80, 18));
        pushButton_2 = new QPushButton(mainfunctionalitydialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 190, 80, 18));
        pushButton_3 = new QPushButton(mainfunctionalitydialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 90, 80, 18));
        pushButton_4 = new QPushButton(mainfunctionalitydialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 80, 80, 18));
        pushButton_5 = new QPushButton(mainfunctionalitydialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(200, 150, 80, 18));
        pushButton_6 = new QPushButton(mainfunctionalitydialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(180, 210, 80, 18));

        retranslateUi(mainfunctionalitydialog);

        QMetaObject::connectSlotsByName(mainfunctionalitydialog);
    } // setupUi

    void retranslateUi(QDialog *mainfunctionalitydialog)
    {
        mainfunctionalitydialog->setWindowTitle(QCoreApplication::translate("mainfunctionalitydialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mainfunctionalitydialog", "login is succesfulll", nullptr));
        pushButton->setText(QCoreApplication::translate("mainfunctionalitydialog", "Patient Registration", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainfunctionalitydialog", "Search Donor", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainfunctionalitydialog", "Donor Registration", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainfunctionalitydialog", "Update Blood Stock", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainfunctionalitydialog", "Log Blood Request", nullptr));
        pushButton_6->setText(QCoreApplication::translate("mainfunctionalitydialog", "Display Blood Request", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainfunctionalitydialog: public Ui_mainfunctionalitydialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFUNCTIONALITYDIALOG_H
