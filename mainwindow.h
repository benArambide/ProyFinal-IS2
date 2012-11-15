#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <calidad.h>
#include <QDebug>
#include <QMainWindow>
#include <color.h>
#include <objetopersistente.h>

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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
