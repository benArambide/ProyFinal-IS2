#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStatusBar>
#include "ui_status_bar.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    UI_STATUS_BAR* STATUS_BAR_FORM;
    STATUS_BAR_FORM = new UI_STATUS_BAR;
    statusBar()->addWidget(STATUS_BAR_FORM);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionProducto_triggered()
{
    UI_PRODUCTO *PRODUCT_FORM;
    PRODUCT_FORM = new UI_PRODUCTO;



    setCentralWidget(PRODUCT_FORM);

    PRODUCT_FORM->showMaximized();
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
