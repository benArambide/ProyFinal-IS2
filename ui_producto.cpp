#include "ui_producto.h"
#include "ui_ui_producto.h"
#include <QVector>
#include <QDebug>

ui_producto::ui_producto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_producto)
{
    ui->setupUi(this);
    posicion=0;

    //Se agrega al vector de funciones las funciones de busqueda de
    //todos los productos
    vec_funciones.push_back(&(Luna::buscar));
    vec_funciones.push_back(&(Montura::buscar));

    //se incializa el puntero a producto seleccionado, el cual guardará
    //el model de cada producto que se selecciones segun la busqueda
    //tambien este model tendra los id de los productos al contrario del que se muestra
    model_actual=new QSqlQueryModel;

}

ui_producto::~ui_producto()
{
    delete ui;



}




/**
 * @brief Funcion del boton de busqueda
 */
void ui_producto::on_pushButton_5_clicked()
{
    QSqlQueryModel* resultado= (vec_funciones[posicion])(ui->lineEdit->text());

    //se copea el query para que model actual seactualize
    model_actual->setQuery(resultado->query());

    //borramos la columna donde esta el id de la luna(id de la BD)
    resultado->removeColumn(0);//atento en esta parte a a hora del testing


    ui->tableView->setModel(resultado);

    ui->lineEdit->clear();
}




/**
 * @brief Funcion del click en alguna categoria tales como por ejemplo
 + luna, montura. etc
 */
void ui_producto::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    //Si pudiera en vez de compara pondria las posiciones pero no se como

    if(item->text(column)=="Lunas")
        posicion=0;
    if(item->text(column)=="Monturas")
        posicion=1;
}






/**
 * @brief Funcion del boton de aregar que dependiendo de la seleccion de la categoria
 * generará una ventana segun el tipo de producto
 */
void ui_producto::on_pushButton_clicked()
{
    if(posicion==0)
    {
        ui_producto_agregar_luna* ventana_agregar=new ui_producto_agregar_luna;
        ventana_agregar->show();
    }
    else if(posicion==1)
    {
        ui_producto_agregar_montura* ventana_agregar=new ui_producto_agregar_montura;
        ventana_agregar->show();
    }
}




/**
 * @brief Funcion del boton de aregar que dependiendo de la seleccion de la categoria
 * generará una ventana segun el tipo de producto para poder editar, el cual se llenará
 * dependiendo del producto seleccionado
 */
void ui_producto::on_pushButton_aditar_luna_clicked()
{

}

void ui_producto::on_tableView_clicked(const QModelIndex &index)
{

}

void ui_producto::on_pushButton_eliminar_luna_clicked()
{
    //verifica que no este nulo para que no se cuelgue, siempre debe aver seleccionado
    //alguno
    if(model_actual!=NULL)
    {
        int id;
        if(posicion==0)
        {
            //Toma el id del producto seleccionado
            id= model_actual->data(model_actual->index(ui->tableView->currentIndex().row(),0)).toInt();
            Luna luna_nueva(id);
            luna_nueva.eliminar();

        }
        else if(posicion==1)
        {
            id= model_actual->data(model_actual->index(ui->tableView->currentIndex().row(),0)).toInt();
            Montura montura_nueva(id);
            montura_nueva.eliminar();
        }
    }
}
