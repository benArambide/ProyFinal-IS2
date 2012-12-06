#ifndef UI_VITRINA_H
#define UI_VITRINA_H

#include <QWidget>
#include "ui_vitrina_agregar.h"


namespace Ui {
class ui_vitrina;
}

class ui_vitrina : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_vitrina(QWidget *parent = 0);
    ~ui_vitrina();
    
private slots:
    void on_agregar_clicked();

    void on_editar_clicked();

private:
    Ui::ui_vitrina *ui;
};

#endif // UI_VITRINA_H
