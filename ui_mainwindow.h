/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 14 20:45:08 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionProducto;
    QAction *actionUsuario;
    QAction *actionCliente;
    QAction *actionEditar;
    QAction *actionNuevo;
    QAction *actionBuscar;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QToolBar *toolBar_modulos;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(295, 88);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/internet-news-reader.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(2, 2));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        actionProducto = new QAction(MainWindow);
        actionProducto->setObjectName(QString::fromUtf8("actionProducto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/inventory-maintenance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProducto->setIcon(icon1);
        actionUsuario = new QAction(MainWindow);
        actionUsuario->setObjectName(QString::fromUtf8("actionUsuario"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsuario->setIcon(icon2);
        actionCliente = new QAction(MainWindow);
        actionCliente->setObjectName(QString::fromUtf8("actionCliente"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCliente->setIcon(icon3);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1348112116_file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditar->setIcon(icon4);
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/1348112114_notification_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon5);
        actionBuscar = new QAction(MainWindow);
        actionBuscar->setObjectName(QString::fromUtf8("actionBuscar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MainWindow->setCentralWidget(centralWidget);
        toolBar_modulos = new QToolBar(MainWindow);
        toolBar_modulos->setObjectName(QString::fromUtf8("toolBar_modulos"));
        toolBar_modulos->setIconSize(QSize(40, 40));
        toolBar_modulos->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_modulos);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setCursor(QCursor(Qt::IBeamCursor));
        MainWindow->setStatusBar(statusBar);

        toolBar_modulos->addAction(actionProducto);
        toolBar_modulos->addAction(actionUsuario);
        toolBar_modulos->addAction(actionCliente);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\303\223pticaJireh", 0, QApplication::UnicodeUTF8));
        actionProducto->setText(QApplication::translate("MainWindow", "Producto", 0, QApplication::UnicodeUTF8));
        actionProducto->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionUsuario->setText(QApplication::translate("MainWindow", "Usuario", 0, QApplication::UnicodeUTF8));
        actionUsuario->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionCliente->setText(QApplication::translate("MainWindow", "Cliente", 0, QApplication::UnicodeUTF8));
        actionCliente->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEditar->setToolTip(QApplication::translate("MainWindow", "Editar registro actual", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEditar->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNuevo->setToolTip(QApplication::translate("MainWindow", "Nuevo Registro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNuevo->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionBuscar->setText(QApplication::translate("MainWindow", "Buscar", 0, QApplication::UnicodeUTF8));
        actionBuscar->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        toolBar_modulos->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
