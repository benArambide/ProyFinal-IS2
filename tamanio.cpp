#include "tamanio.h"

Tamanio::Tamanio(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Tamanio::Tamanio()
{
    id=0;
    nombre="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Tamanios existentes
 * @return QList Tamanios
 */
QList<Tamanio*> Tamanio::listar()
{

}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Tamanio
 * @return Int id
 */
int Tamanio::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Tamanio
 * @return QString nombre
 */
QString Tamanio::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Tamanio::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Tamanio
 * @param QString _nombre que representa el nuevo nombre
 */
void Tamanio::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Tamanio a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tamanio::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Tamanio a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tamanio::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Tamanio a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tamanio::eliminar()
{
    return true;
}
