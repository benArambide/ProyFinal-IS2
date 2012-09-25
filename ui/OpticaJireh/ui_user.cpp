#include "ui_user.h"
#include "ui_ui_user.h"

UI_USER::UI_USER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_USER)
{
    ui->setupUi(this);
}

UI_USER::~UI_USER()
{
    delete ui;
}

void UI_USER::on_pushButton_clicked()
{
    UI_NEW_USER *NEW_USER_FORM;
    NEW_USER_FORM = new UI_NEW_USER;
    NEW_USER_FORM->show();
}
