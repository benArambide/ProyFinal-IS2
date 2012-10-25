#include "tipoluna.h"

TipoLuna::TipoLuna(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

TipoLuna::TipoLuna()
{
    id=0;
    nombre="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las TipoLunas existentes
 * @return QList TipoLunas
 */
QList<TipoLuna*> TipoLuna::listar()
{

}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la TipoLuna
 * @return Int id
 */
int TipoLuna::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la TipoLuna
 * @return QString nombre
 */
QString TipoLuna::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void TipoLuna::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la TipoLuna
 * @param QString _nombre que representa el nuevo nombre
 */
void TipoLuna::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar un nuevo Tipo de Luna a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLuna::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar un Tipo de Luna a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLuna::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar un Tipo deLuna a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLuna::eliminar()
{
    return true;
}
