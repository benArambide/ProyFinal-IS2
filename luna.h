#ifndef LUNA_H
#define LUNA_H
#include <QSqlQueryModel>
#include <producto.h>
#include <QDebug>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file luna.h
 * @class luna
 * @brief Es la clase que representa la luna de los productos en la optica
 */

class Luna: public Producto
{

private:
    int idluna;
    RangoMedida rangomedida;
    IndiceRefraccion indicerefraccion;
    TipoLuna tipoluna;
    Calidad calidad;

public:
    Luna(int _id ,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad);
    Luna(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad);
    Luna(int _id);
    Luna();


    RangoMedida getRangoMedida();
    IndiceRefraccion getIndiceRefraccion();
    Calidad getCalidad();
    TipoLuna getTipoLuna();
    int getIdLuna();

    void setRangoMedida(RangoMedida _tipoluna);
    void setIndiceRefraccion(IndiceRefraccion _forma);
    void setCalidad(Calidad _calidad);
    void setTipoLuna(TipoLuna _tipoluna);

    QSqlQueryModel* entregarLunas();

    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};



#endif // LUNA_H
