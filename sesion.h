#ifndef SESION_H
#define SESION_H

#include  <QTime>
#include "usuario.h"

/**
 * @class Sesion
 * @brief Clase singletone que representa el la sesion de el sistema
 */
class Sesion
{
public:
    static Sesion* getSesion();
    static bool Iniciar(QString user,QString pass);
private:
    Sesion();
    static Sesion* mp_instance; ///<instancia de la clase singletone
    QTime s_time;               ///<tiempo de inicio de sesion
    Usuario * s_user;           ///<referencia a un usuario
};

#endif // SESION_H
