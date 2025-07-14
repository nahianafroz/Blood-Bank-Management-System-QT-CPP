/********************************************************************************
** Form generated from reading UI file 'successdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSDIALOG_H
#define UI_SUCCESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_successdialog
{
public:
    QLabel *label;

    void setupUi(QDialog *successdialog)
    {
        if (successdialog->objectName().isEmpty())
            successdialog->setObjectName("successdialog");
        successdialog->resize(400, 300);
        label = new QLabel(successdialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 221, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:25px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));

        retranslateUi(successdialog);

        QMetaObject::connectSlotsByName(successdialog);
    } // setupUi

    void retranslateUi(QDialog *successdialog)
    {
        successdialog->setWindowTitle(QCoreApplication::translate("successdialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("successdialog", "login successfull", nullptr));
    } // retranslateUi

};

namespace Ui {
    class successdialog: public Ui_successdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSDIALOG_H
