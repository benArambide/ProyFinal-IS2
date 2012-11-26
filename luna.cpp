#include "luna.h"


Luna::Luna(int _idluna,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{
    idluna=_idluna;
    rangomedida =_rangomedida;
    indicerefraccion =_indicerefraccion;
    tipoluna =_tipoluna;
    calidad =_calidad;
}


Luna::Luna(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{
    idluna=0;
    rangomedida =_rangomedida;
    indicerefraccion =_indicerefraccion;
    tipoluna =_tipoluna;
    calidad =_calidad;
}



Luna::Luna()
{

}


/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el rango Medida de la Luna
 * @return RangoMedida RangoMedida
 */
RangoMedida Luna::getRangoMedida()
{
    return rangomedida;
}


/**
 * @brief Entrega el Indice de Refracccion de la Luna
 * @return IndiceRefraccion indicerefraccion
 */
IndiceRefraccion Luna::getIndiceRefraccion()
{
    return indicerefraccion;
}

/**
 * @brief Entrega el calidad de la Luna
 * @return Calidad calidad
 */
Calidad Luna::getCalidad()
{
    return calidad;
}

/**
 * @brief Entrega el tipo de la Luna
 * @return TipoLuna tipoluna
 */
TipoLuna Luna::getTipoLuna()
{
    return tipoluna;
}

/**
 * @brief Permite cambiar el Rango de Medida de la Luna
 * @param RangoMedida _rangomedida que representa el nuevo nombre
 */
void Luna::setRangoMedida(RangoMedida _rangomedida)
{
    rangomedida=_rangomedida;
}

/**
 * @brief Permite cambiar el Indice de Refraccion de la Luna
 * @param IndiceRefraccion _indicerefraccion que representa el nuevo nombre
 */
void Luna::setIndiceRefraccion(IndiceRefraccion _indicerefraccion)
{
    indicerefraccion=_indicerefraccion;
}

/**
 * @brief Permite cambiar el Calidad de la Luna
 * @param Caidad _calidad que representa el nuevo nombre
 */
void Luna::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

/**
 * @brief Permite cambiar el Tipo de Luna de la Luna
 * @param TipoLuna _tipoluna que representa el nuevo nombre
 */
void Luna::setTipoLuna(TipoLuna _tipoluna)
{
    tipoluna=_tipoluna;
}



bool Luna::agregar()
{
    if(nombre!="" || codigo!="")
    {
        //Primero se crea el producto es decir primero se llena en la tabla producto

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
            qDebug()<<"id producto "<<id;
            query.prepare("INSERT INTO luna (idproducto,idrango_medida,idindice_refraccion,idcalidad,idtipo_luna)"
                          "VALUES (?,?,?,?,?)");
            qDebug()<<"rango me "<<rangomedida.getId();
            qDebug()<<"indice "<<indicerefraccion.getId();
            qDebug()<<"calidad "<<calidad.getId();
            qDebug()<<"tipo "<<tipoluna.getId();

            query.bindValue(0,id);
            query.bindValue(1,rangomedida.getId());
            query.bindValue(2,indicerefraccion.getId());
            query.bindValue(3,calidad.getId());;
            query.bindValue(4,tipoluna.getId());
            if(query.exec()==true)
            {
                qDebug()<<"voy a extraer el id";
                query.prepare("SELECT idluna FROM luna WHERE idproducto='"+QString::number(id)+"'");
                query.exec();
                query.next();
                idluna=query.value(0).toInt();
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


bool Luna::actualizar()
{
    return true;
}

bool Luna::eliminar()
{
    if(nombre!="" || codigo !="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM luna WHERE idluna="+ QString::number(idluna));
        if(query.exec()==true)
        {
            query.prepare("DELETE FROM producto WHERE idproducto="+ QString::number(id));
            return query.exec();
        }
        else
            return false;
    }
    else
        return false;
}


QSqlQueryModel* Luna::entregarLunas()
{

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select codigo, \
                         c.nombre as calidad, \
                         rm.val_ini as Valor_Inicial, \
                         rm.val_fin as Valor_Final, \
                         ir.valor as indice_Refraccion, \
                         tl.nombre as Tipo_luna, \
                         descripcion,stock,precio,accesorios,p_descuento \
                         from luna l \
                         inner join producto p \
                         on l.idproducto=p.idproducto \
                         inner join calidad c \
                         on l.idcalidad=c.idcalidad \
                         inner join rango_medida rm \
                         on l.idrango_medida=rm.idrango_medida \
                         inner join indice_refraccion ir \
                         on l.idindice_refraccion=ir.idindice_refraccion \
                         inner join tipo_luna tl \
                         on l.idtipo_luna=tl.idtipo_luna");

    return model;
}






QSqlQueryModel* Luna::buscar(QString _item)
{
    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select codigo, \
                         c.nombre as calidad,\
                         rm.val_ini as Valor_Inicial,\
                         rm.val_fin as Valor_Final, \
                         ir.valor as indice_Refraccion,\
                         tl.nombre as Tipo_luna,\
                         descripcion,stock,precio,accesorios,p_descuento \
                         from luna l \
                         inner join producto p \
                         on l.idproducto=p.idproducto \
                         inner join calidad c \
                         on l.idcalidad=c.idcalidad \
                         inner join rango_medida rm \
                         on l.idrango_medida=rm.idrango_medida \
                         inner join indice_refraccion ir \
                         on l.idindice_refraccion=ir.idindice_refraccion \
                         inner join tipo_luna tl \
                         on l.idtipo_luna=tl.idtipo_luna \
                         where codigo like '%"+_item+"%' or \
                         c.nombre like '%"+_item+"%' or \
                         rm.val_ini like '%"+_item+"%' or \
                         rm.val_fin like '%"+_item+"%' or \
                         ir.valor like '%"+_item+"%' or \
                         tl.nombre like '%"+_item+"%' or \
                         descripcion like '%"+_item+"%' or \
                         stock like '%"+_item+"%' or \
                         precio like '%"+_item+"%' or \
                         accesorios like '%"+_item+"%' or \
                         p_descuento like '%"+_item+"%'");
         return model;
}
