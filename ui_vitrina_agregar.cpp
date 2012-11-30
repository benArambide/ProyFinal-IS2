#include "ui_vitrina_agregar.h"
#include "ui_ui_vitrina_agregar.h"

ui_vitrina_agregar::ui_vitrina_agregar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_vitrina_agregar)
{
    ui->setupUi(this);
}

ui_vitrina_agregar::~ui_vitrina_agregar()
{
    delete ui;
}
