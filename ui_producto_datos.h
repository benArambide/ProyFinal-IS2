#ifndef UI_PRODUCTO_DATOS_H
#define UI_PRODUCTO_DATOS_H

#include <QWidget>

namespace Ui {
class ui_producto_datos;
}

class ui_producto_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_producto_datos(QWidget *parent = 0);
    ~ui_producto_datos();
    
private:
    Ui::ui_producto_datos *ui;
};

#endif // UI_PRODUCTO_DATOS_H
