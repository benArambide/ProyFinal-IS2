#ifndef COMPRAS_H
#define COMPRAS_H

#include <QWidget>

namespace Ui {
class compras;
}

class compras : public QWidget
{
    Q_OBJECT
    
public:
    explicit compras(QWidget *parent = 0);
    ~compras();
    
private:
    Ui::compras *ui;
};

#endif // COMPRAS_H
