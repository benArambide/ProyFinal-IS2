#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>
#include <marca.h>
#include <objetopersistente.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file producto.h
 * @class Producto
 * @brief Es la clase que generaliza los productos de la óptica
 * Incluye sus propias caracteristicas q son id, codigo, descripsion, nombre y marca
 * tambien cuenta con las funciones del objeto persistente.
 */

class Producto: public ObjetoPersistente
{

private:
    int id;
    QString codigo;
    QString descripsion;
    QString nombre;
    Marca marca;

public:
    Producto();
    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // PRODUCTO_H
