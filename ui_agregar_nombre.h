#ifndef UI_AGREGAR_NOMBRE_H
#define UI_AGREGAR_NOMBRE_H

#include <QDialog>

namespace Ui {
    class ui_agregar_nombre;
}

class ui_agregar_nombre : public QDialog
{
    Q_OBJECT

public:
    explicit ui_agregar_nombre(QWidget *parent = 0);
    ~ui_agregar_nombre();

private slots:
    void on_pushButton_cancelar_clicked();

private:
    Ui::ui_agregar_nombre *ui;
};

#endif // UI_AGREGAR_NOMBRE_H
