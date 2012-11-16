#include "ui_tienda.h"
#include "ui_ui_tienda.h"

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
