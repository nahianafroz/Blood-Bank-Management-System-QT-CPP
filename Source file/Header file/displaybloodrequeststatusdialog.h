#ifndef DISPLAYBLOODREQUESTSTATUSDIALOG_H
#define DISPLAYBLOODREQUESTSTATUSDIALOG_H

#include <QDialog>

namespace Ui {
class statusTextEdit;
}

class DisplayBloodRequestStatusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayBloodRequestStatusDialog(QWidget *parent = nullptr);
    ~DisplayBloodRequestStatusDialog();

    void loadBloodRequestStatus();

private:
    Ui::statusTextEdit *ui;

private slots:
    void onCloseButtonClicked();
};

#endif // DISPLAYBLOODREQUESTSTATUSDIALOG_H

