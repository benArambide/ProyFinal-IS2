#include "conexionbd.h"

#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlError>

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
    if(db_opciones.size())
        db.setConnectOptions(db_opciones);
    bool ok = db.open();
    if(!ok)
    {
        QString a ;
        QMessageBox::critical(0,"Error de conexion a la Base de Datos",db.lastError().text()+"\nError code: "+a.setNum(db.lastError().number()),0,0);
    }
    return ok;
}
