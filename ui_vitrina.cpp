#include "ui_vitrina.h"
#include "ui_ui_vitrina.h"
#include <iostream>
using namespace std;

ui_vitrina::ui_vitrina(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_vitrina)
{
    ui->setupUi(this);
    ui->tableView->setModel(vitrina::mostrar());

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

void ui_vitrina::on_editar_clicked()
{
    cout<<"entre"<<endl;
    int fila=ui->tableView->currentIndex().row();
    if(fila!=-1)
    {
        vitrina vitrina_selec;
        vitrina_selec.setCodigo(ui->tableView->model()->data(ui->tableView->model()->index(fila,0)).toString());
        vitrina_selec.setAlias(ui->tableView->model()->data(ui->tableView->model()->index(fila,1)).toString());
        vitrina_selec.setNum_Filas(ui->tableView->model()->data(ui->tableView->model()->index(fila,2)).toInt());
        vitrina_selec.setNum_Columnas(ui->tableView->model()->data(ui->tableView->model()->index(fila,3)).toInt());
        vitrina_selec.setNum_Niveles(ui->tableView->model()->data(ui->tableView->model()->index(fila,4)).toInt());

        if(vitrina_selec.buscar())
        {
            ui_vitrina_agregar * agre= new ui_vitrina_agregar;
                agre->setWindowTitle("Editar Cliente");
                agre->setVitrina(&vitrina_selec);
                agre->show();
                connect(agre,SIGNAL(guarde()),this,SLOT(listar()));

        }
    }
}
