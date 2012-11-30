#include "ui_datos_proveedor.h"
#include "ui_ui_datos_proveedor.h"

ui_datos_proveedor::ui_datos_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_datos_proveedor)
{
    ui->setupUi(this);
}

ui_datos_proveedor::~ui_datos_proveedor()
{
    delete ui;
}
