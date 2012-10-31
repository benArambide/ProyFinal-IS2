#include "ui_data_client.h"
#include "ui_ui_data_client.h"

UI_DATA_CLIENT::UI_DATA_CLIENT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_DATA_CLIENT)
{
    ui->setupUi(this);

    QSqlQuery q;
    q.exec("select * from tipodoc_ident");
    q.first();
    for(int i=0;i<q.size();i++)
    {
        ui->comboBox_TipoDocumento->addItem(q.value(1).toString());
        q.next();
    }
    cliente=new Cliente();
}


UI_DATA_CLIENT::~UI_DATA_CLIENT()
{
    delete ui;
}

void UI_DATA_CLIENT::setTitleWindow(string title)
{
    this->setWindowTitle(QString::fromStdString(title));
}
void UI_DATA_CLIENT::setCliente(Cliente *cliente)
{
    this->cliente=cliente;
    cliente->buscar();

    ui->lineEdit_Nombres->setText(cliente->getNombres());
    ui->lineEdit_PrimerApellido->setText(cliente->getPrimerApellido());
    ui->lineEdit_SegundoApellido->setText(cliente->getSegundoApellido());
    ui->comboBox_TipoDocumento->setCurrentIndex(cliente->getTipoDocumento());
    ui->lineEdit_NumDocumento->setText(cliente->getNumeroDocumento());
    ui->dateEdit_Fecha->setDate(cliente->getFechaNacimiento());
    ui->comboBox_Sexo->setCurrentIndex(cliente->getSexo());
    ui->lineEdit_Direccion->setText(cliente->getDireccion());
    ui->lineEdit_Telefono->setText(cliente->getTelefono());
    ui->lineEdit_Celular->setText(cliente->getCelular());
}

void UI_DATA_CLIENT::on_pushButton_Cancelar_clicked()
{
    this->close();
}

void UI_DATA_CLIENT::on_pushButton_Aceptar_clicked()
{
    QString n=ui->lineEdit_Nombres->text();
    QString p=ui->lineEdit_PrimerApellido->text();
    QString s=ui->lineEdit_SegundoApellido->text();
    QString t;t=t.setNum(ui->comboBox_TipoDocumento->currentIndex());
    QString nd=ui->lineEdit_NumDocumento->text();
    QDate f=ui->dateEdit_Fecha->date();
    QString sx;sx=sx.setNum(ui->comboBox_Sexo->currentIndex());
    QString d=ui->lineEdit_Direccion->text();
    QString tf=ui->lineEdit_Telefono->text();
    QString c=ui->lineEdit_Celular->text();

    cliente->setNombres(n);
    cliente->setPrimerApellido(p);
    cliente->setSegundoApellido(s);
    cliente->setTipoDocumento(t);
    cliente->setNumeroDocumento(nd);
    cliente->setFechaNacimiento(f);
    cliente->setSexo(sx);
    cliente->setDireccion(d);
    cliente->setTelefono(tf);
    cliente->setCelular(c);

    if(strcmp(this->windowTitle().toStdString().c_str(),"Nuevo Cliente")==0)
        if(cliente->agregar())
        {
            this->close();
            guardar();
        }
    if(strcmp(this->windowTitle().toStdString().c_str(),"Editar Cliente")==0)
        if(cliente->actualizar())
        {
            this->close();
            guardar();
        }
}
