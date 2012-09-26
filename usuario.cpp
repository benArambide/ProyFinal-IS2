#include "usuario.h"

Usuario::Usuario(int id, int utype, QString name , QString flname , QString slname )
    :m_idUser(id),m_usertype(utype),m_name(name),m_firstlname(flname),m_seclname(slname)
{
}
