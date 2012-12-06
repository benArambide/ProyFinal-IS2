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
  ui->list_tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
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
}
