#ifndef UI_AGREGAR_VENTA_H
#define UI_AGREGAR_VENTA_H

#include <QDialog>

namespace Ui {
class ui_agregar_venta;
}

class ui_agregar_venta : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_agregar_venta(QWidget *parent = 0);
    ~ui_agregar_venta();
    
private:
    Ui::ui_agregar_venta *ui;
};

#endif // UI_AGREGAR_VENTA_H
