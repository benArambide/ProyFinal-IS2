#include "ui_data_product.h"
#include "ui_ui_data_product.h"

UI_DATA_PRODUCT::UI_DATA_PRODUCT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_DATA_PRODUCT)
{
    ui->setupUi(this);
}

UI_DATA_PRODUCT::~UI_DATA_PRODUCT()
{
    delete ui;
}

void UI_DATA_PRODUCT::setTitleWindow(string title)
{
    this->setWindowTitle(QString::fromStdString(title));
}

void UI_DATA_PRODUCT::on_pushButton_Cancelar_clicked()
{
    this->close();
}
