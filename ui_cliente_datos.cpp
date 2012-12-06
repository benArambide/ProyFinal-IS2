#include "ui_cliente_datos.h"
#include "ui_ui_cliente_datos.h"

ui_cliente_datos::ui_cliente_datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_cliente_datos)
{
    ui->setupUi(this);
    ui->comboBox_tipoDoc->setModel(tipodoc_ident::mostrar());
}

ui_cliente_datos::~ui_cliente_datos()
{
    delete ui;
}

void ui_cliente_datos::setCliente(persona * p)
{
    cliente_act=*p;
    ui->lineEdit_nombres->setText(p->getNombres());
    ui->lineEdit_primerApellido->setText(p->getPrimerApellido());
    ui->lineEdit_segundoApellido->setText(p->getSegundoApellido());
    ui->comboBox_tipoDoc->setCurrentIndex(p->getIdTipoDocIdent().toInt()-1);///////
    ui->lineEdit_nroDoc->setText(p->getNroDoc());
    //ui->dateEdit->setDate(p->getFechaNacimiento());
    ui->comboBox_sexo->setCurrentIndex(p->getSexo().toInt());
    ui->lineEdit_direccion->setText(p->getDireccion());
    ui->lineEdit_telefono->setText(p->getTelefono());
    ui->celular->setText(p->getCelular());
}

void ui_cliente_datos::on_pushButton_Aceptar_clicked()
{
    cliente nuevo_cliente;
    tipodoc_ident documento;

    cliente_act.setNombres(ui->lineEdit_nombres->text());
    cliente_act.setPrimerApellido(ui->lineEdit_primerApellido->text());
    cliente_act.setSegundoApellido(ui->lineEdit_segundoApellido->text());
    cliente_act.setNroDoc(ui->lineEdit_nroDoc->text());
    cliente_act.setDireccion(ui->lineEdit_direccion->text());
    QString sx;sx=sx.setNum(ui->comboBox_sexo->currentIndex());
    cliente_act.setSexo(sx);
    cliente_act.setFechaNacimiento(ui->dateEdit->date().toString());
    cliente_act.setTelefono(ui->lineEdit_telefono->text());
    cliente_act.setCelular(ui->celular->text());
    documento.setNombre(ui->comboBox_tipoDoc->currentText());
    documento.buscar();
    cliente_act.setIdTipoDocIdent(documento.getIdTipoDocIdent());

    if(strcmp(this->windowTitle().toStdString().c_str(),"Nuevo Cliente")==0)
        if(cliente_act.agregar())
        {
            cliente_act.buscar();
            nuevo_cliente.setIdCliente(cliente_act.getIdPersona());
            if(nuevo_cliente.agregar())
            {
                this->close();
                guarde();
            }
        }
    if(strcmp(this->windowTitle().toStdString().c_str(),"Editar Cliente")==0)
        if(cliente_act.actualizar())
        {
            this->close();
            guarde();
        }
}

void ui_cliente_datos::on_pushButton_Cancelar_clicked()
{
    this->close();
}
