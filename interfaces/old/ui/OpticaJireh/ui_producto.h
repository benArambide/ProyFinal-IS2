#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H

#include <QWidget>
#include "ui_new_product.h"

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

private:
    Ui::UI_PRODUCTO *ui;
};

#endif // UI_PRODUCTO_H
