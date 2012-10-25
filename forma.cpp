#include "forma.h"

Forma::Forma(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Forma::Forma()
{
    id=0;
    nombre="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Formas existentes
 * @return QList Formas
 */
QList<Forma*> Forma::listar()
{

}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Forma
 * @return Int id
 */
int Forma::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Forma
 * @return QString nombre
 */
QString Forma::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Forma::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Forma
 * @param QString _nombre que representa el nuevo nombre
 */
void Forma::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Forma a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Forma::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Forma a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Forma::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Forma a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Forma::eliminar()
{
    return true;
}
