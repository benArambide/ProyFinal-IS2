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


TipoLuna::TipoLuna(QString _nombre)
{
    id=0;
    nombre=_nombre;
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
    QSqlQuery query;
    query.prepare("SELECT * FROM tipo_luna");
    query.exec();
    QList<TipoLuna*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        TipoLuna* tipoluna=new TipoLuna(_id,_nombre);
        lista_resultado.push_back(tipoluna);
    }
    return lista_resultado;
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
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO tipo_luna (nombre) VALUES ('"+nombre+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT idtipo_luna FROM tipo_luna WHERE nombre='"+nombre+"'");
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
 * @brief Esta funcion ejecuta el actualizar un Tipo de Luna a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLuna::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE tipo_luna SET nombre='"+nombre+"' WHERE idtipo_luna="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar un Tipo deLuna a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLuna::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM tipo_luna WHERE idtipo_luna="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
