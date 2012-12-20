/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_otro.ui'
**
** Created: Mon Dec 17 23:56:28 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_OTRO_H
#define UI_UI_PRODUCTO_AGREGAR_OTRO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ui_producto_agregar_otro
{
public:
    QLabel *label;
    QFrame *line;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_codigo;
    QLineEdit *lineEdit_stock;
    QLineEdit *lineEdit_p_compra;
    QLineEdit *lineEdit_p_venta;
    QLineEdit *lineEdit_p_descuento;
    QLineEdit *lineEdit_descripcion;
    QLineEdit *lineEdit_accesorios;
    QHBoxLayout *horizontalLayout;
    MyComboBox *comboBox_marca;
    QPushButton *pushButton_x_marca;
    QPushButton *boton_cancelar;
    QPushButton *boton_agregar;

    void setupUi(QDialog *ui_producto_agregar_otro)
    {
        if (ui_producto_agregar_otro->objectName().isEmpty())
            ui_producto_agregar_otro->setObjectName(QString::fromUtf8("ui_producto_agregar_otro"));
        ui_producto_agregar_otro->resize(663, 508);
        ui_producto_agregar_otro->setMinimumSize(QSize(663, 508));
        ui_producto_agregar_otro->setMaximumSize(QSize(663, 508));
        label = new QLabel(ui_producto_agregar_otro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 201, 20));
        line = new QFrame(ui_producto_agregar_otro);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 661, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(ui_producto_agregar_otro);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 641, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        lineEdit_codigo = new QLineEdit(gridLayoutWidget);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));

        gridLayout->addWidget(lineEdit_codigo, 0, 1, 1, 1);

        lineEdit_stock = new QLineEdit(gridLayoutWidget);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 1, 1, 1, 1);

        lineEdit_p_compra = new QLineEdit(gridLayoutWidget);
        lineEdit_p_compra->setObjectName(QString::fromUtf8("lineEdit_p_compra"));

        gridLayout->addWidget(lineEdit_p_compra, 2, 1, 1, 1);

        lineEdit_p_venta = new QLineEdit(gridLayoutWidget);
        lineEdit_p_venta->setObjectName(QString::fromUtf8("lineEdit_p_venta"));

        gridLayout->addWidget(lineEdit_p_venta, 3, 1, 1, 1);

        lineEdit_p_descuento = new QLineEdit(gridLayoutWidget);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));

        gridLayout->addWidget(lineEdit_p_descuento, 4, 1, 1, 1);

        lineEdit_descripcion = new QLineEdit(gridLayoutWidget);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));

        gridLayout->addWidget(lineEdit_descripcion, 5, 1, 1, 1);

        lineEdit_accesorios = new QLineEdit(gridLayoutWidget);
        lineEdit_accesorios->setObjectName(QString::fromUtf8("lineEdit_accesorios"));

        gridLayout->addWidget(lineEdit_accesorios, 6, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_marca = new MyComboBox(gridLayoutWidget);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));

        horizontalLayout->addWidget(comboBox_marca);

        pushButton_x_marca = new QPushButton(gridLayoutWidget);
        pushButton_x_marca->setObjectName(QString::fromUtf8("pushButton_x_marca"));
        pushButton_x_marca->setEnabled(true);
        pushButton_x_marca->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_x_marca->setIcon(icon);
        pushButton_x_marca->setFlat(true);

        horizontalLayout->addWidget(pushButton_x_marca);


        gridLayout->addLayout(horizontalLayout, 7, 1, 1, 1);

        boton_cancelar = new QPushButton(ui_producto_agregar_otro);
        boton_cancelar->setObjectName(QString::fromUtf8("boton_cancelar"));
        boton_cancelar->setGeometry(QRect(550, 460, 97, 27));
        boton_agregar = new QPushButton(ui_producto_agregar_otro);
        boton_agregar->setObjectName(QString::fromUtf8("boton_agregar"));
        boton_agregar->setGeometry(QRect(420, 460, 97, 27));

        retranslateUi(ui_producto_agregar_otro);

        QMetaObject::connectSlotsByName(ui_producto_agregar_otro);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_otro)
    {
        ui_producto_agregar_otro->setWindowTitle(QApplication::translate("ui_producto_agregar_otro", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_producto_agregar_otro", "Agregar Otro Tipo Producto", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_otro", "Codigo", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Descuento", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_producto_agregar_otro", "Accesorios", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_otro", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_producto_agregar_otro", "Stock", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_producto_agregar_otro", "Marca", 0, QApplication::UnicodeUTF8));
        pushButton_x_marca->setText(QString());
        boton_cancelar->setText(QApplication::translate("ui_producto_agregar_otro", "Cancelar", 0, QApplication::UnicodeUTF8));
        boton_agregar->setText(QApplication::translate("ui_producto_agregar_otro", "Agregar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_otro: public Ui_ui_producto_agregar_otro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_OTRO_H
