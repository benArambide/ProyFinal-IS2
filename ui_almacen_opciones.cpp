#include "ui_almacen_opciones.h"
#include "ui_ui_almacen_opciones.h"

ui_almacen_opciones::ui_almacen_opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_almacen_opciones)
{
    ui->setupUi(this);
}

ui_almacen_opciones::~ui_almacen_opciones()
{
    delete ui;
}

void ui_almacen_opciones::on_pushButton_7_clicked()
{
    this->close();
}

void ui_almacen_opciones::on_pushButton_8_clicked()
{
    this->close();
}
