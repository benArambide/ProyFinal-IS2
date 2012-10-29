#ifndef UI_DATA_USER_H
#define UI_DATA_USER_H

#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class UI_DATA_USER;
}

class UI_DATA_USER : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_DATA_USER(QWidget *parent = 0);
    ~UI_DATA_USER();

    //EXTRA METHODS - START

    void setTitleWindow(string title);

    //EXTRA METHODS - END
    
private slots:

    void on_pushButton_Cancelar_clicked();

private:
    Ui::UI_DATA_USER *ui;
};

#endif // UI_DATA_USER_H
