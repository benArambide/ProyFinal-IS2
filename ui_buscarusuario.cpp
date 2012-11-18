#include "ui_buscarusuario.h"

ui_BuscarUsuario::ui_BuscarUsuario(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::ui_BuscarUsuario)
{
  ui->setupUi(this);
}

ui_BuscarUsuario::~ui_BuscarUsuario()
{
  delete ui;
}
