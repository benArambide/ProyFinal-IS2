#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QWidget>

namespace Ui {
class ui_cliente;
}

class ui_cliente : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_cliente(QWidget *parent = 0);
    ~ui_cliente();
    
private slots:
    void listar();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::ui_cliente *ui;
};

#endif // UI_CLIENTE_H
