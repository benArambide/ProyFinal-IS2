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
    calidad.cpp \
    tamanio.cpp \
    forma.cpp \
    color.cpp \
    tipoluna.cpp \
    indicerefraccion.cpp \
    rangomedida.cpp \
    ui_cliente.cpp \
    ui_producto.cpp \
    ui_usuario.cpp \
    ui_producto_datos.cpp \
    ui_cliente_datos.cpp \
    ui_usuario_datos.cpp \
    montura.cpp \
    ui_statur_bar.cpp \
    luna.cpp \
    mycombobox.cpp \
    ui_producto_agregar_luna.cpp \
    ui_producto_agregar_montura.cpp

HEADERS  += mainwindow.h \
    sesion.h \
    conexionbd.h \
    ui_login.h \
    ui_cambiarpassdialog.h \
    usuario.h \
    producto.h \
    marca.h \
    objetopersistente.h \
    calidad.h \
    tamanio.h \
    forma.h \
    color.h \
    tipoluna.h \
    indicerefraccion.h \
    rangomedida.h \
    ui_cliente.h \
    ui_producto.h \
    ui_usuario.h \
    ui_producto_datos.h \
    ui_cliente_datos.h \
    ui_usuario_datos.h \
    montura.h \
    ui_statur_bar.h \
    luna.h \
    mycombobox.h \
    ui_producto_agregar_luna.h \
    ui_producto_agregar_montura.h

FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui \
    ui_cliente.ui \
    ui_producto.ui \
    ui_usuario.ui \
    ui_producto_datos.ui \
    ui_cliente_datos.ui \
    ui_usuario_datos.ui \
    ui_statur_bar.ui \
    ui_producto_agregar_luna.ui \
    ui_producto_agregar_montura.ui

RESOURCES += \
    Icons/Icons.qrc \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
