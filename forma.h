#ifndef FORMA_H
#define FORMA_H
#include <objetopersistente.h>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file forma.h
 * @class Forma
 * @brief Es la clase que representa la Forma de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "Forma"
 */

class Forma: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    Forma(int _id,QString _nombre);
    Forma();
    static QList<Forma*> listar();

    int getId();
    QString getNombre();
    void setId(int _id);
    void setNombre(QString _nombre);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // FORMA_H
