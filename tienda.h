#ifndef TIENDA_H
#define TIENDA_H

class tienda
{
private:
    QString alias;
    QString direccion;
    QString permisoMunicipal;
public:
    tienda();
    QString getAlias();
    QString getDireccion();
    QString getPermisoMunicipal();

    void setAlias(QString);
    void setDireccion(QString);
    void setPermisoMunicipal(QString);
};

#endif // TIENDA_H
