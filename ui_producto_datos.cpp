#include "ui_producto_datos.h"
#include "ui_ui_producto_datos.h"

ui_producto_datos::ui_producto_datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_producto_datos)
{
    ui->setupUi(this);
}

ui_producto_datos::~ui_producto_datos()
{
    delete ui;
}
