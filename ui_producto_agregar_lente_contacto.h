#ifndef UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
#define UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H

#include <QDialog>

namespace Ui {
    class ui_producto_agregar_lente_contacto;
}

class ui_producto_agregar_lente_contacto : public QDialog
{
    Q_OBJECT

public:
    explicit ui_producto_agregar_lente_contacto(QWidget *parent = 0);
    ~ui_producto_agregar_lente_contacto();

private:
    Ui::ui_producto_agregar_lente_contacto *ui;
};

#endif // UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
