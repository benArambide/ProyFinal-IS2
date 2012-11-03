#ifndef MONTURA_H
#define MONTURA_H
#include <producto.h>


class Montura: public Producto
{

private:
    Color color;
    Forma forma;
    Calidad calidad;
    Tamanio tamanio;

public:
    Montura(int _id ,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura();

    Color getColor();
    Forma getForma();
    Calidad getCalidad();
    Tamanio getTamanio();

    void setColor(Color _color);
    void setForma(Forma _forma);
    void setCalidad(Calidad _calidad);
    void setTamanio(Tamanio _tamanio);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // MONTURA_H
