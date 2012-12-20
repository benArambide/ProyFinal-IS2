#include "ui_traspaso_almacen.h"
#include "ui_ui_traspaso_almacen.h"
#include "ui_item_posicion.h"

ui_traspaso_almacen::ui_traspaso_almacen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_traspaso_almacen)
{
    ui->setupUi(this);
    update_comboBox_Empresa();
}

ui_traspaso_almacen::~ui_traspaso_almacen()
{
    delete ui;
}

QString ui_traspaso_almacen::get_currentIdEmpresa(){return currentIdEmpresa;}
QString ui_traspaso_almacen::get_currentIdTienda(){return currentIdTienda;}
QString ui_traspaso_almacen::get_currentIdAlmacen(){return currentIdAlmacen;}
QString ui_traspaso_almacen::get_currentIdAndamio(){return currentIdAndamio;}
QString ui_traspaso_almacen::get_currentIdContenedor(){return currentIdContenedor;}

void ui_traspaso_almacen::set_currentIdEmpresa(QString e){currentIdEmpresa = e;}
void ui_traspaso_almacen::set_currentIdTienda(QString t){currentIdTienda = t;}
void ui_traspaso_almacen::set_currentIdAlmacen(QString al){currentIdAlmacen = al;}
void ui_traspaso_almacen::set_currentIdAndamio(QString an){currentIdAndamio = an;}
void ui_traspaso_almacen::set_currentIdContenedor(QString c){currentIdContenedor = c;}

void ui_traspaso_almacen::update_comboBox_Empresa()
{
    ui->comboBox_Empresa->clear();

    QSqlQuery query;
    query.prepare("SELECT idempresa,raz_social FROM empresa");
    query.exec();

    int c = 0;

    while(query.next())
    {
        QString idempresa = query.value(0).toString();
        QString raz_social = query.value(1).toString();

        Empresas[raz_social] = idempresa;
        ui->comboBox_Empresa->insertItem(c,raz_social);

        c++;
    }
}

void ui_traspaso_almacen::update_comboBox_Tienda(QString idEmpresa)
{
    ui->comboBox_Tienda->clear();

    QSqlQuery query;
    query.prepare("SELECT idtienda,alias FROM tienda WHERE idempresa=?");
    query.bindValue(0,idEmpresa);
    query.exec();

    int c = 0;

    while(query.next())
    {
        QString idtienda = query.value(0).toString();
        QString alias = query.value(1).toString();

        Tiendas[alias] = idtienda;

        ui->comboBox_Tienda->insertItem(c,alias);

        c++;
    }
}

void ui_traspaso_almacen::update_comboBox_Almacen(QString idTienda)
{
    ui->comboBox_Almacen->clear();

    QSqlQuery query;
    query.prepare("SELECT idalmacen,nombre FROM almacen WHERE idtienda=?");
    query.bindValue(0,idTienda);
    query.exec();

    int c = 0;

    while(query.next())
    {
        QString idalmacen = query.value(0).toString();
        QString nombre = query.value(1).toString();

        Almacenes[nombre] = idalmacen;

        ui->comboBox_Almacen->insertItem(c,nombre);

        c++;
    }

}
void ui_traspaso_almacen::update_comboBox_Andamio(QString idAlmacen)
{
    ui->comboBox_Andamio->clear();

    QSqlQuery query;
    query.prepare("SELECT idandamio,nombre FROM andamio WHERE idalmacen=?");
    query.bindValue(0,idAlmacen);
    query.exec();

    int c = 0;

    while(query.next())
    {
        QString idandamio = query.value(0).toString();
        QString nombre = query.value(1).toString();

        Andamios[nombre] = idandamio;

        ui->comboBox_Andamio->insertItem(c,nombre);

        c++;
    }
}

void ui_traspaso_almacen::clear_widget_Contenedores()
{
    for(int i=ui->tableWidget_griContenedores->rowCount()-1; i>=0;--i)
        ui->tableWidget_griContenedores->removeRow(i);
    for(int i=ui->tableWidget_griContenedores->columnCount()-1;i>=0;--i)
        ui->tableWidget_griContenedores->removeColumn(i);
}

