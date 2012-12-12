#include "moduleinterface.h"

ModuleInterface::ModuleInterface(QWidget *parent,QWidget* detalles):
  QWidget(parent),
  ui(new Ui::ModuleInterface),
  detalles_tab(detalles)
{
  ui->setupUi(this);
  ui->Module_tabWidget->addTab(detalles,"Detalles");
  //detalles->setEnabled(false);
  //ui->Module_tabWidget->setTabEnabled(1,false);
  relTableModel = new QSqlRelationalTableModel;
  mapper = new QDataWidgetMapper(this);
  mapper->setItemDelegate(new QSqlRelationalDelegate);
  mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
  relTableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
  ui->list_tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
  ui->list_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

QDialog* ModuleInterface::makeBusquedaDialog(QWidget* form)
{
  QDialog* dialogBuscar =  new QDialog(this);
  QDialogButtonBox* buttons= new QDialogButtonBox();
  buttons->addButton("Buscar",QDialogButtonBox::AcceptRole);
  buttons->addButton("Cancelar",QDialogButtonBox::RejectRole);
  connect(buttons, SIGNAL(accepted()), dialogBuscar, SLOT(accept()));
  connect(buttons, SIGNAL(rejected()), dialogBuscar, SLOT(reject()));
  QGridLayout* layout = new QGridLayout;
  layout->addWidget(form);
  layout->addWidget(buttons);
  dialogBuscar->setLayout(layout);
  return dialogBuscar;
}

ModuleInterface::~ModuleInterface()
{
  delete ui;
}

void ModuleInterface::on_list_tableView_activated(const QModelIndex &index)
{
  mapper->setCurrentModelIndex(index);
  verDetalles();
}

void ModuleInterface::verDetalles()
{
  ui->Module_tabWidget->setCurrentIndex(1);
}

void ModuleInterface::on_list_tableView_entered(const QModelIndex &)
{
  qDebug()<<"entered" ;
}
