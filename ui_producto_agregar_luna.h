#ifndef UI_PRODUCTO_AGREGAR_LUNA_H
#define UI_PRODUCTO_AGREGAR_LUNA_H

#include <QDialog>

namespace Ui {
    class ui_producto_agregar_luna;
}

class ui_producto_agregar_luna : public QDialog
{
    Q_OBJECT

public:
    explicit ui_producto_agregar_luna(QWidget *parent = 0);
    ~ui_producto_agregar_luna();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::ui_producto_agregar_luna *ui;
};

#endif // UI_PRODUCTO_AGREGAR_LUNA_H
