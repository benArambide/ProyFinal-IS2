#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <montura.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TipoLuna ta;
    if(ta.existente("aaaaaa")==true)
        qDebug()<<ta.getNombre();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionProducto_triggered()
{
}

void MainWindow::on_actionUsuario_triggered()
{
    /*UI_USER *USER_FORM;
    USER_FORM = new UI_USER;
    setCentralWidget(USER_FORM);
    USER_FORM->showMaximized();*/
}

void MainWindow::on_actionCliente_triggered()
{
    /*UI_CLIENT *CLIENT_FORM;
    CLIENT_FORM = new UI_CLIENT;

    setCentralWidget(CLIENT_FORM);
    CLIENT_FORM->showMaximized();*/

}
