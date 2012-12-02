#include "andamio.h"

andamio::andamio(QString ian,QString ial,QString n):idAndamio(ian),idAlmacen(ial),nombre(n)
{
}

void andamio::setIdAndamio(QString ian)
{
    idAndamio=ian;
}

void andamio::setIdAlmacen(QString ial)
{
    idAlmacen=ial;
}

void andamio::setNombre(QString n)
{
    nombre=n;
}

QString andamio::getIdAndamio()
{
    return idAndamio;
}

QString andamio::getIdAlmacen()
{
    return idAlmacen;
}

QString andamio::getNombre()
{
    return nombre;
}

andamio* andamio::getAndamioByNombre(QString nombre)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM andamio WHERE nombre=?");
    query.bindValue(0,nombre);
    query.exec();

    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery(query);
    return new andamio(model->record(0).value(0).toString(),model->record(1).value(0).toString(),model->record(2).value(0).toString());
}

QSqlQueryModel* andamio::getAndamios(QString idAlmacen)
{
    QSqlQuery query;
    if(idAlmacen.compare("")==0)
        query.prepare("SELECT * FROM andamio");
    else
        query.prepare("SELECT * FROM andamio WHERE idAlmacen=?");
    query.bindValue(0,idAlmacen);
    query.exec();

    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery(query);
    return model;
}

bool andamio::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO andamio(idAlmacen,nombre) VALUES(?,?)");

    query.bindValue(0,idAlmacen);
    query.bindValue(1,nombre);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool andamio::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE andamio SET idAlmacen=?,nombre=? WHERE idAndamio=?");

    query.bindValue(0,idAlmacen);
    query.bindValue(1,nombre);
    query.bindValue(2,idAndamio);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool andamio::eliminar()
{
    return true;
}

