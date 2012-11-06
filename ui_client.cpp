#include "ui_client.h"
#include "ui_ui_client.h"

#include<QTableWidgetItem>
#include<QDebug>

UI_CLIENT::UI_CLIENT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_CLIENT)
{
    ui->setupUi(this);
    listar();

    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void UI_CLIENT::listar()
{
    QSqlQuery qcliente("SELECT * FROM cliente");
    QSqlQuery qpersona;
    QTableWidgetItem* item=new QTableWidgetItem();

    qcliente.first();

    ui->tableWidget->clearContents();
    for(int i=0;i<qcliente.size();i++)
    {
        ui->tableWidget->removeRow(i);
        ui->tableWidget->insertRow(i);

        qpersona.exec("SELECT nombres,primer_apellido,segundo_apellido FROM persona,cliente where persona.idpersona="+qcliente.value(0).toString());
        qpersona.first();

        item->setText(qpersona.value(0).toString());
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(qpersona.value(0).toString()));
        item->setText(qpersona.value(1).toString());
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(qpersona.value(1).toString()));
        item->setText(qpersona.value(2).toString());
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(qpersona.value(2).toString()));

        qcliente.next();
    }
}

UI_CLIENT::~UI_CLIENT()
{
    delete ui;
}

void UI_CLIENT::on_pushButton_Nuevo_clicked()
{
    UI_DATA_CLIENT *NEW_CLIENT_FORM;
    NEW_CLIENT_FORM = new UI_DATA_CLIENT;
    NEW_CLIENT_FORM->setTitleWindow("Nuevo Cliente");
    NEW_CLIENT_FORM->show();
    connect(NEW_CLIENT_FORM,SIGNAL(guardar()),this,SLOT(listar()));
}

void UI_CLIENT::on_pushButton_Editar_clicked()
{
    int fila=ui->tableWidget->currentRow();
    if(fila!=-1)
    {
        QString nombres=ui->tableWidget->item(fila,0)->text();
        QString primer_apellido=ui->tableWidget->item(fila,1)->text();
        QString segundo_apellido=ui->tableWidget->item(fila,2)->text();
        Cliente* cliente=new Cliente(nombres,primer_apellido,segundo_apellido);
        UI_DATA_CLIENT *EDIT_CLIENT_FORM;
        EDIT_CLIENT_FORM = new UI_DATA_CLIENT;
        EDIT_CLIENT_FORM->setTitleWindow("Editar Cliente");
        EDIT_CLIENT_FORM->setCliente(cliente);
        EDIT_CLIENT_FORM->show();
        connect(EDIT_CLIENT_FORM,SIGNAL(guardar()),this,SLOT(listar()));
    }
}
