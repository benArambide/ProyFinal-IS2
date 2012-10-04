#ifndef MARCA_DATOS_H
#define MARCA_DATOS_H
#include "caracteristica_datos.h"



/**
*       @file Marca_Datos.h
*       @brief Esta es la clase hereda de Caracteristica_Datos las funcion
*       las cuales seran implementdas con respecto a la tabla Marca la
*       sera la interfaz con la base de datos
*
*       @author Josue Benjamin Arambide quispe
*
*       @date 3/10/2012
*
*/

class Marca_Datos:public Caracteristica_Datos
{
public:

    //Funciones virtuales que seran implementadas
    Marca_Datos();
    bool insertar_Datos(QString nombre);
    bool insertar_Datos(QString nombre,QString observacion);
    QStringList entregar_Datos_nombre();
    QStringList& entregar_Datos_observacion();
    bool borrar_Datos(QString nombre);
};

#endif // MARCA_DATOS_H
