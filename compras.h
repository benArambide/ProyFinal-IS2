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
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::compras *ui;
};

#endif // COMPRAS_H
