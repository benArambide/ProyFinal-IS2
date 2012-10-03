#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ui_configurarproducto.h>
#include <QMainWindow>

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ui_configurarProducto* ventana_conf;
};

#endif // MAINWINDOW_H
