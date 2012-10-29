#include "calidad.h"
#include <QDebug>

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

Calidad::Calidad(QString _nombre)
{
    id=0;
    nombre=_nombre;
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
    QSqlQuery query;
    query.prepare("SELECT * FROM calidad");
    query.exec();
    QList<Calidad*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        Calidad* calidad=new Calidad(_id,_nombre);
        lista_resultado.push_back(calidad);
    }
    return lista_resultado;
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
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO calidad (nombre) VALUES ('"+nombre+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT idcalidad FROM calidad WHERE nombre='"+nombre+"'"); 
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
 * @brief Esta funcion ejecuta el actualizar una Calidad a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Calidad::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE calidad SET nombre='"+nombre+"' WHERE idcalidad="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Calidad a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Calidad::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM calidad WHERE idcalidad="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}

