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
    vec_funciones.push_back(&(Luna::buscar));
    vec_funciones.push_back(&(Montura::buscar));

}

ui_producto::~ui_producto()
{
    delete ui;



}

void ui_producto::on_pushButton_5_clicked()
{
    QSqlQueryModel* resultado= (vec_funciones[posicion])(ui->lineEdit->text());
    ui->tableView->setModel(resultado);
    ui->lineEdit->clear();
}

void ui_producto::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    //Si pudiera en vez de compara pondria las posiciones pero no se como

    if(item->text(column)=="Lunas")
        posicion=0;
    if(item->text(column)=="Monturas")
        posicion=1;
}

void ui_producto::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{

}

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
