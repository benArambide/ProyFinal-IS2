#include "compras.h"
#include "ui_compras.h"
#include "ui_datos_compras.h"
compras::compras(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::compras)
{
    ui->setupUi(this);
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


