#include "calidad.h"

Calidad::Calidad(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Calidad::Calidad()
{
    id=0;
    nombre="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Calidades existentes
 * @return QList Calidades
 */
QList<Calidad*> Calidad::listar()
{

}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Calidad
 * @return Int id
 */
int Calidad::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Calidad
 * @return QString nombre
 */
QString Calidad::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Calidad::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Calidad
 * @param QString _nombre que representa el nuevo nombre
 */
void Calidad::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Calidad a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Calidad::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Calidad a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Calidad::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Calidad a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Calidad::eliminar()
{
    return true;
}

