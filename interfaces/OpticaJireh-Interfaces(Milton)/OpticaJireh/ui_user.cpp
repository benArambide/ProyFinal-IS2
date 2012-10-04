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

void UI_USER::on_pushButton_Nuevo_clicked()
{
    UI_DATA_USER *NEW_USER_FORM;
    NEW_USER_FORM = new UI_DATA_USER;

    NEW_USER_FORM->setTitleWindow("Nuevo Usuario");

    NEW_USER_FORM->show();
}

void UI_USER::on_pushButton_Editar_clicked()
{
    UI_DATA_USER *EDIT_USER_FORM;
    EDIT_USER_FORM = new UI_DATA_USER;

    EDIT_USER_FORM->setTitleWindow("Editar Usuario");

    EDIT_USER_FORM->show();
}
