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
    usuario.cpp \
    conexionbd.cpp \
    ui_login.cpp \
    ui_cambiarpassdialog.cpp \
    ui_ingnomobscarac.cpp \
    ui_ingnombrecarac.cpp \
    ui_configurarproducto.cpp \
    marca_datos.cpp \
    caracteristica_datos.cpp \
    ui_data_product.cpp \
    ui_producto.cpp

HEADERS  += mainwindow.h \
    sesion.h \
    usuario.h \
    conexionbd.h \
    ui_login.h \
    ui_cambiarpassdialog.h \
    ui_ingnomobscarac.h \
    ui_ingnombrecarac.h \
    ui_configurarproducto.h \
    marca_datos.h \
    caracteristica_datos.h \
    ui_data_product.h \
    ui_producto.h

FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui \
    ui_ingnomobscarac.ui \
    ui_ingnombrecarac.ui \
    ui_configurarproducto.ui \
    ui_data_product.ui \
    ui_producto.ui

RESOURCES += \
    Icons/Icons.qrc \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
