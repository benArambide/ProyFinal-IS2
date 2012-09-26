#ifndef CONEXIONBD_H
#define CONEXIONBD_H

#include<QString>
#include <QSqlDatabase>
#include <QSqlError>

class ConexionBD
{
public:
    ConexionBD();
    bool connect();
/*TO DO: Clase de configuracion para obtener estos datos de un archivo
*/
private:
    QString db_user;
    QString db_pass;
    QString db_host;
    QString db_name;
};

#endif // CONEXIONBD_H
