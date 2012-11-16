#include "ui_tienda_agregar.h"
#include "ui_ui_tienda_agregar.h"

ui_tienda_agregar::ui_tienda_agregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_tienda_agregar)
{
    ui->setupUi(this);
}

ui_tienda_agregar::~ui_tienda_agregar()
{
    delete ui;
}

void ui_tienda_agregar::on_pushButton_Aceptar_clicked()
{
    tienda nueva_tienda;
    nueva_tienda.setAlias(ui->textAlias->text());
    nueva_tienda.setIdEmpresa("1");
    nueva_tienda.setDireccion(ui->textDireccion->text());
    nueva_tienda.setTelefono(ui->textTelefono->text());
    nueva_tienda.setPermisoMunicipal(ui->textPermisoMunicipal->text());
    nueva_tienda.agregar();
    this->close();
}

void ui_tienda_agregar::on_pushButton_Cancelar_clicked()
{
    this->close();
}
