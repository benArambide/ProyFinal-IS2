#include "moduleinterface.h"

ModuleInterface::ModuleInterface(QWidget *parent,QWidget* detalles):
  QWidget(parent),
  ui(new Ui::ModuleInterface)
{
  ui->setupUi(this);
  ui->Module_tabWidget->addTab(detalles,"Detalles");
  //detalles->showMaximized();
  //QRect r = parent->geometry();
  //int height = parent->geometry().height();
  //r.setHeight(height-100);
  //ui->Module_tabWidget->setGeometry(r);
  //ui->Module_tabWidget->showMaximized();
  //this->showMaximized();
}

ModuleInterface::~ModuleInterface()
{
  delete ui;
}
