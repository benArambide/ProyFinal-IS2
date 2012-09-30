#include <QtGui/QApplication>
//#include "mainwindow.h"
#include "ui_login.h"
#include "conexionbd.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSplashScreen>
#include <QTimer>
#include "sesion.h"

int main(int argc,char *argv[])
{
    QApplication a(argc, argv);

    //ToDo: Organizar este codigo spaguetti xD
    QTextCodec* linuxCodec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(linuxCodec);
    QTextCodec::setCodecForCStrings(linuxCodec);
    QTextCodec::setCodecForLocale(linuxCodec);


    QPixmap pix("splash-syllabus.png");
    QSplashScreen* splash=new QSplashScreen(pix);
    //ToDO: Cambiar el color de letra o posicion del texto de Cargando...
    splash->showMessage("Cargando Modulos");
    splash->showMessage("Cargando Procesos");
    splash->show();
    QTimer::singleShot(10000,splash,SLOT(close()));
    //ToDo: Sincronizar el SplashScreen con la conexion a BD y la ventana de Login

    ConexionBD db;
    db.setDriver("QMYSQL");
    db.setName("opticaldb");
    if(db.verificarConexionDB())
    {
        db.setHost("servercsunsa.sytes.net");
        db.setUser("opticaldb");
        db.setPass("optical123");
    }
    else
    {
        db.setOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock");
        db.setHost("localhost");
        db.setUser("root");
        db.setPass("jose-123");
    }
    bool ok=db.connect();
    if(!ok)
    {
        return 1;
    }

    Sesion::Configurar(3,10,6000);

    UI_LOGIN login;
    login.show();
    return a.exec();
}
