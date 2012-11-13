#include "luna.h"


Luna::Luna(int _idluna,QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{
    idluna=_idluna;
    rangomedida =_rangomedida;
    indicerefraccion =_indicerefraccion;
    tipoluna =_tipoluna;
    calidad =_calidad;
}


Luna::Luna(QString _codigo,QString _descripcion, QString _nombre, Marca _marca,int _stock,float _precio,QString _accesorios,float _p_descuento,bool _habilitado,RangoMedida _rangomedida,IndiceRefraccion _indicerefraccion, TipoLuna _tipoluna,Calidad _calidad):Producto(_codigo,_descripcion,_nombre,_marca,_stock,_precio,_accesorios,_p_descuento,_habilitado)
{
    idluna=0;
    rangomedida =_rangomedida;
    indicerefraccion =_indicerefraccion;
    tipoluna =_tipoluna;
    calidad =_calidad;
}



Luna::Luna()
{

}


/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el rango Medida de la Luna
 * @return RangoMedida RangoMedida
 */
RangoMedida Luna::getRangoMedida()
{
    return rangomedida;
}


/**
 * @brief Entrega el Indice de Refracccion de la Luna
 * @return IndiceRefraccion indicerefraccion
 */
IndiceRefraccion Luna::getIndiceRefraccion()
{
    return indicerefraccion;
}

/**
 * @brief Entrega el calidad de la Luna
 * @return Calidad calidad
 */
Calidad Luna::getCalidad()
{
    return calidad;
}

/**
 * @brief Entrega el tipo de la Luna
 * @return TipoLuna tipoluna
 */
TipoLuna Luna::getTipoLuna()
{
    return tipoluna;
}

/**
 * @brief Permite cambiar el Rango de Medida de la Luna
 * @param RangoMedida _rangomedida que representa el nuevo nombre
 */
void Luna::setRangoMedida(RangoMedida _rangomedida)
{
    rangomedida=_rangomedida;
}

/**
 * @brief Permite cambiar el Indice de Refraccion de la Luna
 * @param IndiceRefraccion _indicerefraccion que representa el nuevo nombre
 */
void Luna::setIndiceRefraccion(IndiceRefraccion _indicerefraccion)
{
    indicerefraccion=_indicerefraccion;
}

/**
 * @brief Permite cambiar el Calidad de la Luna
 * @param Caidad _calidad que representa el nuevo nombre
 */
void Luna::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

/**
 * @brief Permite cambiar el Tipo de Luna de la Luna
 * @param TipoLuna _tipoluna que representa el nuevo nombre
 */
void Luna::setTipoLuna(TipoLuna _tipoluna)
{
    tipoluna=_tipoluna;
}



bool Luna::agregar()
{
    return true;
}
bool Luna::actualizar()
{
    return true;
}

bool Luna::eliminar()
{
    return true;
}
