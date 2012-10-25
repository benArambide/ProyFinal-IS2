#include "color.h"

Color::Color(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Color::Color()
{
    id=0;
    nombre="";
}





/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Colors existentes
 * @return QList Colors
 */
QList<Color*> Color::listar()
{

}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Color
 * @return Int id
 */
int Color::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Color
 * @return QString nombre
 */
QString Color::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Color::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Color
 * @param QString _nombre que representa el nuevo nombre
 */
void Color::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::agregar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::actualizar()
{
    return true;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::eliminar()
{
    return true;
}
