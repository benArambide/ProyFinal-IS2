#ifndef UI_DATA_PRODUCT_H
#define UI_DATA_PRODUCT_H

#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class UI_DATA_PRODUCT;
}

class UI_DATA_PRODUCT : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_DATA_PRODUCT(QWidget *parent = 0);
    ~UI_DATA_PRODUCT();

    //EXTRA METHODS - START

    void setTitleWindow(string title);

    //EXTRA METHODS - END
    
private slots:
    void on_pushButton_Cancelar_clicked();

private:
    Ui::UI_DATA_PRODUCT *ui;
};

#endif // UI_DATA_PRODUCT_H
