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
    UI_STATUR_BAR* STATUS_BAR_FORM;


    MAIN_WINDOW = new MainWindow;
    STATUS_BAR_FORM = new UI_STATUR_BAR;


    MAIN_WINDOW->statusBar()->addWidget(STATUS_BAR_FORM);

//    STATUS_BAR_FORM->setMessage("USUARIO LOGEADO"); // status bar message


    MAIN_WINDOW->showMaximized();
}

void UI_LOGIN::on_pushButton_Cancelar_clicked()
{
    this->close();
}
