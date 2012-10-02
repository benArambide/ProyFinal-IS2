#ifndef UI_INGNOMBRECARAC_H
#define UI_INGNOMBRECARAC_H

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

private slots:
    void on_Boton_IngNom_cancelar_clicked();

private:
    Ui::ui_ingNombreCarac *ui;
};

#endif // UI_INGNOMBRECARAC_H
