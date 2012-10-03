#include "marca_datos.h"
#include <QDebug>
#include <qsqlquery.h>
#include <QSqlQuery>

Marca_Datos::Marca_Datos()
{
}

bool Marca_Datos::insertar_Datos(QString nombre)
{
    return true;
}

bool Marca_Datos::insertar_Datos(QString nombre,QString observacion)
{
    qDebug()<<nombre;
    QSqlQuery query;
    query.prepare("INSERT INTO marca (nombre, descripcion) VALUES ('"+nombre+"','"+observacion+"')");
    return query.exec();
}
