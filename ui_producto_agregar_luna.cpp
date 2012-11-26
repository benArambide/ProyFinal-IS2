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
    ui->comboBox_indice_refraccion->IngresarTipo("indicerefraccion");
    ui->comboBox_tipo_luna->IngresarTipo("tipoluna");
    ui->comboBox_calidad->IngresarTipo("calidad");

    //seactualizan todos los datos
    ui->comboBox_marca->Actualizar_Items();
    ui->comboBox_indice_refraccion->Actualizar_Items();
    ui->comboBox_tipo_luna->Actualizar_Items();
    ui->comboBox_calidad->Actualizar_Items();
}

ui_producto_agregar_luna::~ui_producto_agregar_luna()
{
    delete ui;
}

void ui_producto_agregar_luna::on_pushButton_5_clicked()
{
    QString _codigo=ui->lineEdit_codigo->text();
    float _precio=ui->lineEdit_precio->text().toFloat();
    int _stock=ui->lineEdit_stock->text().toInt();
    float _p_descuento=ui->lineEdit_p_descuento->text().toFloat();
    QString _accesorios=ui->lineEdit_accesorios->text();
    QString _descripcion=ui->plainTextEdit_descripcion->toPlainText();
    QString _nombre=ui->lineEdit_nombre->text();

    Marca _marca;
    _marca.existente(ui->comboBox_marca->currentText());

    IndiceRefraccion _indiceRefraccion;
    _indiceRefraccion.existente(ui->comboBox_indice_refraccion->currentText());

    TipoLuna _tipoLuna;
    _tipoLuna.existente(ui->comboBox_tipo_luna->currentText());

    Calidad _calidad;
    _calidad.existente(ui->comboBox_calidad->currentText());


    RangoMedida _rangoMedida(ui->doubleSpinBox_valor_ini->value(),ui->doubleSpinBox_valor_fin->value(),ui->plainTextEdit_descripcionRM->toPlainText());
    qDebug()<<"Si ranog de medida se agregpo bien"<<_rangoMedida.agregar();

    Luna nueva_luna(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,true,_rangoMedida,_indiceRefraccion,_tipoLuna,_calidad);

    qDebug()<<"ingreso la luna "<<nueva_luna.agregar();

    this->close();
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
    if(ui->comboBox_indice_refraccion->Eliminar_Item())msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xtipo_clicked()
{
    if(ui->comboBox_tipo_luna->Eliminar_Item()) msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xcalidad_clicked()
{
    if(ui->comboBox_calidad->Eliminar_Item()) msgBox->show();
}

