#include "ui_login.h"
#include "ui_ui_login.h"

UI_LOGIN::UI_LOGIN(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_LOGIN)
{
    ui->setupUi(this);
}

UI_LOGIN::~UI_LOGIN()
{
    delete ui;
}

void UI_LOGIN::on_pushButton_Aceptar_clicked()
{

    this->close();

    MainWindow *MAIN_WINDOW;

    MAIN_WINDOW = new MainWindow;
    MAIN_WINDOW->showMaximized();
}

void UI_LOGIN::on_pushButton_Cancelar_clicked()
{
    this->close();
}
