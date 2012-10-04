#include "ui_search.h"
#include "ui_ui_search.h"

UI_SEARCH::UI_SEARCH(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_SEARCH)
{
    ui->setupUi(this);
}

UI_SEARCH::~UI_SEARCH()
{
    delete ui;
}
