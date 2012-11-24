#ifndef UI_CLIENTE_DATOS_H
#define UI_CLIENTE_DATOS_H

#include <QWidget>
#include <persona.h>
#include <cliente.h>
#include <tipodoc_ident.h>

namespace Ui {
class ui_cliente_datos;
}

class ui_cliente_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_cliente_datos(QWidget *parent = 0);
    ~ui_cliente_datos();
    
    void setCliente(persona*);

signals:
    void guarde();
private slots:
    void on_pushButton_Aceptar_clicked();
    void on_pushButton_Cancelar_clicked();

private:
    Ui::ui_cliente_datos *ui;

    persona cliente_act;
};

#endif // UI_CLIENTE_DATOS_H
