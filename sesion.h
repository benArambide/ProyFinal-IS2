#ifndef SESION_H
#define SESION_H

#include  <QTime>
#include "usuario.h"

class Sesion
{
public:
    static Sesion* getSession();
    static bool start(QString user,QString pass);
private:
    Sesion();
    static Sesion* mp_instance;
    QTime s_time;
    Usuario * s_user;
};

#endif // SESION_H
