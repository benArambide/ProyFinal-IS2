#ifndef UI_AGREGAR_VENTA_H
#define UI_AGREGAR_VENTA_H

#include <QDialog>
#include "receta.h"
namespace Ui {
class ui_agregar_venta;
}

class ui_agregar_venta : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_agregar_venta(QWidget *parent = 0);
    ~ui_agregar_venta();
    
private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Cancelar_4_clicked();

    void on_pushButton_Cancelar_3_clicked();

    void on_pushButton_Cancelar_7_clicked();

    void on_pushButton_Aceptar_clicked();

private:
    Ui::ui_agregar_venta *ui;
};

#endif // UI_AGREGAR_VENTA_H
