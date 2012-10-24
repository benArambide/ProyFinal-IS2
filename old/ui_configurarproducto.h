#ifndef UI_CONFIGURARPRODUCTO_H
#define UI_CONFIGURARPRODUCTO_H
#include <ui_ingnombrecarac.h>
#include <ui_ingnomobscarac.h>
#include <QIcon>
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

    void actualizar_Combox(int num_atrib);

    void on_Marca_1_x_clicked();

private:
    Ui::ui_configurarProducto *ui;
    ui_ingNombreCarac *ven_nombre;      //ventana de para ingresar nombre
    ui_ingNomObsCarac *ven_nombreObs;   //ventana que recibe el nombre y la observacion
    QIcon* icono_agregar;                //Es icono para agregar el icono de agregar al combo_box
};

#endif // UI_CONFIGURARPRODUCTO_H
