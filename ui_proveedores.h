#ifndef UI_PROVEEDORES_H
#define UI_PROVEEDORES_H

#include <QWidget>

namespace Ui {
class ui_proveedores;
}

class ui_proveedores : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_proveedores(QWidget *parent = 0);
    ~ui_proveedores();
    
private:
    Ui::ui_proveedores *ui;
};

#endif // UI_PROVEEDORES_H
