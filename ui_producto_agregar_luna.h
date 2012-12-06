#ifndef UI_PRODUCTO_AGREGAR_LUNA_H
#define UI_PRODUCTO_AGREGAR_LUNA_H
#include <QMessageBox>
#include <luna.h>

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

    void on_pushButton_xmarca_clicked();

    void on_pushButton_xindice_clicked();

    void on_pushButton_xtipo_clicked();

    void on_pushButton_xcalidad_clicked();

private:
    Ui::ui_producto_agregar_luna *ui;
    QMessageBox* msgBox;
};

#endif // UI_PRODUCTO_AGREGAR_LUNA_H
