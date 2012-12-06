#include "ui_almacen_opciones.h"
#include "ui_ui_almacen_opciones.h"

#include "almacen.h"
#include "andamio.h"
#include "contenedor.h"
#include <QSqlRecord>

ui_almacen_opciones::ui_almacen_opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_almacen_opciones)
{
    ui->setupUi(this);

    QSqlQueryModel* modelAlmacen=almacen::getAlmacenes();

    for(int I=0;I<modelAlmacen->rowCount();++I)
        ui->comboAlmacen->addItem(modelAlmacen->record(I).value(2).toString());

    QSqlQueryModel* modelAndamio=andamio::getAndamios();

    for(int I=0;I<modelAndamio->rowCount();++I)
        ui->comboAndamio->addItem(modelAndamio->record(I).value(2).toString());
}

ui_almacen_opciones::~ui_almacen_opciones()
{
    delete ui;
}

void ui_almacen_opciones::on_pushButton_7_clicked()
{
    this->close();
}

void ui_almacen_opciones::on_pushButton_8_clicked()
{
    this->close();
}

void ui_almacen_opciones::on_botonConfirmarAndamio_clicked()
{
    andamio nuevoAndamio("0",almacen::getAlmacenByNombre(ui->comboAlmacen->itemText(ui->comboAlmacen->currentIndex()))->getIdAlmacen(),ui->editAndamio->text());
    nuevoAndamio.agregar();
}

void ui_almacen_opciones::on_botonConfirmarContenedor_clicked()
{
    contenedor nuevoContenedor("0",andamio::getAndamioByNombre(ui->comboAndamio->itemText(ui->comboAndamio->currentIndex()))->getIdAndamio(),ui->editContenedor->text());
    nuevoContenedor.agregar();
}
