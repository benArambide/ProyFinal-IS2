#include <QtGui/QApplication>
//#include "mainwindow.h"
#include "ui_login.h"
#include "conexionbd.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSplashScreen>
#include <QTimer>
#include <QSqlError>
#include <QDebug>
#include "sesion.h"

//ToDo: Meter esta funcion en un clase que configure el sistema a partir de un archivo de configuracion
bool confConexionDB()
{
    ConexionBD db;
    db.setDriver("QMYSQL");
    db.setName("opticaldb");

    db.setHost("192.168.1.241");
    db.setUser("opticaldb");
    db.setPass("optical123");

    if(db.connect())
    {
        qDebug()<<"Conectado a servercsunsa.sytes.net ...";
        return true;
    }
    QSqlError err = db.getConError();
    if(err.type() == QSqlError::ConnectionError)
    {
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
        db.setOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock");
        db.setHost("192.168.1.241");
        db.setUser("opticaldb");
        db.setPass("optical123");
        if(db.connect())
        {
            qDebug()<<"Conectado a localhost ...";
            return true;
        }
    }
    err = db.getConError();
    QString num2str;
    QMessageBox::critical(0,"Error de conexion a la Base de Datos"
                          ,err.text()+"\nError code: "+num2str.setNum(err.number())
                          ,0,0);
    return false;
}

int main(int argc,char *argv[])
{
    QApplication a(argc, argv);

    if(a.arguments().contains("--without-login"))
    {
      MainWindow *MAIN_WINDOW;
      MAIN_WINDOW = new MainWindow;
      MAIN_WINDOW->showMaximized();
      return a.exec();
    }

    //ToDo: Organizar este codigo spaguetti xD
    QTextCodec* linuxCodec=QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(linuxCodec);
    QTextCodec::setCodecForCStrings(linuxCodec);
    QTextCodec::setCodecForLocale(linuxCodec);


    QPixmap pix(":/Icons/splash.png");
    pix = pix.scaled(800,450);

    QSplashScreen splash(pix);
    //ToDO: Cambiar el color de letra o posicion del texto de Cargando...
    splash.show();
    splash.showMessage("Cargando Modulos",Qt::AlignLeft,Qt::white);
    //QTimer::singleShot(10000,splash,SLOT(close()));
    //ToDo: Sincronizar el SplashScreen con la conexion a BD y la ventana de Login

    if(!confConexionDB())
        return -1;
    Sesion::Configurar(3,10,6000);
    UI_LOGIN login;
    splash.close();
    login.show();

    return a.exec();
}
