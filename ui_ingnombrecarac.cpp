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

void ui_ingNombreCarac::on_Boton_IngNom_cancelar_clicked()
{
    this->close();
}
