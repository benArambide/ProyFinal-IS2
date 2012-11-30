#include "compras.h"
#include "ui_compras.h"

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
