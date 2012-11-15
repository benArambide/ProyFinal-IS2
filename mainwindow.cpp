#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <montura.h>
#include <luna.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Marca marca;
    qDebug()<<"rango marca "<<marca.existente("marca1");
    RangoMedida rango;
    qDebug()<<"rango medida"<<rango.existente(0.20,0.40);

    IndiceRefraccion indice("nose");
    qDebug()<<"rango indice "<<indice.agregar();

    TipoLuna tipo("nose");
    qDebug()<<"rango tipo "<<tipo.agregar();

    Calidad cali;
    qDebug()<<"rango calidad "<<cali.existente("calidad2");

    //Luna lu("02abc","esta es uana luna","lunaa nombre",marca,21,2.2,"medias",20.32,1,rango,indice,tipo,cali);
    //qDebug()<<"resultado de luba "<<lu.agregar();

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionProducto_triggered()
{
}

void MainWindow::on_actionUsuario_triggered()
{
    /*UI_USER *USER_FORM;
    USER_FORM = new UI_USER;
    setCentralWidget(USER_FORM);
    USER_FORM->showMaximized();*/
}

void MainWindow::on_actionCliente_triggered()
{
    /*UI_CLIENT *CLIENT_FORM;
    CLIENT_FORM = new UI_CLIENT;

    setCentralWidget(CLIENT_FORM);
    CLIENT_FORM->showMaximized();*/

}
