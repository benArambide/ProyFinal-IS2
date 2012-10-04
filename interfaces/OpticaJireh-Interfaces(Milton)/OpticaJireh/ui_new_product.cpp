#include "ui_new_product.h"
#include "ui_ui_new_product.h"

UI_NEW_PRODUCT::UI_NEW_PRODUCT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_NEW_PRODUCT)
{
    ui->setupUi(this);
}

UI_NEW_PRODUCT::~UI_NEW_PRODUCT()
{
    delete ui;
}

void UI_NEW_PRODUCT::on_pushButton_Cancelar_clicked()
{
    this->close();
}
