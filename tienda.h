#ifndef TIENDA_H
#define TIENDA_H

#include <objetopersistente.h>
#include <QSqlQueryModel>

class tienda:public ObjetoPersistente
{
    private:
        QString idTienda;
        QString idEmpresa;
        QString alias;
        QString direccion;
        QString telefono;
        QString permisoMunicipal;

    public:
        tienda();
        QString getIdTienda();
        QString getIdEmpresa();
        QString getAlias();
        QString getDireccion();
        QString getTelefono();
        QString getPermisoMunicipal();

        void setIdTienda(QString);
        void setIdEmpresa(QString);
        void setAlias(QString);
        void setDireccion(QString);
        void setTelefono(QString);
        void setPermisoMunicipal(QString);

        static QSqlQueryModel* mostrar();
        bool agregar();
        bool actualizar();
        bool eliminar();
};

#endif // TIENDA_H
