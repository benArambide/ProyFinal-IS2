#include "marca_datos.h"
#include <QDebug>


/**
*       @file Marca_Datos.cpp
*       @brief Archivo en el cual se implementaran las funciones ya declaras
*
*       @author Josue Benjamin Arambide quispe
*
*       @date 3/10/2012
*
*/


/**
 *@brief Creador de la clase
 *@param ninguno
 */
Marca_Datos::Marca_Datos()
{
}




/**
 *@brief Inserta el nombre de la marca a insertar
 *@param nombre nombre de la marca a insertar
 *@param true Esta clase no posee solo insertar el nombre por eso solo retorna true
 *       no sera usada esta funcion
 */
bool Marca_Datos::insertar_Datos(QString nombre)
{
    return true;
}






/**
 *@brief Inserta el nombre de la marca y las descripcion
 *@param nombre es el nombre de la marca a insertar en el base de datos
 *@param observacion es el nombre de la descripcion a insertar
 *@return bool es el resultado de la ejecucion del query
 */
bool Marca_Datos::insertar_Datos(QString nombre,QString observacion)
{
    QSqlQuery query;
    query.prepare("INSERT INTO marca (nombre, descripcion) VALUES ('"+nombre+"','"+observacion+"')");
    return query.exec();
}





/**
 *@brief Realiza consulta a la base de datos y entrega todos los nombre de las marcas
 *@param Ninguno
 *@return QStringList Retorna una lista de Qstring con todos los nombres de las marcas
 */
QStringList Marca_Datos::entregar_Datos_nombre()
{
    QSqlQuery query;
    query.prepare("SELECT nombre FROM marca");
    query.exec();

    QStringList list_resultado;  //la lista con los datos almacenados es decir todo lo nombre de las marcas
    while(query.next())
    {
        QString a=query.value(0).toString();
        list_resultado.push_back(a); //Llena todo los datos de las lista resultado
    }
    return list_resultado;
}




/**
 *@brief Realiza consulta a la base de datos y entrega todas las descripciones de las marcas
 *@param Ninguno
 *@return QStringList Retorna una lista de Qstring con todos las descripciones de las marcas
 */
QStringList& Marca_Datos::entregar_Datos_observacion()
{
    QSqlQuery query;
    query.prepare("SELECT descripcion FROM marca");
    query.exec();

    QStringList list_resultado;  //la lista con los datos almacenados es decir todo lo nombre de las marcas
    while(query.next())
    {
        list_resultado.push_back(query.value(0).toString()); //Llena todo los datos de las lista resultado
    }
    return list_resultado;
}




/**
 *@brief Borra una fila de las base de datos es decir una marca y su descripcion
 *@param Nombre Es el nombre de la marca la cual se tiene q borrar
 *@return Bool es el resultado del query
 */
bool Marca_Datos::borrar_Datos(QString nombre)
{
    QSqlQuery query;
    qDebug()<<"deberia borrar"<<nombre;
    query.prepare("DELETE FROM marca WHERE nombre = '"+nombre+"';");
    return query.exec();
}
