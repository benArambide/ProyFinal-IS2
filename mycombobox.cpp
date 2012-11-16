#include "mycombobox.h"
#include <QDebug>

MyComboBox::MyComboBox(QWidget* parent):QComboBox(parent)
{
    //Inicalizamos los punteros a funcion para poder llenar el combobox

    map_funciones["calidad"]=(&(Calidad::listarNombres));
    map_funciones["color"]=(&(Color::listarNombres));
    map_funciones["indicerefraccion"]=(&(IndiceRefraccion::listarNombres));
    map_funciones["marca"]=(&(Marca::listarNombres));
    map_funciones["tamanio"]=(&(Tamanio::listarNombres));
    map_funciones["tipoluna"]=(&(TipoLuna::listarNombres));
    map_funciones["forma"]=(&(Forma::listarNombres));

}


void MyComboBox::IngresarTipo(QString _tipo)
{
    tipo=_tipo;
}

void MyComboBox::Actualizar_Items()
{
    QSqlQueryModel* resultado=(map_funciones[tipo])();
    this->setModel(resultado);
}


void MyComboBox::Eliminar_Item()
{
    QString nombre=this->currentText();
    qDebug()<<"marca a eliminar "<<nombre;

    if(tipo=="calidad"){
        Calidad calidad;
        calidad.existente(nombre);
        calidad.eliminar();
    }
    if(tipo=="color"){
        Color color;
        color.existente(nombre);
        color.eliminar();
    }
    if(tipo=="indicerefraccion"){
        IndiceRefraccion indicerefraccion;
        indicerefraccion.existente(nombre);
        indicerefraccion.eliminar();
    }
    if(tipo=="marca"){
        Marca marca;
        marca.existente(nombre);
        marca.eliminar();
    }
    if(tipo=="tamanio"){
        Tamanio tamanio;
        tamanio.existente(nombre);
        tamanio.eliminar();
    }
    if(tipo=="tipoluna"){
        TipoLuna tipoluna;
        tipoluna.existente(nombre);
        tipoluna.eliminar();
    }
    if(tipo=="forma"){
        Forma forma;
        forma.existente(nombre);
        forma.eliminar();
    }

    this->Actualizar_Items();
}
