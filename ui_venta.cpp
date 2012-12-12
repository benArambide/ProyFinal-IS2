#include "ui_venta.h"
#include "ui_ui_venta.h"

ui_venta::ui_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_venta)
{
    ui->setupUi(this);
}

ui_venta::~ui_venta()
{
    delete ui;
}
