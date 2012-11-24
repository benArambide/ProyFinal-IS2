#include "ui_cliente.h"
#include "ui_ui_cliente.h"
#include <ui_cliente_datos.h>

ui_cliente::ui_cliente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_cliente)
{
    ui->setupUi(this);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    listar();
}

void ui_cliente::listar()
{
    ui->tableView->setModel(cliente::mostrar());
}

ui_cliente::~ui_cliente()
{
    delete ui;
}

void ui_cliente::on_pushButton_clicked()
{
    ui_cliente_datos* cliente_agregar=new ui_cliente_datos;
    cliente_agregar->setWindowTitle("Nuevo Cliente");
    cliente_agregar->show();
    connect(cliente_agregar,SIGNAL(guarde()),this,SLOT(listar()));
}

#include <iostream>
using namespace std;

void ui_cliente::on_pushButton_2_clicked()
{
    int fila=ui->tableView->currentIndex().row();
    if(fila!=-1)
    {
        persona persona_selec;
        persona_selec.setNombres(ui->tableView->model()->data(ui->tableView->model()->index(fila,0)).toString());
        persona_selec.setPrimerApellido(ui->tableView->model()->data(ui->tableView->model()->index(fila,1)).toString());
        persona_selec.setSegundoApellido(ui->tableView->model()->data(ui->tableView->model()->index(fila,2)).toString());
        if(persona_selec.buscar())
        {
            cliente cliente_selec;
            cliente_selec.setIdCliente(persona_selec.getIdPersona());
            if(cliente_selec.buscar())
            {
                ui_cliente_datos* cliente_actualizar=new ui_cliente_datos;
                cliente_actualizar->setWindowTitle("Editar Cliente");
                cliente_actualizar->setCliente(&persona_selec);
                cliente_actualizar->show();
                connect(cliente_actualizar,SIGNAL(guarde()),this,SLOT(listar()));
            }
        }
    }
}
