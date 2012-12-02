#include "almacen.h"

almacen::almacen(QString ia,QString it,QString n):idAlmacen(ia),idTienda(it),nombre(n)
{
}

void almacen::setIdAlmacen(QString ial)
{
    idAlmacen=ial;
}

void almacen::setIdTienda(QString it)
{
    idTienda=it;
}

void almacen::setNombre(QString n)
{
    nombre=n;
}

QString almacen::getIdAlmacen()
{
    return idAlmacen;
}

QString almacen::getIdTienda()
{
    return idTienda;
}

QString almacen::getNombre()
{
    return nombre;
}

almacen* almacen::getAlmacenByNombre(QString nombre)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM almacen WHERE nombre=?");
    query.bindValue(0,nombre);
    query.exec();

    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery(query);
    return new almacen(model->record(0).value(0).toString(),model->record(1).value(0).toString(),model->record(2).value(0).toString());
}

QSqlQueryModel* almacen::getAlmacenes(QString idTienda)
{
    QSqlQuery query;
    if(idTienda.compare("")==0)
        query.prepare("SELECT * FROM almacen");
    else
        query.prepare("SELECT * FROM almacen WHERE idTienda=?");
    query.bindValue(0,idTienda);
    query.exec();

    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery(query);
    return model;
}

bool almacen::agregar()
{
    return true;
}

bool almacen::actualizar()
{
    return true;
}

bool almacen::eliminar()
{
    return true;
}

