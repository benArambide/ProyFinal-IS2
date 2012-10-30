#ifndef UI_CLIENTE_DATOS_H
#define UI_CLIENTE_DATOS_H

#include <QWidget>

namespace Ui {
class ui_cliente_datos;
}

class ui_cliente_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_cliente_datos(QWidget *parent = 0);
    ~ui_cliente_datos();
    
private:
    Ui::ui_cliente_datos *ui;
};

#endif // UI_CLIENTE_DATOS_H
