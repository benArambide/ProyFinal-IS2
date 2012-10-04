#ifndef UI_USER_H
#define UI_USER_H

#include <QWidget>
#include "ui_data_user.h"

namespace Ui {
class UI_USER;
}

class UI_USER : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_USER(QWidget *parent = 0);
    ~UI_USER();
    
private slots:

    void on_pushButton_Nuevo_clicked();

    void on_pushButton_Editar_clicked();

private:
    Ui::UI_USER *ui;
};

#endif // UI_USER_H
