#include "sesion.h"

Sesion* Sesion::mp_instance = 0;

Sesion::Sesion()
{

}

/** @brief Verifica si el usuario y el pass son correctos en la base de datos para iniciar sesion si no retorna false
    @param user Nombre de usuario
    @param pass Contraseña de usuario
    @return true si el inicio de sesion se completo correctamente si no retorna false
*/
bool Sesion::Iniciar(QString user, QString pass)
{
    //completar
    mp_instance = new Sesion;
    //mp_current
}

Sesion * Sesion::getSesion()
{
    return mp_instance = 0;
}
