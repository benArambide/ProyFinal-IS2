#include "compras.h"
#include "ui_compras.h"
#include "ui_datos_compras.h"
#include <QString>
#include <QSqlQuery>
#include "ui_cant_item.h"
#include<QDebug>
#include <QInputDialog>

compras::compras(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::compras)
{
    ui->setupUi(this);
    contador = 0;
}

compras::~compras()
{
    delete ui;
}

void compras::on_pushButton_clicked()
{
    ui_datos_compras* compras = new ui_datos_compras;
    compras->show();


}

void compras::on_pushButton_2_clicked()
{


}


void compras::on_pushButton_buscar_proveedor_clicked()
{
    for (int i=ui->tableWidget_proveedores->rowCount()-1; i >= 0; --i)
        ui->tableWidget_proveedores->removeRow(i);

    QString nombre_proveedor,nombre,ruc,idproveedor;

    nombre_proveedor = ui->lineEdit_proveedor->text();
    QSqlQuery query;
    query.prepare("SELECT idproveedor,ruc,raz_social FROM  proveedor WHERE raz_social REGEXP \""+nombre_proveedor+"\"");
    query.exec();
    int c = 0;

       while(query.next())
       {
           idproveedor = query.value(0).toString();
           ruc = query.value(1).toString();
           nombre = query.value(2).toString();
           Proveedores[nombre] = idproveedor;
           ui->tableWidget_proveedores->insertRow(c);
           ui->tableWidget_proveedores->setItem(c,0, new QTableWidgetItem(ruc));
           ui->tableWidget_proveedores->setItem(c,1, new QTableWidgetItem(nombre));
           c++;
       }

}

void compras::on_pushButton_buscar_producto_clicked()
{
    for (int i=ui->tableWidget_productos->rowCount()-1; i >= 0; --i)
        ui->tableWidget_productos->removeRow(i);


    QString codigo,descripcion,accesorios,precio,idproducto,descripcion_buscado;

    descripcion_buscado = ui->lineEdit_productos->text();
    QSqlQuery query;
    query.prepare("SELECT idproducto,codigo,descripcion,accesorios,precio_compra FROM  producto WHERE descripcion REGEXP \""+descripcion_buscado+"\"");
    query.exec();
    int c = 0;

       while(query.next())
       {
           idproducto = query.value(0).toString();
           codigo = query.value(1).toString();
           descripcion = query.value(2).toString();
           accesorios = query.value(3).toString();
           precio = query.value(4).toString();
           Productos[descripcion] = idproducto;
           ui->tableWidget_productos->insertRow(c);
           ui->tableWidget_productos->setItem(c,0, new QTableWidgetItem(codigo));
           ui->tableWidget_productos->setItem(c,1, new QTableWidgetItem(descripcion));
           ui->tableWidget_productos->setItem(c,2, new QTableWidgetItem(accesorios));
           ui->tableWidget_productos->setItem(c,3, new QTableWidgetItem(precio));
           c++;
       }

}

void compras::on_tableWidget_proveedores_itemClicked(QTableWidgetItem *item)
{
    int count = item->row();
    QString raz_social = ui->tableWidget_proveedores->item(count,1)->text();
    QString idproveedor = Proveedores[raz_social];
    QSqlQuery query;
    query.prepare("SELECT raz_social,ruc,direccion FROM  proveedor WHERE idproveedor = '"+idproveedor+"'");
    query.exec();query.next();
    ui->lineEdit_proveedor->setText(query.value(0).toString());
    ui->lineEdit_ruc->setText(query.value(1).toString());
    ui->lineEdit_direccion->setText(query.value(2).toString());
}

void compras::on_tableWidget_productos_itemClicked(QTableWidgetItem *item)
{
    ui_cant_item* viewCant = new ui_cant_item;
    viewCant->setCurrentParent(this);
    viewCant->setRow(item->row());
    viewCant->show();
}

void compras::on_pushButton_guardar_clicked()
{
    QString idproveedor,fecha,total;
    fecha = ui->dateEdit->date().toString();
    idproveedor = Proveedores[ui->lineEdit_proveedor->text()];
    total = ui->lineEdit_total->text();
    QSqlQuery query;
    query.prepare("INSERT INTO compra (fecha,subtotal,proveedor_idproveedor) VALUES (?,?,?) ");
    query.bindValue(0,fecha);
    query.bindValue(1,total);
    query.bindValue(2,idproveedor);
    query.exec();

    query.exec("SELECT LAST_INSERT_ID()");
    /*QString idcompra = query.value(0);

    for (int i = 0; i<ui->tableWidget__items_productos->rowCount(); i++)
           {
               qDebug()<<"Insertando datos del tableWidged"<<endl;
               FECHA_INICIO = ui->tableWidget_Terapeutica->item(i,0)->text();

               query.prepare("INSERT INTO "")
               query.bindValue(0,R_HISTORIAL_DOCUMENTO);
               query.bindValue(1,HISTORIA_CLINICA);
               query.bindValue(2,FECHA_INICIO);
               query.bindValue(3,HORA_INICIO);
               query.bindValue(4,TERAPEUTICA);
               query.bindValue(5,FECHA_FIN);
               query.bindValue(6,HORA_FIN);
               if(query.exec() == TRUE)
                qDebug()<<"Insertando Correctamente Fila: "<<i<<endl;
               else
                qDebug()<<"Error en la no se inserto datos: "<<i<<endl;
           }

    */







}
void compras::addItemProductos(int cant,int row)
{
        int cantidad = cant;
        int count = row;
        QString codigo = ui->tableWidget_productos->item(count,0)->text();
        QString descripcion = ui->tableWidget_productos->item(count,1)->text();
        QString accesorios = ui->tableWidget_productos->item(count,2)->text();
        QString precio = ui->tableWidget_productos->item(count,3)->text();
        int total = cantidad*precio.toInt();
        compra_total += total;

        int monto_sub_total;
        int monto_impuesto;
        int monto_total;
        qDebug()<<compra_total<<endl;
        monto_sub_total = compra_total;
        monto_impuesto = (monto_sub_total * ui->lineEdit_igv_porciento->text().toInt()/100);
        monto_total = monto_sub_total + monto_impuesto;


        ui->tableWidget__items_productos->insertRow(contador);

        ui->tableWidget__items_productos->setItem(contador,0, new QTableWidgetItem(codigo));
        ui->tableWidget__items_productos->setItem(contador,1, new QTableWidgetItem(descripcion));
        ui->tableWidget__items_productos->setItem(contador,2, new QTableWidgetItem(accesorios));
        ui->tableWidget__items_productos->setItem(contador,3, new QTableWidgetItem(precio));
        ui->tableWidget__items_productos->setItem(contador,4, new QTableWidgetItem(QString::number(cantidad)));
        ui->tableWidget__items_productos->setItem(contador,5, new QTableWidgetItem(QString::number(total)));

        contador++;

        ui->lineEdit_subtotal->setText(QString::number(monto_sub_total));
        ui->lineEdit_igv->setText(QString::number(monto_impuesto));
        ui->lineEdit_total->setText(QString::number(monto_total));



}
