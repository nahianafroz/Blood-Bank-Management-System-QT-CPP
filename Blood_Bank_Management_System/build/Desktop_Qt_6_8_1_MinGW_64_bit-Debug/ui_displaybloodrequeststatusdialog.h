/********************************************************************************
** Form generated from reading UI file 'displaybloodrequeststatusdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYBLOODREQUESTSTATUSDIALOG_H
#define UI_DISPLAYBLOODREQUESTSTATUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_statusTextEdit
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *statusTextEdit)
    {
        if (statusTextEdit->objectName().isEmpty())
            statusTextEdit->setObjectName("statusTextEdit");
        statusTextEdit->resize(576, 280);
        pushButton = new QPushButton(statusTextEdit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 200, 80, 18));
        label = new QLabel(statusTextEdit);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 20, 171, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        textEdit = new QTextEdit(statusTextEdit);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(140, 80, 241, 64));

        retranslateUi(statusTextEdit);

        QMetaObject::connectSlotsByName(statusTextEdit);
    } // setupUi

    void retranslateUi(QDialog *statusTextEdit)
    {
        statusTextEdit->setWindowTitle(QCoreApplication::translate("statusTextEdit", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("statusTextEdit", "Exit", nullptr));
        label->setText(QCoreApplication::translate("statusTextEdit", "Display blood Request ", nullptr));
        textEdit->setHtml(QCoreApplication::translate("statusTextEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Status Info</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statusTextEdit: public Ui_statusTextEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYBLOODREQUESTSTATUSDIALOG_H
