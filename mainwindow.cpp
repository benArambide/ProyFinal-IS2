#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <montura.h>
<<<<<<< HEAD

#include "modulousuarios.h"

=======
#include <luna.h>
>>>>>>> 6c266d3538be0ef3f21d35fbbf6e4ffb74a092c9
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
  delete ui;
  delete ActiveModule;
}

void MainWindow::on_actionProducto_triggered()
{
    ui_producto* produc_fom;
    produc_fom = new ui_producto;
    setCentralWidget(produc_fom);
    produc_fom->showMaximized();
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

<<<<<<< HEAD
void MainWindow::on_actionBuscar_triggered()
{
  //QDialog::accept()
    //ActiveModule->Buscar();
=======
void MainWindow::on_actionTiendas_triggered()
{
    ui_tienda* tienda_form;
    tienda_form=new ui_tienda;
    setCentralWidget(tienda_form);
    tienda_form->showMaximized();
>>>>>>> 6c266d3538be0ef3f21d35fbbf6e4ffb74a092c9
}
