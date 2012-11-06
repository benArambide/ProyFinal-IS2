#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QWidget>
#include "ui_data_client.h"

namespace Ui {
class UI_CLIENT;
}

class UI_CLIENT : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_CLIENT(QWidget *parent = 0);
    ~UI_CLIENT();

private slots:
    void listar();

    void on_pushButton_Nuevo_clicked();

    void on_pushButton_Editar_clicked();

private:
    Ui::UI_CLIENT *ui;
};

#endif // UI_CLIENT_H
