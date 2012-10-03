#ifndef UI_INGNOMBRECARAC_H
#define UI_INGNOMBRECARAC_H
#include "caracteristica_datos.h"
#include "marca_datos.h"
#include <QDialog>

namespace Ui {
    class ui_ingNombreCarac;
}

class ui_ingNombreCarac : public QDialog
{
    Q_OBJECT

public:
    explicit ui_ingNombreCarac(QWidget *parent = 0);
    ~ui_ingNombreCarac();

    void resivir_Numero_Atributo(int num_atributo);

private slots:
    void on_Boton_IngNom_cancelar_clicked();

    void on_Boton_IngNom_guardar_clicked();

private:
    Ui::ui_ingNombreCarac *ui;
    int atrib_actual;
};

#endif // UI_INGNOMBRECARAC_H
