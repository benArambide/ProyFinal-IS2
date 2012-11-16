#include "ui_agregar_nombre.h"
#include "ui_ui_agregar_nombre.h"

ui_agregar_nombre::ui_agregar_nombre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_nombre)
{
    ui->setupUi(this);
}

ui_agregar_nombre::~ui_agregar_nombre()
{
    delete ui;
}

void ui_agregar_nombre::on_pushButton_cancelar_clicked()
{

}

void ui_agregar_nombre::recibir_tipo(QString _tipo)
{
    tipo=_tipo;
}

void ui_agregar_nombre::on_pushButton_guardar_clicked()
{

    QString nombre=ui->lineEdit_nombre->text();

    if(tipo=="calidad"){
        Calidad calidad(nombre);
        calidad.agregar();

    }
    if(tipo=="color"){
        Color color(nombre);
        color.agregar();
    }
    if(tipo=="indicerefraccion"){
        IndiceRefraccion indicerefraccion(nombre);
        indicerefraccion.agregar();
    }
    if(tipo=="tamanio"){
        Tamanio tamanio(nombre);
        tamanio.agregar();
    }
    if(tipo=="tipoluna"){
        TipoLuna tipoluna(nombre);
        tipoluna.agregar();
    }
    if(tipo=="forma"){
        Forma forma(nombre);
        forma.agregar();
    }

    emit envia_senial(1);
    this->close();
}
