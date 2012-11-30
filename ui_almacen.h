#ifndef UI_ALMACEN_H
#define UI_ALMACEN_H

#include <QWidget>

namespace Ui {
class ui_almacen;
}

class ui_almacen : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_almacen(QWidget *parent = 0);
    ~ui_almacen();
    
private slots:
    void on_pushButton_6_clicked();

private:
    Ui::ui_almacen *ui;
};

#endif // UI_ALMACEN_H
