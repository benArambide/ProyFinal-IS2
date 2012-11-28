#ifndef RANGOMEDIDA_H
#define RANGOMEDIDA_H
#include <objetopersistente.h>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file rangomedida.h
 * @class RangoMedida
 * @brief Es la clase que representa el RangoMedida de los las lunas de los lentes de la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripcion las
 * cuales estan almacenadas en la base de datos como la tabla "RangoMedida"
 */

class RangoMedida: public ObjetoPersistente
{
private:
    int id;
    float valorini;
    float valorfin;
    QString descripcion;
public:
    RangoMedida(int _id,float _valorIni,float valorFin, QString _descripcion);
    RangoMedida(float _valorIni,float valorFin, QString _descripcion);
    RangoMedida();
    RangoMedida(int _id);

    static QList<RangoMedida*> listar();

    int getId();
    QString getdescripcion();
    float getValorInicial();
    float getValorFinal();
    void setId(int _id);
    void setdescripcion(QString _descripcion);
    void setValorIncial(float _valorIncial);
    void setValorFinal(float _valorFinal);

    //bool existente(float _valorini,float _valorfin);

    bool agregar();
    bool actualizar();
    bool eliminar();
};
#endif // RANGOMEDIDA_H
