#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>
#include <objetopersistente.h>
#include <color.h>
#include <tamanio.h>
#include <calidad.h>
#include <forma.h>
#include <indicerefraccion.h>
#include <marca.h>
#include <rangomedida.h>
#include <tipoluna.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file producto.h
 * @class Producto
 * @brief Es la clase que generaliza los productos de la óptica
 * Incluye sus propias caracteristicas q son id, codigo, descripcion, nombre y marca
 * tambien cuenta con las funciones del objeto persistente.
 */

class Producto: public ObjetoPersistente
{

protected:
    int id;
    QString codigo;
    QString descripcion;
    QString nombre;
    Marca marca;
    int stock;
    float precio;
    QString accesorios;
    float p_descuento;
    bool habilitado;

public:
    Producto(int _id, QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado);
    Producto(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado);
    Producto();

    int getId();
    QString getCodigo();
    QString getDescripcion();
    QString getNombre();
    Marca getMarca();
    int getStock();
    float getPrecio();
    QString getAccesorios();
    float getP_descuento();
    bool getHabilitado();


    void setId(int _id);
    void setCodigo(QString _codigo);
    void setDescripcion(QString _descripcion);
    void setNombre(QString _nombre);
    void setMarca(Marca _marca);
    void setStock(int _stock);
    void setPrecio(float _precio);
    void setAccesorios(QString _accesorios);
    void SetP_descuento(float _p_descuento);
    void SetHabilitado(bool _habilitado);

};

#endif // PRODUCTO_H
