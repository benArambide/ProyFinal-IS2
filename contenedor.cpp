#include "contenedor.h"

contenedor::contenedor(QString ic,QString ian,QString n):idContenedor(ic),idAndamio(ian),nombre(n)
{
}

void contenedor::setIdContenedor(QString ic)
{
    idContenedor=ic;
}

void contenedor::setIdAndamio(QString ian)
{
    idAndamio=ian;
}

void contenedor::setNombre(QString n)
{
    nombre=n;
}

QString contenedor::getIdContenedor()
{
    return idContenedor;
}

QString contenedor::getIdAndamio()
{
    return idAndamio;
}

QString contenedor::getNombre()
{
    return nombre;
}

QSqlQueryModel* contenedor::getContenedores(QString idAndamio)
{
    QSqlQuery query;
    if(idAndamio.compare("")==0)
        query.prepare("SELECT * FROM contenedor");
    else
        query.prepare("SELECT * FROM contenedor WHERE idAndamio=?");
    query.bindValue(0,idAndamio);
    query.exec();

    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery(query);
    return model;
}

bool contenedor::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO contenedor(idAndamio,nombre) VALUES(?,?)");

    query.bindValue(0,idAndamio);
    query.bindValue(1,nombre);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool contenedor::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE contenedor SET idAndamio=?,nombre=? WHERE idContenedor=?");

    query.bindValue(0,idAndamio);
    query.bindValue(1,nombre);
    query.bindValue(2,idContenedor);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool contenedor::eliminar()
{
    return true;
}
