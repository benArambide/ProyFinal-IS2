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

void ui_vitrina_agregar::on_guardar_clicked()
{
    vitrina nueva_vitrina;
    nueva_vitrina.setAlias(ui->textAlias->text());
    nueva_vitrina.setCodigo(ui->textCodigo->text());
    nueva_vitrina.setIdTienda("1");
    nueva_vitrina.setNum_Columnas(ui->spinBoxcolumnas->value());
    nueva_vitrina.setNum_Filas(ui->spinBoxFilas->value());
    nueva_vitrina.setNum_Niveles(ui->spinBoxniveles->value());
    nueva_vitrina.agregar();

    this->close();
}

void ui_vitrina_agregar::on_cancelar_clicked()
{
    this->close();
}

void ui_vitrina_agregar::setVitrina(vitrina * p)
{
    ui->textCodigo->setText(p->getCodigo());
    ui->textAlias->setText(p->getAlias());
    ui->spinBoxcolumnas->setValue(p->getNum_Columnas());
    ui->spinBoxFilas->setValue(p->getNum_Filas());
    ui->spinBoxniveles->setValue(p->getNum_Niveles());


}
