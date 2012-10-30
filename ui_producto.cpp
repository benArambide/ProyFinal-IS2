#include "ui_producto.h"
#include "ui_ui_producto.h"

ui_producto::ui_producto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_producto)
{
    ui->setupUi(this);
}

ui_producto::~ui_producto()
{
    delete ui;
}
