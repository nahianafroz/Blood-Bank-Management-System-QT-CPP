QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    displaybloodrequeststatusdialog.cpp \
    logbloodrequestdialog.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    optionsdialog.cpp \
    registerdonordialog.cpp \
    registerpatientdialog.cpp \
    searchdonordialog.cpp \
    signup.cpp \
    updatebloodstockdialog.cpp

HEADERS += \
    displaybloodrequeststatusdialog.h \
    logbloodrequestdialog.h \
    login.h \
    mainwindow.h \
    optionsdialog.h \
    registerdonordialog.h \
    registerpatientdialog.h \
    searchdonordialog.h \
    signup.h \
    updatebloodstockdialog.h

FORMS += \
    displaybloodrequeststatusdialog.ui \
    logbloodrequestdialog.ui \
    login.ui \
    mainwindow.ui \
    optionsdialog.ui \
    registerdonordialog.ui \
    registerpatientdialog.ui \
    searchdonordialog.ui \
    signup.ui \
    updatebloodstockdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
