#include "ui_agregar_venta.h"
#include "ui_ui_agregar_venta.h"

ui_agregar_venta::ui_agregar_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_venta)
{
    ui->setupUi(this);
}

ui_agregar_venta::~ui_agregar_venta()
{
    delete ui;
}

void ui_agregar_venta::on_pushButton_Cancelar_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Cancelar_4_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Cancelar_3_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Cancelar_7_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Aceptar_clicked()
{
    receta nueva_receta;
    //nueva_receta.setfecha(ui->dateEdit_fecha->date());
    nueva_receta.setid(1);
    nueva_receta.settipodoc("1");
    nueva_receta.setnombres(ui->le_nombres->text());
    nueva_receta.setprimer_apellido(ui->le_primerApellido->text());
    nueva_receta.setsegundo_apellido(ui->le_segundoApellido->text());
    nueva_receta.setoi_lejos(ui->sb_oilejos->value());
    nueva_receta.setoi_cerca(ui->sb_oicerca->value());
    nueva_receta.setod_lejos(ui->sb_odlejos->value());
    nueva_receta.setod_cerca(ui->sb_odcerca->value());
    nueva_receta.setoi_esferico(ui->sb_oiesferico->value());
    nueva_receta.setod_esferico(ui->sb_odesferico->value());
    nueva_receta.setoi_cilidrico(ui->sb_oicilindrico->value());
    nueva_receta.setod_cilindrico(ui->sb_odcilindrico->value());
    nueva_receta.setoi_eje(ui->sb_oieje->value());
    nueva_receta.setod_eje(ui->sb_odeje->value());
    nueva_receta.setdist_pupilar(ui->sb_distpupilar->value());
    nueva_receta.agregar();
    this->close();
}
