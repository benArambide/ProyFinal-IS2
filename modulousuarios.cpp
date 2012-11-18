#include "modulousuarios.h"
#include "ui_usuario_datos.h"
#include "ui_buscarusuario.h"

#include <QDebug>

ModuloUsuarios::ModuloUsuarios(QWidget *parent) :
  ModuleInterface(parent,new ui_usuario_datos)
{

}

void ModuloUsuarios::Buscar()
{
  ui_BuscarUsuario* b = new ui_BuscarUsuario;
  QDialog* dialogBuscar = makeBusquedaDialog(b);
  dialogBuscar->exec();
  //qDebug()<<b->ui->lineEdit->text();

  delete dialogBuscar;
}
