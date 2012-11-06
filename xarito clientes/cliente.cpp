#include "cliente.h"
#include <QVariant>

Cliente::Cliente(){}
Cliente::Cliente(QString n, QString p, QString s)
    :nombres(n),primer_apellido(p),segundo_apellido(s)
{}

Cliente::Cliente(QString n, QString p, QString s, QString t, QString nd, QDate f, QString sx, QString d, QString tf, QString c)
    :nombres(n),primer_apellido(p),segundo_apellido(s),tipo_documento(t),numero_documento(nd),fecha_nacimiento(f),sexo(sx),direccion(d),telefono(tf),celular(c)
{}

bool Cliente::buscar()
{
    QSqlQuery p;
    p.exec("select * from persona where nombres='"+nombres+"' and primer_apellido='"+primer_apellido+"' and segundo_apellido='"+segundo_apellido+"';");
    if(p.size()!=0)
    {
        p.first();
        id=p.value(0).toString();
        tipo_documento=p.value(1).toString();
        numero_documento=p.value(5).toString();
        fecha_nacimiento=p.value(8).toDate();
        sexo=p.value(7).toString();
        direccion=p.value(6).toString();
        telefono=p.value(9).toString();
        celular=p.value(10).toString();
        return true;
    }
    return false;
}

bool Cliente::agregar()
{
    QSqlQuery q;
    QSqlQuery p;
    if(q.exec("insert into persona(idtipodoc_ident,nombres,primer_apellido,segundo_apellido,nro_doc,direccion,sexo,fecha_nacimiento,telefono,celular) values("+tipo_documento+",'"+nombres+"','"+primer_apellido+"','"+segundo_apellido+"',"+numero_documento+",'"+direccion+"',"+sexo+",'"+fecha_nacimiento.toString()+"','"+telefono+"','"+celular+"')"))
    {
        p.exec("select idpersona from persona where nombres='"+nombres+"' and primer_apellido='"+primer_apellido+"' and segundo_apellido='"+segundo_apellido+"' and nro_doc="+numero_documento);
        p.first();
        q.exec("insert into cliente(idcliente) values('"+p.value(0).toString()+"')");
        return true;
    }
    return false;
}


bool Cliente::actualizar()
{
    QSqlQuery p;
    return p.exec("update persona set nombres='"+nombres+"' , primer_apellido='"+primer_apellido+"' , segundo_apellido='"+segundo_apellido+"' , nro_doc="+numero_documento+" , idtipodoc_ident="+tipo_documento+" , direccion='"+direccion+"' , sexo="+sexo+" , fecha_nacimiento='"+fecha_nacimiento.toString()+"' , telefono='"+telefono+"' , celular='"+celular+"' where idpersona="+id);
}


bool Cliente::eliminar()
{
    return true;
}

void Cliente::setNombres(QString n){nombres=n;}
void Cliente::setPrimerApellido(QString n){primer_apellido=n;}
void Cliente::setSegundoApellido(QString n){segundo_apellido=n;}
void Cliente::setTipoDocumento(QString n){tipo_documento=n;}
void Cliente::setNumeroDocumento(QString n){numero_documento=n;}
void Cliente::setFechaNacimiento(QDate n){fecha_nacimiento=n;}
void Cliente::setSexo(QString n){sexo=n;}
void Cliente::setDireccion(QString n){direccion=n;}
void Cliente::setTelefono(QString n){telefono=n;}
void Cliente::setCelular(QString n){celular=n;}

QString Cliente::getNombres(){return nombres;}
QString Cliente::getPrimerApellido(){return primer_apellido;}
QString Cliente::getSegundoApellido(){return segundo_apellido;}
int Cliente::getTipoDocumento(){return tipo_documento.toInt();}
QString Cliente::getNumeroDocumento(){return numero_documento;}
QDate Cliente::getFechaNacimiento(){return fecha_nacimiento;}
int Cliente::getSexo(){return sexo.toInt();}
QString Cliente::getDireccion(){return direccion;}
QString Cliente::getTelefono(){return telefono;}
QString Cliente::getCelular(){return celular;}
