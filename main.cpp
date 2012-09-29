#include <QtGui/QApplication>
//#include "mainwindow.h"
#include "ui_login.h"
#include "conexionbd.h"
#include <QMessageBox>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *linuxCodec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(linuxCodec);
    QTextCodec::setCodecForCStrings(linuxCodec);
    QTextCodec::setCodecForLocale(linuxCodec);

    ConexionBD db;
    db.setDriver("QMYSQL");
    db.setHost("localhost");
    db.setName("opticaldb");
    db.setUser("root");
    db.setPass("jose-123");
    db.setOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock");
    bool ok = db.connect();
    if(!ok)
    {
        return 0;
    }
    UI_LOGIN login;
    login.show();
    return a.exec();
}
