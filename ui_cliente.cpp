#include "ui_cliente.h"
#include "ui_ui_cliente.h"

ui_cliente::ui_cliente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_cliente)
{
    ui->setupUi(this);
}

ui_cliente::~ui_cliente()
{
    delete ui;
}
