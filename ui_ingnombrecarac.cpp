#include "ui_ingnombrecarac.h"
#include "ui_ui_ingnombrecarac.h"
#include <QDebug>

ui_ingNombreCarac::ui_ingNombreCarac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_ingNombreCarac)
{
    ui->setupUi(this);
}

ui_ingNombreCarac::~ui_ingNombreCarac()
{
    delete ui;
}





/**
* Esta funcion resivira el numero del atributo con el cual trabajara
* @author Josue Benjamin Arambide Quispe
* @param int el numero q recibira
*/
void ui_ingNombreCarac::resivir_Numero_Atributo(int numero)
{
    atrib_actual=numero; //Se le asigan el tipo de atributo entrante que se guardara en atributo actual


}



/**
* Esta funcion es para cuando se aprete el boton cancelar pode cerrar la ventana
* @author Josue Benjamin Arambide Quispe
* @param No tiene parametros
*/
void ui_ingNombreCarac::on_Boton_IngNom_cancelar_clicked()
{
    this->close();
}




/**
* Esta funcion es del boton guardar para cuando hacen click este creara
* un objeto dependiendo del tipo e insertara los datos
* @author Josue Benjamin Arambide Quispe
* @param int el numero q recibira
*/
void ui_ingNombreCarac::on_Boton_IngNom_guardar_clicked()
{
    Caracteristica_Datos *tipo_caracteristica; //Este es un puntero a caracteristica padre
    int atributo=atrib_actual;//Este entero representa a que caracteristica se agregara el atributo
    switch(atributo) //Es para elegir que tipo de obseto contendra el puntero
    {
        case 0 :tipo_caracteristica=new Marca_Datos();break;

    }
    tipo_caracteristica->insertar_Datos(ui->lineaEdit_IngNom->text()); //Manda ala clase datos a insertar el dato cogido por linea editable
    ui->lineaEdit_IngNom->clear();//Limpia la linea editable
    this->close();//cierra la ventana
}
