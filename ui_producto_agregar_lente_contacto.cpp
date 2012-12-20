#include "ui_producto_agregar_lente_contacto.h"
#include "ui_ui_producto_agregar_lente_contacto.h"

ui_producto_agregar_lente_contacto::ui_producto_agregar_lente_contacto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_lente_contacto)
{
    ui->setupUi(this);
}

ui_producto_agregar_lente_contacto::~ui_producto_agregar_lente_contacto()
{
    delete ui;
}
