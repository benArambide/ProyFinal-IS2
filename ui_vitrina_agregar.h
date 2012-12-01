#ifndef UI_VITRINA_AGREGAR_H
#define UI_VITRINA_AGREGAR_H

#include <QWidget>
#include "vitrina.h"


namespace Ui {
class ui_vitrina_agregar;
}

class ui_vitrina_agregar : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_vitrina_agregar(QWidget *parent = 0);
    ~ui_vitrina_agregar();
    void setVitrina(vitrina*);
    
private slots:
    void on_guardar_clicked();

    void on_cancelar_clicked();

private:
    Ui::ui_vitrina_agregar *ui;
};

#endif // UI_VITRINA_AGREGAR_H
