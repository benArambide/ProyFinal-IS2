#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H

#include <QWidget>

namespace Ui {
class ui_producto;
}

class ui_producto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_producto(QWidget *parent = 0);
    ~ui_producto();
    
private:
    Ui::ui_producto *ui;
};

#endif // UI_PRODUCTO_H
