#ifndef UI_BUSCARUSUARIO_H
#define UI_BUSCARUSUARIO_H

#include <QWidget>

namespace Ui {
  class ui_BuscarUsuario;
}

class ui_BuscarUsuario : public QWidget
{
  Q_OBJECT
  
public:
  explicit ui_BuscarUsuario(QWidget *parent = 0);
  ~ui_BuscarUsuario();
  
private:
  Ui::ui_BuscarUsuario *ui;
};

#endif // UI_BUSCARUSUARIO_H
