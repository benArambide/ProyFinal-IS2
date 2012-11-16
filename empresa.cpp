#include "empresa.h"

empresa::empresa()
{
}

int empresa::getRuc()
{
    return ruc;
}

QString empresa::getrazonSocial()
{
    return razonSocial;
}

QString empresa::getDomilicioFiscal()
{
    return domilicioFiscal;
}

QString empresa::getTelefono()
{
    return telefono;
}

void empresa::setRuc(int tmp)
{
    ruc=tmp;
}

void empresa::setRazonSocial(QString tmp)
{
    razonSocial=tmp;
}

void empresa::setDomicilioFiscal(QString tmp)
{
    domilicioFiscal=tmp;
}


void empresa::setTelefono(QString tmp)
{
    telefono=tmp;
}
