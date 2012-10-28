#ifndef MARCA_H
#define MARCA_H
#include <objetopersistente.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file marca.h
 * @class Marca
 * @brief Es la clase que representa la La Marca de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "Marca"
 */

class Marca: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
    QString descripsion;
public:
    Marca(int _id,QString _nombre, QString _descripsion );
    Marca(QString _nombre, QString _descripsion );
    Marca();
    static QList<Marca*> listar();

    int getId();
    QString getNombre();
    QString getDescripsion();
    void setId(int _id);
    void setNombre(QString _nombre);
    void setDescripsion(QString _descripsion);


    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // MARCA_H
