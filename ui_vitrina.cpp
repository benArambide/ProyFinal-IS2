#include "ui_vitrina.h"
#include "ui_ui_vitrina.h"

ui_vitrina::ui_vitrina(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_vitrina)
{
    ui->setupUi(this);
}

ui_vitrina::~ui_vitrina()
{
    delete ui;
}

void ui_vitrina::on_agregar_clicked()
{
    ui_vitrina_agregar*agre=new ui_vitrina_agregar();
    agre->show();
}
