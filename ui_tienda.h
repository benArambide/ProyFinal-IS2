#ifndef UI_TIENDA_H
#define UI_TIENDA_H

#include <QWidget>
#include <tienda.h>

namespace Ui {
class ui_tienda;
}

class ui_tienda : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_tienda(QWidget *parent = 0);
    ~ui_tienda();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::ui_tienda *ui;
};

#endif // UI_TIENDA_H
