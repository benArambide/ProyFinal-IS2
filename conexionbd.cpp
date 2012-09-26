#include "conexionbd.h"
#include <QMessageBox>

ConexionBD::ConexionBD()
    :db_host("localhost"),db_name(""),db_user("root"),db_pass("jose-123")
{
}

bool ConexionBD::connect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(db_host);
    db.setDatabaseName(db_name);
    db.setUserName(db_user);
    db.setPassword(db_pass);

    //db.setConnectOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock;CLIENT_SSL=1;"); /*Solo para linux*/

    bool ok = db.open();
    if(!ok)
    {
        QString a ;
        QMessageBox::critical(0,"Error de conexion a la Base de Datos",db.lastError().text()+"\nError code: "+a.setNum(db.lastError().number()),0,0);
    }
    return ok;
}
