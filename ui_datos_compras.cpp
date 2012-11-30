#include "ui_datos_compras.h"
#include "ui_ui_datos_compras.h"

ui_datos_compras::ui_datos_compras(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_datos_compras)
{
    ui->setupUi(this);
}

ui_datos_compras::~ui_datos_compras()
{
    delete ui;
}
