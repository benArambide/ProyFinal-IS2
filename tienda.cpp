#include "tienda.h"

tienda::tienda()
{
}

QString tienda::getIdTienda()
{
    return idTienda;
}

QString tienda::getIdEmpresa()
{
    return idEmpresa;
}

QString tienda::getAlias()
{
    return alias;
}

QString tienda::getDireccion()
{
    return direccion;
}

QString tienda::getPermisoMunicipal()
{
    return permisoMunicipal;
}

void tienda::setAlias(QString tmp)
{
    alias=tmp;
}

void tienda::setDireccion(QString tmp)
{
    direccion=tmp;
}

void tienda::setPermisoMunicipal(QString tmp)
{
    permisoMunicipal=tmp;
}

QSqlQueryModel* tienda::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select * from tienda");
    return model;
}
