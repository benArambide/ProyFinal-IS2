#include "modulousuarios.h"
#include "ui_usuario_datos.h"
#include "ui_buscarusuario.h"
#include <QDataWidgetMapper>
#include <QStringListModel>

#include <QDebug>
#include <QMessageBox>

ModuloUsuarios::ModuloUsuarios(QWidget *parent) :
  ModuleInterface(parent,new ui_usuario_datos)
{
  ui_usuario_datos * data = (ui_usuario_datos *)this->detalles_tab;
  connect(data->getUI()->pB_cambiarPass,SIGNAL(clicked()),SLOT(CambiarPass()));
}

void ModuloUsuarios::Buscar()
{
  ui_BuscarUsuario* b = new ui_BuscarUsuario;
  QDialog* dialogBuscar = makeBusquedaDialog(b);
  int result = dialogBuscar->exec();
  if(result == QDialog::Rejected)
    return;
  queryModel = new QSqlQueryModel;
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
  mapper = new QDataWidgetMapper(this);
  ui_usuario_datos * data = (ui_usuario_datos *)this->detalles_tab;
  QStringList items;
  items << tr("DNI") << tr("CE");
  QStringListModel* typeModel = new QStringListModel(items, this);
  data->getUI()->cB_tDoc->setModel(typeModel);
  mapper->setModel(queryModel);
  //data->getUI()->cb_sexo->addItem("asdasd",1);
  qDebug()<<data->getUI()->cb_sexo->itemData(2).toInt();
  mapper->addMapping(data->getUI()->le_pApellido, 0);
  mapper->addMapping(data->getUI()->le_sApellido, 1);
  mapper->addMapping(data->getUI()->le_nombre, 2);
  mapper->addMapping(data->getUI()->le_numDoc, 9);
  mapper->addMapping(data->getUI()->le_Usuario, 4);
  mapper->addMapping(data->getUI()->de_fechaNac,queryModel->record().indexOf("F. Nacimiento"));
  mapper->addMapping(data->getUI()->le_direccion,10);
  //qDebug()<<queryModel->record().indexOf("T. DI");
  //mapper->addMapping(data->getUI()->c_tDoc,queryModel->record().indexOf("T. DI"), "currentIndex");

  //mapper->addMapping(addressEdit, 1);
  //mapper->addMapping(typeComboBox, 2, "currentIndex");
  mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

  delete dialogBuscar;
}

void ModuloUsuarios::Guardar()
{
  QSqlDatabase::database().tables();

}

void ModuloUsuarios::CambiarPass()
{
  int id = queryModel->record(mapper->currentIndex()).value("ID").toInt();
  QSqlQuery query("call resetPass("+QString::number(id)+")");
  bool ok = query.exec();
  if(!ok)
  {
    QMessageBox::warning(0,"SQL error",query.lastError().text(),0,0);
  }
}
