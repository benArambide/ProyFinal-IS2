#include "ui_status_bar.h"
#include "ui_ui_status_bar.h"

UI_STATUS_BAR::UI_STATUS_BAR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_STATUS_BAR)
{
    ui->setupUi(this);
}

UI_STATUS_BAR::~UI_STATUS_BAR()
{
    delete ui;
}

void UI_STATUS_BAR::setMessage(string message)
{
    ui->label_Mensaje->setText(QString::fromStdString(message));
}

void UI_STATUS_BAR::on_pushButton_BusquedaAvanzada_clicked()
{
    //UI_SEARCH *ADVANCED_SEARCH_FORM;
    //ADVANCED_SEARCH_FORM = new UI_SEARCH;

    //ADVANCED_SEARCH_FORM->show();
}
