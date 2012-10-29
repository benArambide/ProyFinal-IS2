#include "ui_data_user.h"
#include "ui_ui_data_user.h"

UI_DATA_USER::UI_DATA_USER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_DATA_USER)
{
    ui->setupUi(this);
}

UI_DATA_USER::~UI_DATA_USER()
{
    delete ui;
}

void UI_DATA_USER::setTitleWindow(string title)
{
    this->setWindowTitle(QString::fromStdString(title));
}

void UI_DATA_USER::on_pushButton_Cancelar_clicked()
{
     this->close();
}
