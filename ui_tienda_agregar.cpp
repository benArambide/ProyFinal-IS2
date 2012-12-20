#include "ui_tienda_agregar.h"
#include "ui_ui_tienda_agregar.h"

ui_tienda_agregar::ui_tienda_agregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_tienda_agregar)
{
    ui->setupUi(this);
}

ui_tienda_agregar::~ui_tienda_agregar()
{
    delete ui;
}

void ui_tienda_agregar::actualizar()
{
    ui->textAlias->clear();
    ui->textDireccion->clear();
    ui->textPermisoMunicipal->clear();
    ui->textTelefono->clear();

    QSqlQuery query;
    query.prepare("SELECT alias,direccion,telefono,permiso_municipal FROM tienda WHERE idtienda=?");
    query.bindValue(0,ui_tienda_actual->get_idTienda());
    query.exec();
    query.next();

    QString  alias= query.value(0).toString();
    QString  direccion= query.value(1).toString();
    QString  telefono= query.value(2).toString();
    QString  permiso= query.value(3).toString();

    ui->textAlias->insert(alias);
    ui->textDireccion->insert(direccion);
    ui->textPermisoMunicipal->insert(telefono);
    ui->textTelefono->insert(permiso);
}

bool ui_tienda_agregar::validar_tienda()
{
    QString  alias= ui->textAlias->text();
    QString  telefono= ui->textTelefono->text();
    tienda *nueva_tienda;
    QSqlQuery query;
    query.prepare("SELECT idtienda FROM tienda WHERE alias=?");
    query.bindValue(0,alias);
    query.exec();
    query.next();
    if(ui->textAlias->text()==""||ui->textPermisoMunicipal->text()==""||ui->textDireccion->text()==""||ui->textTelefono->text()=="")
    {
        QMessageBox msgBox;
        msgBox.setText("Complete todos los espacios");
        msgBox.exec();
        return false;
    }
    else if(query.isValid())
    {
        QMessageBox msgBox;
        msgBox.setText("La tienda ya existe");
        msgBox.exec();
        ui->textAlias->clear();
        return false;
    }
    else if(!nueva_tienda->validar(telefono,"numerico"))
    {
        QMessageBox msgBox;
        msgBox.setText("El telefono no es valido");
        msgBox.exec();
        ui->textTelefono->clear();
        return false;
    }
    else
        return true;
}


void ui_tienda_agregar::on_pushButton_Aceptar_clicked()
{
    QString  alias= ui->textAlias->text();
    QString  direccion= ui->textDireccion->text();
    QString  telefono= ui->textTelefono->text();
    QString  permiso= ui->textPermisoMunicipal->text();

    tienda *nueva_tienda;
    if(validar_tienda())
    {

    if(caso)//nueva tienda
        {
            nueva_tienda = new tienda(0,get_idEmpresa(),alias,direccion,telefono,permiso);
            nueva_tienda->agregar();
        }
        else//actualizar tienda
        {
            QString idTienda=ui_tienda_actual->get_idTienda();
            nueva_tienda=new tienda(idTienda,idEmpresa,alias,direccion,telefono,permiso);
            nueva_tienda->actualizar();
        }
        close();
        ui_tienda_actual->actualizar_combo_tienda(idEmpresa);

    }

}

void ui_tienda_agregar::on_pushButton_Cancelar_clicked()
{
    this->close();
}
