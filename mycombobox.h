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


class MyComboBox:public QComboBox
{
private:
    QString tipo;
    QMap<QString,QSqlQueryModel* (*) ()> map_funciones;
public:
    MyComboBox(QWidget* parent=0);
    void IngresarTipo(QString _tipo);
    void Actualizar_Items();

public slots:
    void Eliminar_Item();
};

#endif // MYCOMBOBOX_H
