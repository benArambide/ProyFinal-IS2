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

    editar=false;
}


void ui_producto_agregar_montura::tipoEditar(Montura & montura_editar)
{

    //Recibe la montura nueva y cambia lo campos
    ui->lineEdit_codigo->setText(montura_editar.getCodigo());
    ui->lineEdit_stock->setText(QString::number(montura_editar.getStock()));
    ui->lineEdit_precio_compra->setText(QString::number(montura_editar.getPrecioCompra()));
    ui->lineEdit_precio_venta->setText(QString::number(montura_editar.getPrecioVenta()));
    ui->lineEdit_p_descuento->setText(QString::number(montura_editar.getP_descuento()));
    ui->lineEdit_accesorios->setText(montura_editar.getAccesorios());
    ui->lineEdit_descripcion->setText(montura_editar.getDescripcion());


    int posM=ui->myComboBox_marca->findText(montura_editar.getMarca().getNombre());
    ui->myComboBox_marca->setCurrentIndex(posM);

    int posT=ui->comboBox_tamanio->findText(montura_editar.getTamanio().getNombre());
    ui->comboBox_tamanio->setCurrentIndex(posT);

    int posF=ui->comboBox_forma->findText(montura_editar.getForma().getNombre());
    ui->comboBox_forma->setCurrentIndex(posF);

    int posC=ui->comboBox_calidad->findText(montura_editar.getCalidad().getNombre());
    ui->comboBox_calidad->setCurrentIndex(posC);

    int posCo=ui->comboBox_color->findText(montura_editar.getColor().getNombre());
    ui->comboBox_color->setCurrentIndex(posCo);

    Montura_Editar=montura_editar;
    editar=true;

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
        int _stock=ui->lineEdit_stock->text().toDouble();
        double _precio_compra=ui->lineEdit_precio_compra->text().toDouble();
        double _precio_venta=ui->lineEdit_precio_venta->text().toDouble();
        double _p_descuento=ui->lineEdit_p_descuento->text().toDouble();
        QString _accesorios=ui->lineEdit_accesorios->text();
        QString _descripcion=ui->lineEdit_descripcion->text();

        Marca nuevamarca;
        nuevamarca.existente(ui->myComboBox_marca->currentText());

        Tamanio nuevotamanio;
        nuevotamanio.existente(ui->comboBox_tamanio->currentText());

        Forma nuevaforma;
        nuevaforma.existente(ui->comboBox_forma->currentText());

        Calidad nuevacalidad;
        nuevacalidad.existente(ui->comboBox_calidad->currentText());

        Color nuevocolor;
        nuevocolor.existente(ui->comboBox_color->currentText());


        if(editar==true)
        {            
            Montura_Editar.setCodigo(_codigo);
            Montura_Editar.setStock(_stock);
            Montura_Editar.setPrecio_compra(_precio_compra);
            Montura_Editar.setPrecio_venta(_precio_venta);
            Montura_Editar.SetP_descuento(_p_descuento);
            Montura_Editar.setAccesorios(_accesorios);
            Montura_Editar.setDescripcion(_descripcion);
            Montura_Editar.setMarca(nuevamarca);
            Montura_Editar.setTamanio(nuevotamanio);
            Montura_Editar.setForma(nuevaforma);
            Montura_Editar.setCalidad(nuevacalidad);
            Montura_Editar.setColor(nuevocolor);
            Montura_Editar.actualizar();
            emit senial();
        }
        else
        {
            Montura nueva_montura(_codigo,_descripcion,nuevamarca,_stock,_precio_compra,_precio_venta,_p_descuento,_accesorios,true,nuevocolor,nuevaforma,nuevacalidad,nuevotamanio);
            nueva_montura.agregar();
            emit senial();
        }

        this->close();

}
