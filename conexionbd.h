#ifndef CONEXIONBD_H
#define CONEXIONBD_H

#include<QString>
#include<QProcess>

/**
 * @class ConexionBD
 * @brief Representa y guarda los datos de la conexion a la bd
 */

class ConexionBD
{
public:
    ConexionBD();
    bool connect();
    bool verificarConexionDB();

    void setDriver(QString val){db_driver = val;}
    void setUser(QString val){db_user = val;}
    void setPass(QString val){db_pass = val;}
    void setHost(QString val){db_host = val;}
    void setName(QString val){db_name = val;}
    void setOptions(QString val){db_opciones = val;}
/*TO DO: Clase de configuracion para obtener estos datos de un archivo
*/
private:
    QString db_host;    ///<Host servidor
    QString db_name;    ///<Nombre de la base de datos
    QString db_user;    ///<Usuario de la bd
    QString db_pass;    ///<Contraseña de acceso
    QString db_driver;  ///<Nombre de el driver de conexion usado
    QString db_opciones; ///<Opciones extra de conexion
};

#endif // CONEXIONBD_H
