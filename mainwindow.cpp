#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <montura.h>

#include "modulousuarios.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    Marca marc("marca6","esta es una marca inventada");
    marc.agregar();
    Forma form("forma6");
    form.agregar();
    Tamanio tam("tamano6");
    tam.agregar();
    Color col("color6");
    col.agregar();
    Calidad cal("calidad6");
    cal.agregar();

    Montura mon("ab126","este asases una montura mala","belu",marc,338,12.12,"4estuche",12.12,true,col,form,cal,tam);
    mon.agregar();
    qDebug()<<mon.eliminar();
}

MainWindow::~MainWindow()
{
  delete ui;
  delete ActiveModule;
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
  ActiveModule = new ModuloUsuarios(this);
  this->setCentralWidget(ActiveModule);
}

void MainWindow::on_actionCliente_triggered()
{
    /*UI_CLIENT *CLIENT_FORM;
    CLIENT_FORM = new UI_CLIENT;
    setCentralWidget(CLIENT_FORM);
    CLIENT_FORM->showMaximized();*/

}

void MainWindow::on_actionBuscar_triggered()
{
  //QDialog::accept()
    //ActiveModule->Buscar();
}
