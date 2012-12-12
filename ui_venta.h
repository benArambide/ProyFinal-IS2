#ifndef UI_VENTA_H
#define UI_VENTA_H

#include <QDialog>

namespace Ui {
class ui_venta;
}

class ui_venta : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_venta(QWidget *parent = 0);
    ~ui_venta();
    
private:
    Ui::ui_venta *ui;
};

#endif // UI_VENTA_H
