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
    QString _codigo=ui->lineEdit_codigo->text();
    float _precio=ui->lineEdit_precio->text().toFloat();
    int _stock=ui->lineEdit_stock->text().toInt();
    float _p_descuento=ui->lineEdit_p_descuento->text().toFloat();
    QString _accesorios=ui->lineEdit_accesorios->text();
    QString _descripcion=ui->plainTextEdit_descripcion->toPlainText();
    QString _nombre=ui->lineEdit_nombre->text();

    Marca _marca;
    _marca.existente(ui->myComboBox_marca->currentText());

    Tamanio _tamanio;
    _tamanio.existente(ui->comboBox_tamanio->currentText());

    Forma _forma;
    _forma.existente(ui->comboBox_forma->currentText());

    Calidad _calidad;
    _calidad.existente(ui->comboBox_calidad->currentText());

    Color _color;
    _color.existente(ui->comboBox_color->currentText());


    Montura nueva_montura(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,true,_color,_forma,_calidad,_tamanio);
    qDebug()<<"ingreso la montura"<<nueva_montura.agregar();

    this->close();
}
