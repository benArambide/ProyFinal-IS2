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

Forma::Forma(QString _nombre)
{
    id=0;
    nombre=_nombre;
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
    QSqlQuery query;
    query.prepare("SELECT * FROM forma");
    query.exec();
    QList<Forma*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        Forma* forma=new Forma(_id,_nombre);
        lista_resultado.push_back(forma);
    }
    return lista_resultado;

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
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO forma (nombre) VALUES ('"+nombre+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT idforma FROM forma WHERE nombre='"+nombre+"'");
            query.exec();
            query.next();
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
 * @brief Esta funcion ejecuta el actualizar una Forma a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Forma::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE forma SET nombre='"+nombre+"' WHERE idforma="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Forma a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Forma::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM forma WHERE idforma="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
