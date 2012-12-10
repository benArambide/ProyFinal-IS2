#include "ui_producto_agregar_luna.h"
#include "ui_ui_producto_agregar_luna.h"
#include <QDebug>

ui_producto_agregar_luna::ui_producto_agregar_luna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_luna)
{
    ui->setupUi(this);

    //Puntero al mensaje en caso de cualquier error
    msgBox=new QMessageBox;
    msgBox->setText("No Puede Eliminar El Elemento");

    //se le indican a los combobox de que tipo es cada uno
    ui->comboBox_marca->IngresarTipo("marca");
    ui->comboBox_tratamiento->IngresarTipo("tratamiento");
    ui->comboBox_tipo_luna->IngresarTipo("tipoluna");
    ui->comboBox_calidad->IngresarTipo("calidad");

    //seactualizan todos los datos
    ui->comboBox_marca->Actualizar_Items();
    ui->comboBox_tratamiento->Actualizar_Items();
    ui->comboBox_tipo_luna->Actualizar_Items();
    ui->comboBox_calidad->Actualizar_Items();
}

ui_producto_agregar_luna::~ui_producto_agregar_luna()
{
    delete ui;
}

void ui_producto_agregar_luna::on_pushButton_5_clicked()
{


}

void ui_producto_agregar_luna::on_pushButton_cancelar_clicked()
{
    this->close();
    delete msgBox;
}





//**********************************************************************
//Los botones con la "X" mediante las funcion "Eliminar_item"
//eliminar el item actual donde esta el combobox
//**********************************************************************
//En caso que no se pueda borrar mostrara mensaje de error, por lo normal
//un item no se puede borrar por esta siendo usado en otra tabla
void ui_producto_agregar_luna::on_pushButton_xmarca_clicked()
{
    if(ui->comboBox_marca->Eliminar_Item()==false) msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xindice_clicked()
{
    if(ui->comboBox_tratamiento->Eliminar_Item())msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xtipo_clicked()
{
    if(ui->comboBox_tipo_luna->Eliminar_Item()) msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xcalidad_clicked()
{
    if(ui->comboBox_calidad->Eliminar_Item()) msgBox->show();
}

