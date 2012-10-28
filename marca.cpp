#include "marca.h"

Marca::Marca(int _id,QString _nombre, QString _descripsion )
{
    id=_id;
    nombre=_nombre;
    descripsion=_descripsion;
}

Marca::Marca()
{
    id=0;
    nombre="";
    descripsion="";
}

Marca::Marca(QString _nombre, QString _descripsion )
{
    id=0;
    nombre=_nombre;
    descripsion=_descripsion;
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Marcas existentes
 * @return QList Marcas
 */
QList<Marca*> Marca::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM marca");
    query.exec();
    QList<Marca*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        QString _descripsion=query.value(2).toString();
        Marca* marca=new Marca(_id,_nombre,_descripsion);
        lista_resultado.push_back(marca);
    }
    return lista_resultado;
}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Marca
 * @return Int id
 */
int Marca::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Marca
 * @return QString nombre
 */
QString Marca::getNombre()
{
    return nombre;
}



/**
 * @brief Entrega la descripsion de la Marca
 * @return QString descripsion
 */
QString Marca::getDescripsion()
{
    return descripsion;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Marca::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Marca
 * @param QString _nombre que representa el nuevo nombre
 */
void Marca::setNombre(QString _nombre)
{
    nombre=_nombre;
}



/**
 * @brief Permite cambiar la edscripsion de la Marca
 * @param QSrtring _descripsion, que representa la nueva descripsion
 */
void Marca::setDescripsion(QString _descripsion)
{
    descripsion=_descripsion;
}






/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::eliminar()
{
    return true;
}
