#include "conexionbd.h"

#include<QSqlDatabase>

/**
 * @brief Constructor
 *
 */
ConexionBD::ConexionBD()
    :db_host(""),db_name(""),db_user(""),db_pass(""),db_driver("")
{
}

/**
 * @brief Inicia la conexion a la base de datos
 * @return Booleano que indica si la conexion se hizo exitosamente
 */
bool ConexionBD::connect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase(db_driver);
    db.setHostName(db_host);
    db.setDatabaseName(db_name);
    db.setUserName(db_user);
    db.setPassword(db_pass);

    //db.setConnectOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock;CLIENT_SSL=1;");
    return db.open();
}
