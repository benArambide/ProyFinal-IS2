#include "ui_configurarproducto.h"
#include "ui_ui_configurarproducto.h"
#include <iostream>
using namespace std;

ui_configurarProducto::ui_configurarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_configurarProducto)
{
    ui->setupUi(this);
    ven_nombre=new ui_ingNombreCarac();

    ui->Marca_1_x->setDisabled(true);

}

ui_configurarProducto::~ui_configurarProducto()
{
    delete ui;
}


void ui_configurarProducto::on_Marca_activated(int index)
{
    if(index==0)
    {
        ui->Marca_1_x->setDisabled(true);
        ven_nombre->show();
    }
    else
    {
        ui->Marca_1_x->setDisabled(false);
    }
}
