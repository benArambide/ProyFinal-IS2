#include "ui_configurarproducto.h"
#include "ui_ui_configurarproducto.h"
#include <iostream>
using namespace std;

ui_configurarProducto::ui_configurarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_configurarProducto)
{
    ui->setupUi(this);
    ven_nombre=new ui_ingNombreCarac();//Inicia puntero de ventana para ingresar el nombre

    //Deshabilita los botones para eliminar
    ui->Marca_1_x->setDisabled(true);
    ui->Marca_2_x->setDisabled(true);
    ui->Marca_3_x->setDisabled(true);
    ui->Color_1_x->setDisabled(true);
    ui->Color_2_x->setDisabled(true);
    ui->Calidad_1_x->setDisabled(true);
    ui->Calidad_2_x->setDisabled(true);
    ui->Forma_1_x->setDisabled(true);
    ui->Tamano_1_x->setDisabled(true);
    ui->Potencia_1_x->setDisabled(true);
    ui->Diseno_1_x->setDisabled(true);
    ui->Material_1_x->setDisabled(true);
    ui->Tiem_uso_1_x->setDisabled(true);
    ui->Indi_reflex_1_x->setDisabled(true);
    ui->Tipo_luna_1_x->setDisabled(true);
    ui->Rango_1_x->setDisabled(true);
    ui->Rango_1_x_2->setDisabled(true);


}

ui_configurarProducto::~ui_configurarProducto()
{
    delete ui;
}


void ui_configurarProducto::on_Boton_ConfPro_cancelar_clicked()
{
    this->close();
}

void ui_configurarProducto::on_ComBo_Marca_activated(int index)
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
