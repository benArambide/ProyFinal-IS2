#ifndef COMPRAS_H
#define COMPRAS_H

#include <QWidget>
#include<QTableWidgetItem>
#include<map>
using namespace std;

namespace Ui {
class compras;
}

class compras : public QWidget
{
    Q_OBJECT
public:
    void setCant(int cant){currentCant = cant;}
    void addItemProductos(int cant, int row);
public:
    explicit compras(QWidget *parent = 0);
    ~compras();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_buscar_proveedor_clicked();

    void on_pushButton_buscar_producto_clicked();

    void on_tableWidget_proveedores_itemClicked(QTableWidgetItem *item);

    void on_tableWidget_productos_itemClicked(QTableWidgetItem *item);

    void on_pushButton_guardar_clicked();

private:
    Ui::compras *ui;
    map<QString,QString> Proveedores;
    map<QString,QString> Productos;
    int contador;
    int currentCant;
    int compra_total;
};

#endif // COMPRAS_H
