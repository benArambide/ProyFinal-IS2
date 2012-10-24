#ifndef UI_STATUS_BAR_H
#define UI_STATUS_BAR_H

#include <QWidget>
#include <string>
//#include "ui_search.h"

using namespace std;

namespace Ui {
class UI_STATUS_BAR;
}

class UI_STATUS_BAR : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_STATUS_BAR(QWidget *parent = 0);
    ~UI_STATUS_BAR();
    
    //EXTRA METHODS - START

    void setMessage(string message);

    //EXTRA METHODS - END

private slots:
    void on_pushButton_BusquedaAvanzada_clicked();

private:
    Ui::UI_STATUS_BAR *ui;
};

#endif // UI_STATUS_BAR_H
