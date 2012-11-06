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
    usuario.cpp \
    producto.cpp \
    marca.cpp \
    objetopersistente.cpp \
    ui_data_client.cpp \
    ui_client.cpp \
    cliente.cpp

HEADERS  += mainwindow.h \
    sesion.h \
    conexionbd.h \
    ui_login.h \
    ui_cambiarpassdialog.h \
    usuario.h \
    producto.h \
    marca.h \
    objetopersistente.h \
    ui_data_client.h \
    ui_client.h \
    cliente.h

FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui \
    ui_data_client.ui \
    ui_client.ui

RESOURCES += \
    Icons/Icons.qrc \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
