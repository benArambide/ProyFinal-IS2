#ifndef UI_NEW_PRODUCT_H
#define UI_NEW_PRODUCT_H

#include <QWidget>


namespace Ui {
class UI_NEW_PRODUCT;
}

class UI_NEW_PRODUCT : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_NEW_PRODUCT(QWidget *parent = 0);
    ~UI_NEW_PRODUCT();
    
private slots:
    void on_pushButton_Cancelar_clicked();

private:
    Ui::UI_NEW_PRODUCT *ui;
};

#endif // UI_NEW_PRODUCT_H
