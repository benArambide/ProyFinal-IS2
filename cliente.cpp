#include "cliente.h"

cliente::cliente()
{
}

QString cliente::getIdCliente()
{
    return idCliente;
}

void cliente::setIdCliente(QString tmp)
{
    idCliente=tmp;
}

bool cliente::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO cliente (idcliente) VALUES (?)");

    query.bindValue(0,idCliente);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool cliente::actualizar()
{
    return true;
}

bool cliente::eliminar()
{
    return true;
}

QSqlQueryModel* cliente::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select nombres,primer_apellido,segundo_apellido,nro_doc,telefono,celular from persona,cliente where idcliente=idpersona");
    return model;
}

bool cliente::buscar()
{
    QSqlQuery query;
    query.prepare("select * from cliente where idcliente='"+idCliente+"'");
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            return true;
        }
        return false;
    }
    else
        return false;
    return true;

}
