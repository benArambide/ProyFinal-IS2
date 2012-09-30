#include "ui_cambiarpassdialog.h"
#include "ui_ui_cambiarpassdialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>

ui_cambiarPassDialog::ui_cambiarPassDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_cambiarPassDialog)
{
    ui->setupUi(this);
}

ui_cambiarPassDialog::~ui_cambiarPassDialog()
{
    delete ui;
}

void ui_cambiarPassDialog::on_buttonBox_accepted()
{
    QString pass1 = ui->lineEdit_nuevoPass->text();
    QString pass2 = ui->lineEdit_confPass->text();
    if(pass1!=pass2)
    {
        QMessageBox::warning(0,"Cambio Contraseña","Las contraseñas no coinciden",0,0);
        emit rejected();
        return;
    }
    QString a;
    QSqlQuery q;
    q.exec("call set_pass("+a.setNum(id_usr)+",'"+pass1+"')");

}

void ui_cambiarPassDialog::on_buttonBox_rejected()
{

}

void ui_cambiarPassDialog::on_lineEdit_nuevoPass_textChanged(const QString &arg1)
{
    qDebug()<<arg1;
}
