#ifndef UI_TIENDA_AGREGAR_H
#define UI_TIENDA_AGREGAR_H

#include <QDialog>
#include <tienda.h>

namespace Ui {
class ui_tienda_agregar;
}

class ui_tienda_agregar : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_tienda_agregar(QWidget *parent = 0);
    ~ui_tienda_agregar();
    
private slots:
    void on_pushButton_Aceptar_clicked();

    void on_pushButton_Cancelar_clicked();

private:
    Ui::ui_tienda_agregar *ui;
};

#endif // UI_TIENDA_AGREGAR_H
