#ifndef UI_INGNOMOBSCARAC_H
#define UI_INGNOMOBSCARAC_H
#include "caracteristica_datos.h"
#include "marca_datos.h"
#include <QDebug>
#include <QDialog>

namespace Ui {
    class ui_ingNomObsCarac;
}

class ui_ingNomObsCarac : public QDialog
{
    Q_OBJECT

public:
    explicit ui_ingNomObsCarac(QWidget *parent = 0);
    ~ui_ingNomObsCarac();
    void resivir_Numero_Atributo(int numero);
    bool estado;

private slots:
    void on_Boton_IngNomObs_cancelar_clicked();

    void on_Boton_IngNomObs_guardar_clicked();

signals:

    void enviar_signal(int nu);

private:
    Ui::ui_ingNomObsCarac *ui;
    int atrib_actual;
};

#endif // UI_INGNOMOBSCARAC_H
