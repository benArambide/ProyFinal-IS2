#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
#include <QComboBox>
#include <QMap>
#include <forma.h>
#include <calidad.h>
#include <color.h>
#include <forma.h>
#include <indicerefraccion.h>
#include <marca.h>
#include <rangomedida.h>
#include <tamanio.h>
#include <tipoluna.h>
#include <QIcon>
#include <ui_agregar_nombre.h>

class MyComboBox:public QComboBox
{
private:
    QString tipo;
    QMap<QString,QSqlQueryModel* (*) ()> map_funciones;
    QIcon*  icono_agregar;
public:
    MyComboBox(QWidget* parent=0);
    void IngresarTipo(QString _tipo);
    void Actualizar_Items();

public slots:
    void Eliminar_Item();
    void Show_Agregar();
};

#endif // MYCOMBOBOX_H
