#include "indicerefraccion.h"

IndiceRefraccion::IndiceRefraccion(int _id,QString _valor)
{
    id=_id;
    valor=_valor;
}

IndiceRefraccion::IndiceRefraccion()
{
    id=0;
    valor="";
}

IndiceRefraccion::IndiceRefraccion(QString _valor)
{
    id=0;
    valor=_valor;
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las IndiceRefraccions existentes
 * @return QList IndiceRefraccions
 */
QList<IndiceRefraccion*> IndiceRefraccion::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM indice_refraccion");
    query.exec();
    QList<IndiceRefraccion*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _valor=query.value(1).toString();
        IndiceRefraccion* indicerefraccion=new IndiceRefraccion(_id,_valor);
        lista_resultado.push_back(indicerefraccion);
    }
    return lista_resultado;
}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la IndiceRefraccion
 * @return Int id
 */
int IndiceRefraccion::getId()
{
    return id;
}



/**
 * @brief Entrega el valor de la IndiceRefraccion
 * @return QString valor
 */
QString IndiceRefraccion::getValor()
{
    return valor;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void IndiceRefraccion::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el valor de la IndiceRefraccion
 * @param QString _valor que representa el nuevo valor
 */
void IndiceRefraccion::setValor(QString _valor)
{
    valor=_valor;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::eliminar()
{
    return true;
}
