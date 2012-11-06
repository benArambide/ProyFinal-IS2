#ifndef UI_USUARIO_DATOS_H
#define UI_USUARIO_DATOS_H

#include <QWidget>

namespace Ui {
class ui_usuario_datos;
}

class ui_usuario_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_usuario_datos(QWidget *parent = 0);
    ~ui_usuario_datos();
    
private:
    Ui::ui_usuario_datos *ui;
};

#endif // UI_USUARIO_DATOS_H
