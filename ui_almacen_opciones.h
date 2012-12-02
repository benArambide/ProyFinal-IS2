#ifndef UI_ALMACEN_OPCIONES_H
#define UI_ALMACEN_OPCIONES_H

#include <QWidget>

namespace Ui {
class ui_almacen_opciones;
}

class ui_almacen_opciones : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_almacen_opciones(QWidget *parent = 0);
    ~ui_almacen_opciones();
    
private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_botonConfirmarAndamio_clicked();

    void on_botonConfirmarContenedor_clicked();

private:
    Ui::ui_almacen_opciones *ui;
};

#endif // UI_ALMACEN_OPCIONES_H
