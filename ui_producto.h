#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H
#include <QSqlQueryModel>
#include <luna.h>
#include <montura.h>
#include <QTreeWidgetItem>
#include <QWidget>
#include <ui_producto_agregar_luna.h>
#include <ui_producto_agregar_montura.h>

namespace Ui {
class ui_producto;
}

class ui_producto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_producto(QWidget *parent = 0);
    ~ui_producto();
    
private slots:
    void on_pushButton_5_clicked();

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_pushButton_clicked();

private:
    Ui::ui_producto *ui;

    QVector<QSqlQueryModel* (*) (QString)> vec_funciones;

    int posicion;
};

#endif // UI_PRODUCTO_H
