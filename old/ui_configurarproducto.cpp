#include "ui_configurarproducto.h"
#include "ui_ui_configurarproducto.h"
#include <QDebug>

/** Asignacion de numero a los atributos
*
* Marca - 0
*
*
*
*
*/


ui_configurarProducto::ui_configurarProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_configurarProducto)
{
    ui->setupUi(this);
    ven_nombre=new ui_ingNombreCarac();     //Inicia puntero de ventana para ingresar el nombre
    ven_nombreObs=new ui_ingNomObsCarac();  //Inicia el puntero de ventana para ingresar el nombre y la observacion

    icono_agregar=new QIcon("Icons/1348112114_notification_add.png");   //Inicia el icono de agrear al combobox

    connect(ven_nombreObs,SIGNAL(enviar_signal(int)),this,SLOT(actualizar_Combox(int)));

    actualizar_Combox(0);

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
    if(index==(ui->ComBo_Marca->count()-1))
    {
        ui->Marca_1_x->setDisabled(true);
        ven_nombreObs->resivir_Numero_Atributo(0);        
        ven_nombreObs->show();
    }
    else
    {
        ui->Marca_1_x->setDisabled(false);
    }
}


void ui_configurarProducto::actualizar_Combox(int nu_atrib)
{
    switch(nu_atrib)
    {
        case 0 :    ui->ComBo_Marca->clear();
                    Caracteristica_Datos* p_marca = new Marca_Datos();
                    QStringList lista=p_marca->entregar_Datos_nombre();
                    ui->ComBo_Marca->addItems(lista);
                    ui->ComBo_Marca->addItem(*(icono_agregar),"... Crear Nuevo ...");
                    break;
    }


}

void ui_configurarProducto::on_Marca_1_x_clicked()
{
    QString nombre=ui->ComBo_Marca->currentText();
    Caracteristica_Datos* p_carac=new Marca_Datos();
    p_carac->borrar_Datos(nombre);
    actualizar_Combox(0);
}
