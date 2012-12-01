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

QString tienda::getTelefono()
{
    return telefono;
}

QString tienda::getPermisoMunicipal()
{
    return permisoMunicipal;
}

void tienda::setIdTienda(QString tmp)
{
    idTienda=tmp;
}

void tienda::setIdEmpresa(QString tmp)
{
    idEmpresa=tmp;
}

void tienda::setAlias(QString tmp)
{
    alias=tmp;
}

void tienda::setDireccion(QString tmp)
{
    direccion=tmp;
}

void tienda::setTelefono(QString tmp)
{
    telefono=tmp;
}

void tienda::setPermisoMunicipal(QString tmp)
{
    permisoMunicipal=tmp;
}

bool tienda::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO tienda (idEmpresa,alias,direccion,telefono,permiso_municipal) VALUES (?,?,?,?,?)");

    query.bindValue(0,idEmpresa);
    query.bindValue(1,alias);
    query.bindValue(2,direccion);
    query.bindValue(3,telefono);
    query.bindValue(4,permisoMunicipal);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool tienda::actualizar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO tienda (idEmpresa,alias,direccion,telefono,permiso_municipal) VALUES (?,?,?,?,?)");

    query.bindValue(0,idEmpresa);
    query.bindValue(1,alias);
    query.bindValue(2,direccion);
    query.bindValue(3,telefono);
    query.bindValue(4,permisoMunicipal);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool tienda::eliminar()
{
    return true;
}

QSqlQueryModel* tienda::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select alias,direccion,telefono,permiso_municipal from tienda");
    return model;
}
