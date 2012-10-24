/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Oct 5 08:15:50 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
    QWidget *centralWidget;
    QToolBar *toolBar_Optica;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(295, 66);
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        toolBar_Optica = new QToolBar(MainWindow);
        toolBar_Optica->setObjectName(QString::fromUtf8("toolBar_Optica"));
        toolBar_Optica->setIconSize(QSize(40, 40));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_Optica);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setCursor(QCursor(Qt::IBeamCursor));
        MainWindow->setStatusBar(statusBar);

        toolBar_Optica->addAction(actionProducto);
        toolBar_Optica->addAction(actionUsuario);
        toolBar_Optica->addAction(actionCliente);

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
        toolBar_Optica->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
