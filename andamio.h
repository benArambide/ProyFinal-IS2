#ifndef ANDAMIO_H
#define ANDAMIO_H

#include <objetopersistente.h>
#include <QSqlQueryModel>
#include <QSqlRecord>

class andamio:public ObjetoPersistente
{
    private:
        QString idAndamio;
        QString idAlmacen;
        QString nombre;

    public:
        andamio(QString,QString,QString);
        void setIdAndamio(QString);
        void setIdAlmacen(QString);
        void setNombre(QString);
        QString getIdAndamio();
        QString getIdAlmacen();
        QString getNombre();

        static andamio* getAndamioByNombre(QString);
        static QSqlQueryModel* getAndamios(QString=QString());
        bool agregar();
        bool actualizar();
        bool eliminar();
};

#endif // ANDAMIO_H
