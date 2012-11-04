#include "producto.h"
Producto::Producto(int _id, QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado)
{
    id=_id;
    codigo=_codigo;
    descripcion=_descripcion;
    nombre=_nombre;
    marca=_marca;
    stock=_stock;
    precio=_precio;
    accesorios=_accesorios;
    p_descuento=_p_descuento;
    habilitado=_habilitado;

}

Producto::Producto(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado)
{
    id=0;
    codigo=_codigo;
    descripcion=_descripcion;
    nombre=_nombre;
    marca=_marca;
    stock=_stock;
    precio=_precio;
    accesorios=_accesorios;
    p_descuento=_p_descuento;
    habilitado=_habilitado;
}



Producto::Producto()
{
}








/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

int Producto::getId()
{
    return id;
}

QString Producto::getCodigo()
{
    return codigo;
}

QString Producto::getDescripcion()
{
    return descripcion;
}

QString Producto::getNombre()
{
    return nombre;
}

Marca Producto::getMarca()
{
    return marca;
}


int Producto::getStock()
{
    return stock;
}

float Producto::getPrecio()
{
    return precio;
}

QString Producto::getAccesorios()
{
    return accesorios;
}

float Producto::getP_descuento()
{
    return p_descuento;
}

bool Producto::getHabilitado()
{
    return habilitado;
}


void Producto::setId(int _id)
{
    id=_id;
}

void Producto::setCodigo(QString _codigo)
{
    codigo=_codigo;
}

void Producto::setDescripcion(QString _descripcion)
{
    descripcion=_descripcion;
}

void Producto::setNombre(QString _nombre)
{
    nombre=_nombre;
}

void Producto::setMarca(Marca _marca)
{
    marca=_marca;
}


void Producto::setStock(int _stock)
{
    stock=_stock;
}

void Producto::setPrecio(float _precio)
{
    precio=_precio;
}

void Producto::setAccesorios(QString _accesorios)
{
    accesorios=_accesorios;
}

void Producto::SetP_descuento(float _p_descuento)
{
    p_descuento=_p_descuento;
}

void Producto::SetHabilitado(bool _habilitado)
{
    habilitado=_habilitado;
}


