#include "rangomedida.h"

RangoMedida::RangoMedida(int _id,float _valorIni,float _valorFin, QString _descripcion)
{
    id=_id;
    valorini=_valorIni;
    valorfin=_valorFin;
    descripcion = _descripcion;

}

RangoMedida::RangoMedida(float _valorIni,float _valorFin, QString _descripcion)
{
    id=0;
    valorini=_valorIni;
    valorfin=_valorFin;
    descripcion = _descripcion;

}


RangoMedida::RangoMedida()
{
    id=0;
    valorini=0;
    valorfin=0;
    descripcion="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las RangoMedidas existentes
 * @return QList RangoMedidas
 */
QList<RangoMedida*> RangoMedida::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM rango_medida");
    query.exec();
    QList<RangoMedida*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        float _valorini=query.value(1).toFloat();
        float _valorfin=query.value(2).toFloat();
        QString _descripcion=query.value(3).toString();
        RangoMedida* rangomedida=new RangoMedida(_id,_valorini,_valorfin, _descripcion);
        lista_resultado.push_back(rangomedida);
    }
    return lista_resultado;
}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la RangoMedida
 * @return Int id
 */
int RangoMedida::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la RangoMedida
 * @return QString nombre
 */
QString RangoMedida::getdescripcion()
{
    return descripcion;
}



/**
 * @brief Entrega el valor incial de la RangoMedida
 * @return QString nombre
 */
float RangoMedida::getValorInicial()
{
    return valorini;
}



/**
 * @brief Entrega el valor final de la RangoMedida
 * @return QString nombre
 */
float RangoMedida::getValorFinal()
{
    return valorfin;
}


/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void RangoMedida::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la RangoMedida
 * @param QString _nombre que representa el nuevo nombre
 */
void RangoMedida::setdescripcion(QString _descripcion)
{
    descripcion=_descripcion;
}



/**
 * @brief Permitar cambiar el dato del valor Incial
 * @param Int _id que representa al nuevo id
 */
void RangoMedida::setValorIncial(float _valorIni)
{
    valorini=_valorIni;
}




/**
 * @brief Permitar cambiar el dato del valor Final
 * @param Int _id que representa al nuevo id
 */
void RangoMedida::setValorFinal(float _valorFin)
{
    valorfin=_valorFin;
}


/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva RangoMedida a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool RangoMedida::agregar()
{
    if(descripcion!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO rango_medida (val_ini,val_fin,obs) VALUES ("+QString::number(valorini)+","+QString::number(valorfin)+",'"+descripcion+"'");

        if(query.exec()==true)
        {
            query.prepare("SELECT idrango_medida FROM rango_medida WHERE val_ini="+QString::number(valorini)+" and "+QString::number(valorfin));
            query.exec();
            id=query.value(0).toInt();
            return true;
        }
        else
            return false;
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el actualizar una RangoMedida a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool RangoMedida::actualizar()
{
    if(descripcion!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE rango_medida SET obs='"+descripcion+"' , val_ini="+QString::number(valorini)+" , "+QString::number(valorfin)+" WHERE idrango_medida="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una RangoMedida a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool RangoMedida::eliminar()
{
    if(descripcion!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM rango_medida WHERE idrango_medida="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
