#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QWidget>

namespace Ui {
class UI_SEARCH;
}

class UI_SEARCH : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_SEARCH(QWidget *parent = 0);
    ~UI_SEARCH();
    
private:
    Ui::UI_SEARCH *ui;
};

#endif // UI_SEARCH_H
