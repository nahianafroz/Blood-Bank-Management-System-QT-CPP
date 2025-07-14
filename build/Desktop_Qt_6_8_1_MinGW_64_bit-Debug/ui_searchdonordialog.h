/********************************************************************************
** Form generated from reading UI file 'searchdonordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDONORDIALOG_H
#define UI_SEARCHDONORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchDonorDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SearchDonorDialog)
    {
        if (SearchDonorDialog->objectName().isEmpty())
            SearchDonorDialog->setObjectName("SearchDonorDialog");
        SearchDonorDialog->resize(563, 307);
        label = new QLabel(SearchDonorDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 90, 91, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        lineEdit = new QLineEdit(SearchDonorDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 90, 113, 20));
        pushButton = new QPushButton(SearchDonorDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 200, 80, 18));
        label_2 = new QLabel(SearchDonorDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 20, 191, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"background: crimson;\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(SearchDonorDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 37, 12));

        retranslateUi(SearchDonorDialog);

        QMetaObject::connectSlotsByName(SearchDonorDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDonorDialog)
    {
        SearchDonorDialog->setWindowTitle(QCoreApplication::translate("SearchDonorDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SearchDonorDialog", "   Blood Type", nullptr));
        pushButton->setText(QCoreApplication::translate("SearchDonorDialog", "Search", nullptr));
        label_2->setText(QCoreApplication::translate("SearchDonorDialog", "Search Donor by Blood Type", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchDonorDialog: public Ui_SearchDonorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDONORDIALOG_H
