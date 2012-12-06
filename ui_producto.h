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

    void on_pushButton_clicked();

    void on_pushButton_aditar_luna_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_eliminar_luna_clicked();

private:
    Ui::ui_producto *ui;

    QVector<QSqlQueryModel* (*) (QString)> vec_funciones;

    int posicion;

    QSqlQueryModel* model_actual;//puntero al model del de la consulta actual
};

#endif // UI_PRODUCTO_H
