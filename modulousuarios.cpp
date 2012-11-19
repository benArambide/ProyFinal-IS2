#include "modulousuarios.h"
#include "ui_usuario_datos.h"
#include "ui_buscarusuario.h"

#include <QDebug>
#include <QMessageBox>

ModuloUsuarios::ModuloUsuarios(QWidget *parent) :
  ModuleInterface(parent,new ui_usuario_datos)
{

}

void ModuloUsuarios::Buscar()
{
  ui_BuscarUsuario* b = new ui_BuscarUsuario;
  QDialog* dialogBuscar = makeBusquedaDialog(b);
  int result = dialogBuscar->exec();
  if(result == QDialog::Rejected)
    return;
  QSqlQueryModel * queryModel = new QSqlQueryModel;
  QString query = "call buscarUsuarios('%1','%2','%3','%4')";
  query = query.arg(b->ui->le_nick->text())
          .arg(b->ui->le_nombre->text())
          .arg(b->ui->le_apellido->text())
          .arg(b->ui->le_dni->text());
  queryModel->setQuery(query);
  if(queryModel->lastError().isValid())
  {
    QMessageBox::warning(0,"SQL error",queryModel->lastError().text(),0,0);
    delete dialogBuscar;
    return;
  }
  ui->list_tableView->setModel(queryModel);
  delete dialogBuscar;
}
