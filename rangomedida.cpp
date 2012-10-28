#include "rangomedida.h"

RangoMedida::RangoMedida(int _id,float _valorIni,float _valorFin, QString _descripsion)
{
    id=_id;
    valorini=_valorIni;
    valorfin=_valorFin;
    descripsion = _descripsion;

}

RangoMedida::RangoMedida(float _valorIni,float _valorFin, QString _descripsion)
{
    id=0;
    valorini=_valorIni;
    valorfin=_valorFin;
    descripsion = _descripsion;

}


RangoMedida::RangoMedida()
{
    id=0;
    valorini=0;
    valorfin=0;
    descripsion="";
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
        QString _descripsion=query.value(3).toString();
        RangoMedida* rangomedida=new RangoMedida(_id,_valorini,_valorfin, _descripsion);
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
QString RangoMedida::getDescripsion()
{
    return descripsion;
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
void RangoMedida::setDescripsion(QString _descripsion)
{
    descripsion=_descripsion;
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
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una RangoMedida a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool RangoMedida::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una RangoMedida a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool RangoMedida::eliminar()
{
    return true;
}
