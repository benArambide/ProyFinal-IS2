#include "ui_login.h"
#include "ui_ui_login.h"
#include "sesion.h"
#include <QMessageBox>

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
    bool ok = Sesion::Iniciar(ui->lineEdit_Usuario->text(),ui->lineEdit_Password->text());
    if(!ok)
    {
        QMessageBox::warning(0,pr("Inicio de Sesion","Usuaio o Contraseña incorrectos"),0,0);
        return;
    }
    this->close();
    MainWindow *MAIN_WINDOW;
    MAIN_WINDOW = new MainWindow;
    MAIN_WINDOW->showMaximized();
}

void UI_LOGIN::on_pushButton_Cancelar_clicked()
{
    this->close();
}
