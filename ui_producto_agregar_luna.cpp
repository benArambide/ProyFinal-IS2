#include "ui_producto_agregar_luna.h"
#include "ui_ui_producto_agregar_luna.h"

ui_producto_agregar_luna::ui_producto_agregar_luna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_luna)
{
    ui->setupUi(this);
}

ui_producto_agregar_luna::~ui_producto_agregar_luna()
{
    delete ui;
}
