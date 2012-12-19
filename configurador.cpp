#include "configurador.h"
#include <QMessageBox>
#include<vector>

using namespace std;
configurador::configurador(QString archivoBD)
{
    conexiondb = new ConexionBD;
    nombreArchivo =  archivoBD;
    leerConfiguracion();
}
configurador::~configurador()
{
    delete conexiondb;
}
bool configurador::leerConfiguracion()
{
    QString namefile = nombreArchivo;
    QFile file(namefile);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QString str_db;
    QTextStream in(&file);
    str_db = in.readAll();
    vector<QString> v_str;
    qDebug()<<"str_db: "<<str_db<<endl;
    int posInit=0;
    v_str.resize(5);
    int j=0;
    for(int i=0; i<str_db.length(); i++)
    {
        if(str_db[i] == '#')
        {
            v_str[j] = str_db.mid(posInit, i-posInit);
            posInit = i+1;
            j++;
        }
    }
    file.close();



    conexiondb->setHost(v_str[0]);
    conexiondb->setName(v_str[1]);
    conexiondb->setUser(v_str[2]);
    conexiondb->setPass(v_str[3]);
    conexiondb->setPort(v_str[4]);

   /* qDebug()<<"v_str[0]: "<<v_str[0]<<endl;
    qDebug()<<"v_str[1]: "<<v_str[1]<<endl;
    qDebug()<<"v_str[2]: "<<v_str[2]<<endl;
    qDebug()<<"v_str[3]: "<<v_str[3]<<endl;fgAlex
    qDebug()<<"v_str[4]: "<<v_str[4]<<endl;*/

}
bool configurador::actualizarConfiguracion()
{}
bool configurador::conectar_db()
{
    if(conexiondb->connect())
    {       
        return true;
    }
    else
    {       
        return false;
    }

}

