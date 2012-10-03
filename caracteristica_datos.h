#ifndef CARACTERISTICA_DATOS_H
#define CARACTERISTICA_DATOS_H
#include <QString>
#include <QSqlQuery>

class Caracteristica_Datos
{
public:
    Caracteristica_Datos(){}
    virtual bool insertar_Datos(QString nombre)=0;
    virtual bool insertar_Datos(QString nombre,QString observacion)=0;

};

#endif // CARACTERISTICA_DATOS_H
