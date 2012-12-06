#ifndef ALMACEN_H
#define ALMACEN_H

#include <objetopersistente.h>
#include <QSqlQueryModel>
#include <QSqlRecord>

class almacen:public ObjetoPersistente
{
    private:
        QString idAlmacen;
        QString idTienda;
        QString nombre;

    public:
        almacen(QString,QString,QString);
        void setIdAlmacen(QString);
        void setIdTienda(QString);
        void setNombre(QString);
        QString getIdAlmacen();
        QString getIdTienda();
        QString getNombre();

        static almacen* getAlmacenByNombre(QString);
        static QSqlQueryModel* getAlmacenes(QString=QString());
        bool agregar();
        bool actualizar();
        bool eliminar();
};

#endif // ALMACEN_H
