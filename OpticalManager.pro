#-------------------------------------------------
#
# Project created by QtCreator 2012-09-26T13:34:02
#
#-------------------------------------------------

QT       += core gui
QT += sql
TARGET = OpticalManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sesion.cpp \
    conexionbd.cpp \
    ui_login.cpp \
    ui_cambiarpassdialog.cpp \
    usuario.cpp

HEADERS  += mainwindow.h \
    sesion.h \
    conexionbd.h \
    ui_login.h \
    ui_cambiarpassdialog.h \
    usuario.h

FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui

RESOURCES += \
    Icons/Icons.qrc \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
