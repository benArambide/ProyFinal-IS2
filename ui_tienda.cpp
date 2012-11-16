#include "ui_tienda.h"
#include "ui_ui_tienda.h"
#include "ui_tienda_agregar.h"

ui_tienda::ui_tienda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_tienda)
{
    ui->setupUi(this);
    ui->tableView->setModel(tienda::mostrar());
}

ui_tienda::~ui_tienda()
{
    delete ui;
}

void ui_tienda::on_pushButton_clicked()
{
    ui_tienda_agregar* tienda_agregar=new ui_tienda_agregar;
    tienda_agregar->show();
}
