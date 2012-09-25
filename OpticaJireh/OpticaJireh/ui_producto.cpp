#include "ui_producto.h"
#include "ui_ui_producto.h"

UI_PRODUCTO::UI_PRODUCTO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_PRODUCTO)
{
    ui->setupUi(this);
}

UI_PRODUCTO::~UI_PRODUCTO()
{
    delete ui;
}

void UI_PRODUCTO::on_pushButton_NuevoProducto_clicked()
{
   UI_DATA_PRODUCT *NEW_PRODUCT_FORM;
   NEW_PRODUCT_FORM = new UI_DATA_PRODUCT;


   NEW_PRODUCT_FORM->setTitleWindow("Nuevo Producto");

   NEW_PRODUCT_FORM->show();
}

void UI_PRODUCTO::on_pushButton_ModificarProducto_clicked()
{
    UI_DATA_PRODUCT *EDIT_PRODUCT_FORM;
    EDIT_PRODUCT_FORM = new UI_DATA_PRODUCT;


    EDIT_PRODUCT_FORM->setTitleWindow("Editar Producto");

    EDIT_PRODUCT_FORM->show();
}
