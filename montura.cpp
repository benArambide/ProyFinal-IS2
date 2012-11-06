#include "montura.h"

<<<<<<< HEAD
Montura::Montura(int _id ,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_id ,_codigo,_descripcion,_nombre,_marca)
=======
Montura::Montura(int _id, QString _codigo, QString _descripcion, QString _nombre, Marca _marca, int _stock, float _precio, QString _accesorios, float _p_descuento, bool _habilitado, Color _color, Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_id ,_codigo,_descripcion,_nombre,_marca,_stock,_precio, _accesorios,_p_descuento,_habilitado)
>>>>>>> clientes agregado al proyecto principal
{
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}

<<<<<<< HEAD
Montura::Montura(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_nombre,_marca)
=======
Montura::Montura(QString _codigo, QString _descripcion, QString _nombre, Marca _marca, int _stock, float _precio, QString _accesorios, float _p_descuento, bool _habilitado, Color _color, Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio, _accesorios,_p_descuento,_habilitado)
>>>>>>> clientes agregado al proyecto principal
{
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}


Montura::Montura()
{
}









/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

Color Montura::getColor()
{
    return color;
}

Forma Montura::getForma()
{
    return forma;
}

Calidad Montura::getCalidad()
{
    return calidad;
}

Tamanio Montura::getTamanio()
{
    return tamanio;
}

void Montura::setColor(Color _color)
{
    color=_color;
}

void Montura::setForma(Forma _forma)
{
    forma=_forma;
}

void Montura::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

void Montura::setTamanio(Tamanio _tamanio)
{
    tamanio=_tamanio;
}














bool Montura::agregar()
{

}


bool Montura::actualizar()
{
    return true;
}


bool Montura::eliminar()
{
    return true;
}
