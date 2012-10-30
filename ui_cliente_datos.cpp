#include "ui_cliente_datos.h"
#include "ui_ui_cliente_datos.h"

ui_cliente_datos::ui_cliente_datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_cliente_datos)
{
    ui->setupUi(this);
}

ui_cliente_datos::~ui_cliente_datos()
{
    delete ui;
}
