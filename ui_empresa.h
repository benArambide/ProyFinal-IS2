#ifndef UI_EMPRESA_H
#define UI_EMPRESA_H

#include <QWidget>
#include <empresa.h>

namespace Ui {
class ui_empresa;
}

class ui_empresa : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_empresa(QWidget *parent = 0);
    ~ui_empresa();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::ui_empresa *ui;
};

#endif // UI_EMPRESA_H
