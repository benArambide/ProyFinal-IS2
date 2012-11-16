#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <calidad.h>
#include <QDebug>
#include <QMainWindow>
#include <color.h>
#include <objetopersistente.h>
#include <ui_producto.h>
#include <ui_tienda.h>

#include "moduleinterface.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT   
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_actionProducto_triggered();
    void on_actionUsuario_triggered();
    void on_actionCliente_triggered();
    void on_actionBuscar_triggered();


    void on_actionTiendas_triggered();

private:
    Ui::MainWindow *ui;
    ModuleInterface* ActiveModule;
};

#endif // MAINWINDOW_H
