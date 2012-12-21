#include "ui_venta.h"
#include "ui_ui_venta.h"
#include "ui_agregar_venta.h"

ui_venta::ui_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_venta)
{
    ui->setupUi(this);
}

ui_venta::~ui_venta()
{
    delete ui;
}

void ui_venta::on_pushButton_20_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}

void ui_venta::on_pushButton_2_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}

void ui_venta::on_pushButton_3_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}

void ui_venta::on_pushButton_13_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}
