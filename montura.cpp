#include "montura.h"
#include <QDebug>

Montura::Montura(int _idmontura,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{
    idmontura=_idmontura;
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}

Montura::Montura(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{

    idmontura=0;
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}


Montura::Montura()
{

}



//COnstructo con solo id, por lo normal solo lo usare para el eliminar y solo
//necesito el id de la montura y el id del producto
Montura::Montura(int _id)
{
    QSqlQuery query;
    query.prepare("SELECT idproducto FROM luna WHERE idmontura="+QString::number(_id));
    query.exec();
    query.next();
    id=query.value(0).toInt();
    idmontura=_id;

}


/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el color de la Montura
 * @return Color color
 */
Color Montura::getColor()
{
    return color;
}


/**
 * @brief Entrega la forma de la Montura
 * @return Forma forma
 */
Forma Montura::getForma()
{
    return forma;
}

/**
 * @brief Entrega el calidad de la Montura
 * @return Calidad calidad
 */
Calidad Montura::getCalidad()
{
    return calidad;
}

/**
 * @brief Entrega el tamanio de la Montura
 * @return Tamanio tamanio
 */
Tamanio Montura::getTamanio()
{
    return tamanio;
}

int Montura::getIdMontura()
{
    return idmontura;
}




/**
 * @brief Permite cambiar el color de la Montura
 * @param Color _color que representa el nuevo nombre
 */
void Montura::setColor(Color _color)
{
    color=_color;
}

/**
 * @brief Permite cambiar la forma de la Montura
 * @param Forma _forma que representa el nuevo nombre
 */
void Montura::setForma(Forma _forma)
{
    forma=_forma;
}

/**
 * @brief Permite cambiar el Calidad de la Montura
 * @param Caidad _calidad que representa el nuevo nombre
 */
void Montura::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

/**
 * @brief Permite cambiar el tamanio de la Montura
 * @param Tamanio _tamanio que representa el nuevo nombre
 */
void Montura::setTamanio(Tamanio _tamanio)
{
    tamanio=_tamanio;
}




/*--------------------------------------------------------------------
               FUNCIONES DEL OBJETO PRESISTENTE
---------------------------------------------------------------------*/


/**
 * @brief Esta funcion ejecuta el agregar una nueva Montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Montura::agregar()
{
    if(nombre!="" || codigo!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO producto (codigo,descripcion,nombre,idmarca,stock,precio,accesorios,p_descuento,habilitado)"
                      "VALUES (?,?,?,?,?,?,?,?,?)");

        query.bindValue(0,codigo);
        query.bindValue(1,descripcion);
        query.bindValue(2,nombre);
        query.bindValue(3,marca.getId());
        query.bindValue(4,stock);
        query.bindValue(5,precio);
        query.bindValue(6,accesorios);
        query.bindValue(7,p_descuento);
        query.bindValue(8,habilitado);
        if(query.exec()==true)
        {
            query.prepare("SELECT idproducto FROM producto WHERE codigo='"+codigo+"'");
            query.exec();
            query.next();
            id=query.value(0).toInt();

            query.prepare("INSERT INTO montura (idproducto,idcalidad,idforma,idcolor,idtamanio)"
                          "VALUES (?,?,?,?,?)");
            query.bindValue(0,id);
            query.bindValue(1,calidad.getId());
            query.bindValue(2,forma.getId());
            query.bindValue(3,color.getId());;
            query.bindValue(4,tamanio.getId());
            if(query.exec()==true)
            {

                query.prepare("SELECT idmontura FROM montura WHERE idproducto='"+QString::number(id)+"'");
                query.exec();
                query.next();
                idmontura=query.value(0).toInt();
                return true;
            }
            else return false;
        }
        else
            return false;
    }
    else
        return false;
}


/**
 * @brief Esta funcion ejecuta el actualizar una Montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Montura::actualizar()
{
  return false;
}


/**
 * @brief Esta funcion ejecuta el eliminar una montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */

bool Montura::eliminar()
{
        QSqlQuery query;
        query.prepare("DELETE FROM montura WHERE idmontura="+ QString::number(idmontura));
        if(query.exec()==true)
        {
            query.prepare("DELETE FROM producto WHERE idproducto="+ QString::number(id));
            return query.exec();
        }
        else
            return false;
}



QSqlQueryModel* Montura::entregarMonturas()
{

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select codigo,\
                         c.nombre as calidad, \
                         f.nombre as forma, \
                         t.nombre as tamanio, \
                         color,descripcion,stock,accesorios,p_descuento,precio \
                         from montura m \
                         inner join producto p \
                         on m.idproducto=p.idproducto \
                         inner join calidad c \
                         on m.idcalidad=c.idcalidad \
                         inner join forma f \
                         on m.idforma=f.idforma \
                         inner join color co \
                         on m.idcolor=co.idcolor \
                         inner join tamanio t \
                         on m.idtamanio=t.idtamanio");

    return model;
}





QSqlQueryModel* Montura::buscar(QString _item)
{

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select idmontura,codigo,\
                         c.nombre as calidad, \
                         f.nombre as forma, \
                         t.nombre as tamanio, \
                         color,descripcion,stock,accesorios,p_descuento,precio \
                         from montura m \
                         inner join producto p \
                         on m.idproducto=p.idproducto \
                         inner join calidad c \
                         on m.idcalidad=c.idcalidad \
                         inner join forma f \
                         on m.idforma=f.idforma \
                         inner join color co \
                         on m.idcolor=co.idcolor \
                         inner join tamanio t \
                         on m.idtamanio=t.idtamanio\
                         where codigo like '%"+_item+"%' or \
                         c.nombre like '%"+_item+"%' or \
                         f.nombre like '%"+_item+"%' or \
                         t.nombre like '%"+_item+"%' or \
                         co.color like '%"+_item+"%' or \
                         descripcion like '%"+_item+"%' or \
                         stock like '%"+_item+"%' or \
                         precio like '%"+_item+"%' or \
                         accesorios like '%"+_item+"%' or \
                         p_descuento like '%"+_item+"%'");

    return model;
}



