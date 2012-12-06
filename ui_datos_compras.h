#ifndef UI_DATOS_COMPRAS_H
#define UI_DATOS_COMPRAS_H

#include <QWidget>

namespace Ui {
class ui_datos_compras;
}

class ui_datos_compras : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_datos_compras(QWidget *parent = 0);
    ~ui_datos_compras();
    
private:
    Ui::ui_datos_compras *ui;
};

#endif // UI_DATOS_COMPRAS_H
