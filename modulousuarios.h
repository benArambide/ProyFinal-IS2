#ifndef MODULOUSUARIOS_H
#define MODULOUSUARIOS_H

#include "moduleinterface.h"

class ModuloUsuarios : public ModuleInterface
{
  Q_OBJECT
public:
  explicit ModuloUsuarios(QWidget *parent = 0);
  void Agregar(){}
  void Editar(){}
  void Guardar(){}
  void Buscar();
signals:
  
public slots:
};

#endif // MODULOUSUARIOS_H
