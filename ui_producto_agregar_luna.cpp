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

void ui_producto_agregar_luna::on_pushButton_5_clicked()
{
    this->close();
}

void ui_producto_agregar_luna::on_pushButton_cancelar_clicked()
{
    this->close();
}
