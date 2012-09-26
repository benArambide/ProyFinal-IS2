#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario(){}
    Usuario(int id, int utype, QString name , QString flname , QString slname );
    int get_id(){return m_idUser;}
    QString get_name(){return m_name;}
    QString get_flname(){return m_firstlname;}
    QString get_slname(){return m_seclname;}
    int get_usertype(){return m_usertype;}
private:
    int m_idUser;
    QString m_name;
    QString m_firstlname;
    QString m_seclname;
    int m_usertype;
};

#endif // USUARIO_H
