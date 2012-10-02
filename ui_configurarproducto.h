#ifndef UI_CONFIGURARPRODUCTO_H
#define UI_CONFIGURARPRODUCTO_H
#include <ui_ingnombrecarac.h>

#include <QDialog>

namespace Ui {
    class ui_configurarProducto;
}

class ui_configurarProducto : public QDialog
{
    Q_OBJECT

public:
    explicit ui_configurarProducto(QWidget *parent = 0);
    ~ui_configurarProducto();

private slots:

    void on_Boton_ConfPro_cancelar_clicked();

    void on_ComBo_Marca_activated(int index);

private:
    Ui::ui_configurarProducto *ui;
    ui_ingNombreCarac *ven_nombre;//ventana de para ingresar nombre
};

#endif // UI_CONFIGURARPRODUCTO_H
