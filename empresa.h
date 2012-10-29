#ifndef EMPRESA_H
#define EMPRESA_H


class empresa
{
private:
    int id;
    int ruc;
    QString razonSocial;
    QString domilicioFiscal;
    QString telefono;
public:
    empresa();
    int getRuc();
    QString getrazonSocial();
    QString getDomilicioFiscal();
    QString getTelefono();

    void setRuc(int);
    void setRazonSocial(QString);
    void setDomicilioFiscal(QString);
    void setTelefono(QString);

};

#endif // EMPRESA_H
