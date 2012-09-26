#include "ui_client.h"
#include "ui_ui_client.h"

UI_CLIENT::UI_CLIENT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_CLIENT)
{
    ui->setupUi(this);
}

UI_CLIENT::~UI_CLIENT()
{
    delete ui;
}

void UI_CLIENT::on_pushButton_Nuevo_clicked()
{
    UI_DATA_CLIENT *NEW_CLIENT_FORM;
    NEW_CLIENT_FORM = new UI_DATA_CLIENT;

    NEW_CLIENT_FORM->setTitleWindow("Nuevo Cliente");

    NEW_CLIENT_FORM->show();
}

void UI_CLIENT::on_pushButton_Editar_clicked()
{
    UI_DATA_CLIENT *EDIT_CLIENT_FORM;
    EDIT_CLIENT_FORM = new UI_DATA_CLIENT;

    EDIT_CLIENT_FORM->setTitleWindow("Editar Cliente");

    EDIT_CLIENT_FORM->show();
}
