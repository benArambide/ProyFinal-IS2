#include "ui_agregar_nombre.h"
#include "ui_ui_agregar_nombre.h"

ui_agregar_nombre::ui_agregar_nombre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_nombre)
{
    ui->setupUi(this);
}

ui_agregar_nombre::~ui_agregar_nombre()
{
    delete ui;
}

void ui_agregar_nombre::on_pushButton_cancelar_clicked()
{

}
