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
    ui_producto.cpp \
    ui_usuario.cpp \
    ui_producto_datos.cpp \
<<<<<<< HEAD
    ui_cliente_datos.cpp \
    ui_usuario_datos.cpp \
    montura.cpp
=======
    ui_usuario_datos.cpp \
    montura.cpp \
    cliente.cpp \
    ui_data_client.cpp \
    ui_client.cpp
>>>>>>> clientes agregado al proyecto principal

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
    ui_producto.h \
    ui_usuario.h \
    ui_producto_datos.h \
<<<<<<< HEAD
    ui_cliente_datos.h \
    ui_usuario_datos.h \
    montura.h
=======
    ui_usuario_datos.h \
    montura.h \
    cliente.h \
    ui_data_client.h \
    ui_client.h
>>>>>>> clientes agregado al proyecto principal

FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui \
    ui_producto.ui \
    ui_usuario.ui \
    ui_producto_datos.ui \
    ui_usuario_datos.ui \
    ui_data_client.ui \
    ui_client.ui

RESOURCES += \
    Icons/Icons.qrc \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
