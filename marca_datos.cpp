#include "marca_datos.h"
#include <QDebug>
#include <qsqlquery.h>

Marca_Datos::Marca_Datos()
{
}

bool Marca_Datos::insertar_Datos(QString nombre)
{
    qDebug()<<nombre;
    QSqlQuery query;
      /*  query.prepare("INSERT INTO marca (idmarca, nombre, descripcion) "
                      "VALUES (?, ?, ?)");
        query.addBindValue(123);
        query.addBindValue(123);
        query.addBindValue("olasas");
        query.exec();*/
    return true;

}

bool Marca_Datos::insertar_Datos(QString nombre,QString observacion)
{
    return true;
}
