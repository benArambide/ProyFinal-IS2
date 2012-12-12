#include "ui_agregar_venta.h"
#include "ui_ui_agregar_venta.h"

ui_agregar_venta::ui_agregar_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_venta)
{
    ui->setupUi(this);
}

ui_agregar_venta::~ui_agregar_venta()
{
    delete ui;
}
