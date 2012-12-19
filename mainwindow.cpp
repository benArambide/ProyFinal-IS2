#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <montura.h>
#include "modulousuarios.h"
#include <luna.h>
#include "ui_proveedores.h"
#include "compras.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->actionEditar->setEnabled(false);
    ui->actionGuardar->setEnabled(false);
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
    //produc_fom->showMaximized();
}

void MainWindow::on_actionUsuario_triggered()
{
    /*UI_USER *USER_FORM;
    USER_FORM = new UI_USER;
    setCentralWidget(USER_FORM);
    USER_FORM->showMaximized();*/
  ActiveModule = new ModuloUsuarios(this);
  this->setCentralWidget(ActiveModule);
  connect(ActiveModule,SIGNAL(rowSelected()),this,SLOT(enableEdit()));
  //ActiveModule->showMaximized();
}

void MainWindow::on_actionCliente_triggered()
{
    ui_cliente* cliente_form;
    cliente_form=new ui_cliente;
    setCentralWidget(cliente_form);
}

void MainWindow::on_actionBuscar_triggered()
{
  //QDialog::accept()
    ActiveModule->Buscar();
}

void MainWindow::on_actionTiendas_triggered()
{
    ui_tienda* tienda_form;
    tienda_form=new ui_tienda;
    setCentralWidget(tienda_form);
    //tienda_form->showMaximized();
}

void MainWindow::on_actionEmpresas_triggered()
{
    ui_empresa* empresa_form;
    empresa_form=new ui_empresa;
    setCentralWidget(empresa_form);
    //empresa_form->showMaximized();
}

void MainWindow::on_actionAlmacen_triggered()
{
    ui_almacen* almacen_form;
    almacen_form = new ui_almacen;
    setCentralWidget(almacen_form);
}

void MainWindow::on_actionNuevo_triggered()
{
    ActiveModule->Agregar();
}

void MainWindow::on_actionGuardar_triggered()
{
    ActiveModule->Guardar();
}

void MainWindow::on_actionEditar_triggered()
{
  ui->actionBuscar->setEnabled(false);
  ui->actionNuevo->setEnabled(false);
  ui->actionEditar->setEnabled(false);
  ui->actionGuardar->setEnabled(true);
  ActiveModule->Editar();
}

void MainWindow::enableEdit()
{
  ui->actionEditar->setEnabled(true);
}

void MainWindow::on_actionProveedores_triggered()
{
    ui_proveedores* proveedor = new ui_proveedores;
    setCentralWidget(proveedor);
}

void MainWindow::on_actionCompras_triggered()
{
    compras* compra = new compras;
    setCentralWidget(compra);
}
