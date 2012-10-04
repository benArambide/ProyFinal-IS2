#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H

#include <QWidget>
#include "ui_data_product.h"
#include "ui_configurarproducto.h"

namespace Ui {
class UI_PRODUCTO;
}

class UI_PRODUCTO : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_PRODUCTO(QWidget *parent = 0);
    ~UI_PRODUCTO();
    
private slots:
    void on_pushButton_NuevoProducto_clicked();

    void on_pushButton_ModificarProducto_clicked();

    void on_Configurar_producto_clicked();

private:
    Ui::UI_PRODUCTO *ui;
    ui_configurarProducto* ventana_configurar_producto;
};

#endif // UI_PRODUCTO_H
