#include "ui_almacen.h"
#include "ui_ui_almacen.h"
#include "ui_almacen_opciones.h"

ui_almacen::ui_almacen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_almacen)
{
    ui->setupUi(this);
}

ui_almacen::~ui_almacen()
{
    delete ui;
}

void ui_almacen::on_pushButton_6_clicked()
{
    ui_almacen_opciones *OPCIONES = new ui_almacen_opciones;
    OPCIONES->show();
}
