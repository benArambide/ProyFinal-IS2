#include "ui_login.h"
#include "ui_ui_login.h"
#include "sesion.h"
#include <QMessageBox>
#include <QDesktopWidget>

UI_LOGIN::UI_LOGIN(QWidget *parent):QWidget(parent),ui(new Ui::UI_LOGIN)
{
    ui->setupUi(this);

    //Auto Centrado de Ventana
    //ToDO: Crear una Clase Ventana Padre que haga esto automático
    QRect frect=this->frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    this->move(frect.topLeft());
    this->show();

}

UI_LOGIN::~UI_LOGIN()
{
    delete ui;
}

void UI_LOGIN::on_pushButton_Aceptar_clicked()
{
    int status = Sesion::Iniciar(ui->lineEdit_Usuario->text(),ui->lineEdit_Password->text());
    switch(status)
    {
        case Sesion::PassUsrWrong :
        {
            QMessageBox::warning(0,"Inicio de Sesion",tr("Usuario o contraseña INCORRECTOS"),0,0);
            return;
        }
    case Sesion::UsuarioDeshabilitado :
    {
        QMessageBox::warning(0,"Inicio de Sesion",tr("El usuario esta DESHABILITADO"),0,0);
        return;
    }
    //case Sesion::
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
