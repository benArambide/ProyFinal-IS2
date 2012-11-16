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
        QString permisoMunicipal;

    public:
        tienda();
        QString getIdTienda();
        QString getIdEmpresa();
        QString getAlias();
        QString getDireccion();
        QString getPermisoMunicipal();

        void setIdTienda();
        void setIdEmpresa();
        void setAlias(QString);
        void setDireccion(QString);
        void setPermisoMunicipal(QString);

        static QSqlQueryModel* mostrar();
};

#endif // TIENDA_H
