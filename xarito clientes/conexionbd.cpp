#include "conexionbd.h"

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
 * @return True si se realizo la conexion de lo contrario false
 */
bool ConexionBD::connect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase(db_driver);
    db.setHostName(db_host);
    db.setDatabaseName(db_name);
    db.setUserName(db_user);
    db.setPassword(db_pass);
    if(!db_opciones.isEmpty())
        db.setConnectOptions(db_opciones);
    bool ok=db.open();
    if(!ok)
    {
        conErr = db.lastError();
    }
    return ok;
}
