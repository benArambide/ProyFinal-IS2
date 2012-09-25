/********************************************************************************
** Form generated from reading UI file 'ui_new_product.ui'
**
** Created: Wed 19. Sep 21:48:19 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_PRODUCT_H
#define UI_UI_NEW_PRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_NEW_PRODUCT
{
public:

    void setupUi(QWidget *UI_NEW_PRODUCT)
    {
        if (UI_NEW_PRODUCT->objectName().isEmpty())
            UI_NEW_PRODUCT->setObjectName(QString::fromUtf8("UI_NEW_PRODUCT"));
        UI_NEW_PRODUCT->resize(421, 490);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/notification_done.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_NEW_PRODUCT->setWindowIcon(icon);

        retranslateUi(UI_NEW_PRODUCT);

        QMetaObject::connectSlotsByName(UI_NEW_PRODUCT);
    } // setupUi

    void retranslateUi(QWidget *UI_NEW_PRODUCT)
    {
        UI_NEW_PRODUCT->setWindowTitle(QApplication::translate("UI_NEW_PRODUCT", "Nuevo Producto", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_NEW_PRODUCT: public Ui_UI_NEW_PRODUCT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_PRODUCT_H
