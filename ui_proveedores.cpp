#include "ui_proveedores.h"
#include "ui_ui_proveedores.h"

ui_proveedores::ui_proveedores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_proveedores)
{
    ui->setupUi(this);
}

ui_proveedores::~ui_proveedores()
{
    delete ui;
}
