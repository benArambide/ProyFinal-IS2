#ifndef MARCA_DATOS_H
#define MARCA_DATOS_H
#include "caracteristica_datos.h"

class Marca_Datos:public Caracteristica_Datos
{
private:
public:

    Marca_Datos();
    bool insertar_Datos(QString nombre);
    bool insertar_Datos(QString nombre,QString observacion);
};

#endif // MARCA_DATOS_H
