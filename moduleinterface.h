#ifndef MODULEINTERFACE_H
#define MODULEINTERFACE_H

#include <QWidget>
#include "ui_moduleinterface.h"

namespace Ui {
  class ModuleInterface;
}

class ModuleInterface : public QWidget
{
  Q_OBJECT
  
public:
  explicit ModuleInterface(QWidget *parent = 0,QWidget* details = 0);
  ~ModuleInterface();
  virtual void Agregar() = 0;
  virtual void Editar() = 0;
  virtual void Guardar() = 0;
  virtual void Buscar() = 0;
protected:
  Ui::ModuleInterface *ui;
  QWidget* detallesWidget;
  QWidget* busquedaWidget;
};

#endif // MODULEINTERFACE_H
