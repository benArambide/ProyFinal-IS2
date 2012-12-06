#ifndef UI_DATOS_PROVEEDOR_H
#define UI_DATOS_PROVEEDOR_H

#include <QWidget>

namespace Ui {
class ui_datos_proveedor;
}

class ui_datos_proveedor : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_datos_proveedor(QWidget *parent = 0);
    ~ui_datos_proveedor();
    
private:
    Ui::ui_datos_proveedor *ui;
};

#endif // UI_DATOS_PROVEEDOR_H