void ui_traspaso_almacen::set_dimension_widget_Contenedores()
{
    clear_widget_Contenedores();

    QSqlQuery query;
    query.prepare("SELECT fila,columna FROM andamio WHERE idandamio=?");
    query.bindValue(0,currentIdAndamio);
    query.exec();

    query.next();

    int fila = query.value(0).toInt();
    int columna = query.value(1).toInt();

    for(int i = 0;i<columna;i++)
        ui->tableWidget_griContenedores->insertColumn(i);
    for(int i = 0;i<fila;i++)
        ui->tableWidget_griContenedores->insertRow(i);

}

void ui_traspaso_almacen::update_widget_Contenedores()
{
    Contenedor.clear();
    QSqlQuery query;
    query.prepare("SELECT nombre,descripcion,pos_fila,pos_columna,idcontenedor FROM contenedor WHERE idandamio=?");
    query.bindValue(0,currentIdAndamio);
    query.exec();

    while(query.next())
    {
        QString nombre = query.value(0).toString();
        QString descripcion = query.value(1).toString();
        int pos_fila = query.value(2).toInt();
        int pos_columna = query.value(3).toInt();
        QString idcontenedor = query.value(4).toString();

        QString key = QString::number(pos_fila)+"-"+QString::number(pos_columna);
        Contenedor[key] = idcontenedor;

        ui->tableWidget_griContenedores->setItem(pos_fila-1,pos_columna-1,new QTableWidgetItem(nombre));
    }
}



void ui_traspaso_almacen::on_comboBox_Empresa_currentIndexChanged(const QString &arg1)
{
    set_currentIdEmpresa(Empresas[arg1]);
    update_comboBox_Tienda(get_currentIdEmpresa());
}

void ui_traspaso_almacen::on_comboBox_Tienda_currentIndexChanged(const QString &arg1)
{
    set_currentIdTienda(Tiendas[arg1]);
    update_comboBox_Almacen(get_currentIdTienda());
}

void ui_traspaso_almacen::on_comboBox_Almacen_currentIndexChanged(const QString &arg1)
{
    set_currentIdAlmacen(Almacenes[arg1]);
    update_comboBox_Andamio(get_currentIdAlmacen());
}

void ui_traspaso_almacen::on_comboBox_Andamio_currentIndexChanged(const QString &arg1)
{
    set_currentIdAndamio(Andamios[arg1]);

    set_dimension_widget_Contenedores();
    update_widget_Contenedores();
}

void ui_traspaso_almacen::on_tableWidget_griContenedores_itemSelectionChanged()
{
    QString fila = QString::number(ui->tableWidget_griContenedores->currentRow()+1);

    QString columna = QString::number(ui->tableWidget_griContenedores->currentColumn()+1);

    QString pos = fila+"-"+columna;

    set_currentIdContenedor(Contenedor[pos]);

}
void ui_traspaso_almacen::on_pushButton_aceptar_traspaso_clicked()
{

    if(!currentIdContenedor.isEmpty())
    {
        QSqlQuery query1;
        query1.prepare("SELECT idproducto FROM item_posicion WHERE iditem_posicion=?");
        query1.bindValue(0,idItem_tras);
        query1.exec();
        query1.next();
        QString idpro=query1.value(0).toString();
        item_posicion *del = new item_posicion(idItem_tras,"","",0,0,0);
        del->eliminar();

        QSqlQuery query;
        query.prepare("INSERT INTO producto_contenedor(producto_idproducto,contenedor_idcontenedor) VALUES(?,?)");
        query.bindValue(0,idpro);
        query.bindValue(1,get_currentIdContenedor());
        close();
        ui_tienda_traspaso->limpiar_grilla();
        ui_tienda_traspaso->set_dimension_grilla();
        ui_tienda_traspaso->actualizar_grilla();

    }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Seleccione un espacio vacio");
        msgBox.exec();

    }

}
