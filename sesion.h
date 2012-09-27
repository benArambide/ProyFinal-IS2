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
    Usuario * get_Usuario(){return s_user;}
    /// @return Retorna el tiempo en milisegundos desde que se inicio la sesion
    int get_time(){return s_time.elapsed();}
private:
    Sesion(Usuario * usr = 0);
    static Sesion* mp_instance; ///<instancia de la clase singletone
    static int intentos;        ///<Numero de intentos de inicio de sesion
    QTime s_time;               ///<tiempo de inicio de sesion
    Usuario * s_user;           ///<referencia a un usuario
};

#endif // SESION_H
