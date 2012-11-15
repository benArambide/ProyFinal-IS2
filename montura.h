#ifndef MONTURA_H
#define MONTURA_H
#include <producto.h>
#include <QSqlQueryModel>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file montura.h
 * @class Montura
 * @brief Es la clase que representa la Montura de los productos en la optica
 */

class Montura: public Producto
{

private:
    int idmontura;
    Color color;
    Forma forma;
    Calidad calidad;
    Tamanio tamanio;

public:
    Montura(int _id ,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura();

    Color getColor();
    Forma getForma();
    Calidad getCalidad();
    Tamanio getTamanio();

    void setColor(Color _color);
    void setForma(Forma _forma);
    void setCalidad(Calidad _calidad);
    void setTamanio(Tamanio _tamanio);

    QSqlQueryModel* entregarMonturas();
    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // MONTURA_H
