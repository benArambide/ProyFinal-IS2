#ifndef PERSONA_H
#define PERSONA_H

#include <objetopersistente.h>

class persona:public ObjetoPersistente
{
private:
    QString idPersona;
    QString idTipoDocIdent;
    QString nombres;
    QString primerApellido;
    QString segundoApellido;
    QString nroDoc;
    QString direccion;
    QString sexo;
    QString fechaNacimiento;
    QString telefono;
    QString celular;
public:
    persona();

    QString getIdPersona();
    QString getIdTipoDocIdent();
    QString getNombres();
    QString getPrimerApellido();
    QString getSegundoApellido();
    QString getNroDoc();
    QString getDireccion();
    QString getSexo();
    QString getFechaNacimiento();
    QString getTelefono();
    QString getCelular();

    void setIdPersona(QString);
    void setIdTipoDocIdent(QString);
    void setNombres(QString);
    void setPrimerApellido(QString);
    void setSegundoApellido(QString);
    void setNroDoc(QString);
    void setDireccion(QString);
    void setSexo(QString);
    void setFechaNacimiento(QString);
    void setTelefono(QString);
    void setCelular(QString);

    bool agregar();
    bool actualizar();
    bool eliminar();

    static QSqlQueryModel* mostrar();
    bool buscar();
};

#endif // PERSONA_H
