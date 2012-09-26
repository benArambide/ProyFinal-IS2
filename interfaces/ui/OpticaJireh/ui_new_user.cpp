#include "ui_new_user.h"
#include "ui_ui_new_user.h"

UI_NEW_USER::UI_NEW_USER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_NEW_USER)
{
    ui->setupUi(this);
}

UI_NEW_USER::~UI_NEW_USER()
{
    delete ui;
}

void UI_NEW_USER::on_pushButton_2_clicked()
{
    this->close();
}
