#include <QtGui/QApplication>
#include "mainwindow.h"
#include "ui_login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UI_LOGIN LOGIN;
    LOGIN.show();

    //MainWindow w;
    //w.show();
    
    return a.exec();
}
