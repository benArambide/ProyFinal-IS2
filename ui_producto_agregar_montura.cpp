#include "ui_producto_agregar_montura.h"
#include "ui_ui_producto_agregar_montura.h"
#include <QDebug>

ui_producto_agregar_montura::ui_producto_agregar_montura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_montura)
{
    ui->setupUi(this);

    //sele dice de que tipo es cada combobox
    ui->myComboBox_marca->IngresarTipo("marca");
    ui->comboBox_calidad->IngresarTipo("calidad");
    ui->comboBox_color->IngresarTipo("color");
    ui->comboBox_forma->IngresarTipo("forma");
    ui->comboBox_tamanio->IngresarTipo("tamanio");

    //se actualizan con los datos
    ui->myComboBox_marca->Actualizar_Items();
    ui->comboBox_calidad->Actualizar_Items();
    ui->comboBox_color->Actualizar_Items();
    ui->comboBox_forma->Actualizar_Items();
    ui->comboBox_tamanio->Actualizar_Items();


}

ui_producto_agregar_montura::~ui_producto_agregar_montura()
{
    delete ui;
}

void ui_producto_agregar_montura::on_pushButton_cancelar_clicked()
{
    this->close();
}


void ui_producto_agregar_montura::on_pushButton_xmarca_clicked()
{
    ui->myComboBox_marca->Eliminar_Item();
}

void ui_producto_agregar_montura::on_pushButton_xtamanio_clicked()
{
    ui->comboBox_tamanio->Eliminar_Item();
}

void ui_producto_agregar_montura::on_pushButton_xforma_clicked()
{
    ui->comboBox_forma->Eliminar_Item();
}

void ui_producto_agregar_montura::on_pushButton_4_clicked()
{
    ui->comboBox_calidad->Eliminar_Item();
}

void ui_producto_agregar_montura::on_pushButton_8_clicked()
{
    ui->comboBox_color->Eliminar_Item();
}

void ui_producto_agregar_montura::on_pushButton_agregar_clicked()
{

}
