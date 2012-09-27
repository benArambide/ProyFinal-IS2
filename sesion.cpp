#include "sesion.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

Sesion* Sesion::mp_instance = 0;

Sesion::Sesion(Usuario * usr)
{
    s_user = usr;
    s_time.start();
}

/**
 * @brief Verifica si el usuario y el pass son correctos en la base de datos para iniciar sesion si no retorna false
 * @param user Nombre de usuario
 * @param pass Contraseña de usuario
 * @return true si el inicio de sesion se completo correctamente si no retorna false
 */
bool Sesion::Iniciar(QString user, QString pass)
{
    //completar

    QSqlQuery q;
    q.exec("call verify_usrpass('"+user+"','"+pass+"')");
    //q.bindValue(0,QVariant(user));
    //q.bindValue(1,QVariant(pass));
    //q.exec();
    if(!q.next())
        return false;
    mp_instance = new Sesion;
    return true;
}

/**
 * @brief Obtiene la sesion iniciada
 * @return Puntero a la session
 */
Sesion * Sesion::getSesion()
{
    return mp_instance;
}
