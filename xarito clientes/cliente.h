#ifndef CLIENTE_H
#define CLIENTE_H

#include "objetopersistente.h"
#include <QDate>

class Cliente : public ObjetoPersistente
{
private:
    QString id;
    QString nombres;
    QString primer_apellido;
    QString segundo_apellido;
    QString tipo_documento;
    QString numero_documento;
    QDate fecha_nacimiento;
    QString sexo;
    QString direccion;
    QString telefono;
    QString celular;
public:
    Cliente();
    Cliente(QString n,QString p,QString s);
    Cliente(QString n, QString p, QString s, QString t, QString nd, QDate f, QString sx, QString d, QString tf, QString c);
    bool buscar();
    bool agregar();
    bool actualizar();
    bool eliminar();

    void setNombres(QString n);
    void setPrimerApellido(QString n);
    void setSegundoApellido(QString n);
    void setTipoDocumento(QString n);
    void setNumeroDocumento(QString n);
    void setFechaNacimiento(QDate n);
    void setSexo(QString n);
    void setDireccion(QString n);
    void setTelefono(QString n);
    void setCelular(QString n);
    QString getNombres();
    QString getPrimerApellido();
    QString getSegundoApellido();
    int getTipoDocumento();
    QString getNumeroDocumento();
    QDate getFechaNacimiento();
    int getSexo();
    QString getDireccion();
    QString getTelefono();
    QString getCelular();
};

#endif // CLIENTE_H
