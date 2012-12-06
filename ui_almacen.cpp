#include "ui_almacen.h"
#include "ui_ui_almacen.h"
#include "ui_almacen_opciones.h"

#include "almacen.h"
#include "andamio.h"
#include "contenedor.h"

#include <QSqlRecord>
#include <QDebug>

void InsertarElementos(QSqlQueryModel* model,QTreeWidget* widget)
{
    for(int I=0;I<model->rowCount();++I)
    {
        QTreeWidgetItem* elem=new QTreeWidgetItem(widget);
        elem->setText(0,model->record(I).value(2).toString());
        elem->setText(1,model->record(I).value(0).toString());
        elem->setText(2,model->record(I).value(1).toString());
    }
}

void InsertarElementos(QSqlQueryModel* model,QTreeWidgetItem* widget)
{
    for(int I=0;I<model->rowCount();++I)
    {
        QTreeWidgetItem* elem=new QTreeWidgetItem(widget);
        elem->setText(0,model->record(I).value(2).toString());
        elem->setText(1,model->record(I).value(0).toString());
        elem->setText(2,model->record(I).value(1).toString());
    }
}

void ActualizarTreeWidget(QTreeWidget* widget)
{
    widget->clear();

    //ToDo: Cambiar todo esto por recursividad
    InsertarElementos(almacen::getAlmacenes(),widget);

    for(int I=0;I<widget->topLevelItemCount();I++)
    {
        InsertarElementos(andamio::getAndamios(widget->topLevelItem(I)->text(1)),widget->topLevelItem(I));

        for(int J=0;J<widget->topLevelItem(I)->childCount();J++)
            InsertarElementos(contenedor::getContenedores(widget->topLevelItem(I)->child(J)->text(1)),widget->topLevelItem(I)->child(J));
    }
}

ui_almacen::ui_almacen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_almacen)
{
    ui->setupUi(this);

    ActualizarTreeWidget(ui->treeWidget);
}

ui_almacen::~ui_almacen()
{
    delete ui;
}

void ui_almacen::on_pushButton_6_clicked()
{
    ui_almacen_opciones* OPCIONES=new ui_almacen_opciones;
    OPCIONES->show();
}

void ui_almacen::on_treeWidget_itemClicked(QTreeWidgetItem* item, int column)
{

}

void ui_almacen::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(item->text(column).startsWith("Conte"))
        ui->tableView->setModel(contenedor::getContenedores());
    else if(item->text(column).startsWith("And"))
        ui->tableView->setModel(andamio::getAndamios());
    else if(item->text(column).startsWith("Alm"))
        ui->tableView->setModel(almacen::getAlmacenes());
}

void ui_almacen::on_pushButton_5_clicked()
{
    ActualizarTreeWidget(ui->treeWidget);
}
