#include "ui_ingnomobscarac.h"
#include "ui_ui_ingnomobscarac.h"

ui_ingNomObsCarac::ui_ingNomObsCarac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_ingNomObsCarac)
{
    ui->setupUi(this);
    estado=false;
}

ui_ingNomObsCarac::~ui_ingNomObsCarac()
{
    delete ui;
}

void ui_ingNomObsCarac::resivir_Numero_Atributo(int numero)
{
    atrib_actual=numero;
}


void ui_ingNomObsCarac::on_Boton_IngNomObs_cancelar_clicked()
{
    this->close();
}

void ui_ingNomObsCarac::on_Boton_IngNomObs_guardar_clicked()
{
    Caracteristica_Datos *tipo_caracteristica; //Este es un puntero a caracteristica padre
    int atributo=atrib_actual; //Este entero representa a que caracteristica se agregara el atributo
    switch(atributo)           //Es para elegir que tipo de obseto contendra el puntero
    {
        case 0 :tipo_caracteristica=new Marca_Datos();break;

    }
    tipo_caracteristica->insertar_Datos(ui->lineaEdit_Nom->text(),ui->textEdit_Des->toPlainText()); //Manda ala clase datos a insertar el dato cogido por linea editable
    ui->lineaEdit_Nom->clear(); //Limpia la linea editable
    ui->textEdit_Des->clear();  //Limpia la zona del text edit

    emit enviar_signal(atributo);

    this->close();              //cierra la ventana

    //delete tipo_caracteristica;
}

