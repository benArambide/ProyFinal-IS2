#include "ui_empresa.h"
#include "ui_ui_empresa.h"
//#include "ui_tienda_agregar.h"

ui_empresa::ui_empresa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_empresa)
{
    ui->setupUi(this);
    //ui->tableView->setModel(empresa::mostrar());
}

ui_empresa::~ui_empresa()
{
    delete ui;
}

void ui_empresa::on_pushButton_clicked()
{
    //ui_empresa_agregar* empresa_agregar=new ui_tienda_agregar;
    //empresa_agregar->show();
}
