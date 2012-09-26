#include "ui_data_client.h"
#include "ui_ui_data_client.h"

UI_DATA_CLIENT::UI_DATA_CLIENT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_DATA_CLIENT)
{
    ui->setupUi(this);
}

UI_DATA_CLIENT::~UI_DATA_CLIENT()
{
    delete ui;
}

void UI_DATA_CLIENT::setTitleWindow(string title)
{
    this->setWindowTitle(QString::fromStdString(title));
}

void UI_DATA_CLIENT::on_pushButton_Cancelar_clicked()
{
    this->close();
}
