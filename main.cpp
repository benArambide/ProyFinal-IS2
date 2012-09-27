#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*if(!ok)
    {
        QString a ;
        QMessageBox::critical(0,"Error de conexion a la Base de Datos",db.lastError().text()+"\nError code: "+a.setNum(db.lastError().number()),0,0);
    }*/
    MainWindow w;
    w.show();
    
    return a.exec();
}
