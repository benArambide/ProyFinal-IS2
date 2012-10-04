#ifndef CARACTERISTICA_DATOS_H
#define CARACTERISTICA_DATOS_H
#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include <QStringList>


/**
*       @file Caracteristica_Datos.h
*       @brief Esta es la clase de padre de todas las caracteristicas
*
*       @author Josue Benjamin Arambide quispe
*
*       @date 3/10/2012
*
*/

class Caracteristica_Datos
{
public:
    Caracteristica_Datos(){}

    //funciones virtuales las cual sera heredadas por los hijos
    virtual bool insertar_Datos(QString nombre)=0;
    virtual bool insertar_Datos(QString nombre,QString observacion)=0;
    virtual QStringList entregar_Datos_nombre()=0;
    virtual QStringList& entregar_Datos_observacion()=0;
    virtual bool borrar_Datos(QString nombre)=0;
};

#endif // CARACTERISTICA_DATOS_H
