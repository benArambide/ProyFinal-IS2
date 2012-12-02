#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include <objetopersistente.h>
#include <QSqlQueryModel>

class contenedor
{
    private:
        QString idContenedor;
        QString idAndamio;
        QString nombre;

    public:
        contenedor(QString,QString,QString);
        void setIdContenedor(QString);
        void setIdAndamio(QString);
        void setNombre(QString);
        QString getIdContenedor();
        QString getIdAndamio();
        QString getNombre();

        static QSqlQueryModel* getContenedores(QString=QString());
        bool agregar();
        bool actualizar();
        bool eliminar();
};

#endif // CONTENEDOR_H
