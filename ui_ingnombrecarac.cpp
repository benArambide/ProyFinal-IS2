#include "ui_ingnombrecarac.h"
#include "ui_ui_ingnombrecarac.h"

ui_ingNombreCarac::ui_ingNombreCarac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_ingNombreCarac)
{
    ui->setupUi(this);
}

ui_ingNombreCarac::~ui_ingNombreCarac()
{
    delete ui;
}
