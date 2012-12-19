/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_montura.ui'
**
** Created: Tue 18. Dec 22:47:57 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_MONTURA_H
#define UI_UI_PRODUCTO_AGREGAR_MONTURA_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ui_producto_agregar_montura
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_accesorios;
    QLabel *label_7;
    QLineEdit *lineEdit_p_descuento;
    QLabel *label_4;
    QLineEdit *lineEdit_stock;
    QLabel *label_5;
    QLineEdit *lineEdit_precio;
    QLabel *label_2;
    QLineEdit *lineEdit_codigo;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_accesorios_2;
    QLabel *label_12;
    QLineEdit *lineEdit_accesorios_3;
    QLabel *label_13;
    QLineEdit *lineEdit_accesorios_4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    MyComboBox *myComboBox_marca;
    QPushButton *pushButton_xmarca;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    MyComboBox *comboBox_tamanio;
    QPushButton *pushButton_xtamanio;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_9;
    MyComboBox *comboBox_forma;
    QPushButton *pushButton_xforma;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_10;
    MyComboBox *comboBox_calidad;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_14;
    MyComboBox *comboBox_color;
    QPushButton *pushButton_8;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_agregar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *verticalSpacer;
    QFrame *line;

    void setupUi(QDialog *ui_producto_agregar_montura)
    {
        if (ui_producto_agregar_montura->objectName().isEmpty())
            ui_producto_agregar_montura->setObjectName(QString::fromUtf8("ui_producto_agregar_montura"));
        ui_producto_agregar_montura->resize(663, 508);
        ui_producto_agregar_montura->setMinimumSize(QSize(663, 508));
        ui_producto_agregar_montura->setMaximumSize(QSize(663, 508));
        label = new QLabel(ui_producto_agregar_montura);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 121, 41));
        gridLayoutWidget_2 = new QWidget(ui_producto_agregar_montura);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 50, 631, 405));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        lineEdit_accesorios = new QLineEdit(gridLayoutWidget_2);
        lineEdit_accesorios->setObjectName(QString::fromUtf8("lineEdit_accesorios"));

        gridLayout->addWidget(lineEdit_accesorios, 7, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        lineEdit_p_descuento = new QLineEdit(gridLayoutWidget_2);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));
        lineEdit_p_descuento->setMinimumSize(QSize(170, 0));

        gridLayout->addWidget(lineEdit_p_descuento, 5, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_stock = new QLineEdit(gridLayoutWidget_2);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_precio = new QLineEdit(gridLayoutWidget_2);
        lineEdit_precio->setObjectName(QString::fromUtf8("lineEdit_precio"));

        gridLayout->addWidget(lineEdit_precio, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_codigo = new QLineEdit(gridLayoutWidget_2);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));

        gridLayout->addWidget(lineEdit_codigo, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 2, 1, 1);

        lineEdit_accesorios_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_accesorios_2->setObjectName(QString::fromUtf8("lineEdit_accesorios_2"));

        gridLayout->addWidget(lineEdit_accesorios_2, 8, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        lineEdit_accesorios_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_accesorios_3->setObjectName(QString::fromUtf8("lineEdit_accesorios_3"));

        gridLayout->addWidget(lineEdit_accesorios_3, 4, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        lineEdit_accesorios_4 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_accesorios_4->setObjectName(QString::fromUtf8("lineEdit_accesorios_4"));

        gridLayout->addWidget(lineEdit_accesorios_4, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        myComboBox_marca = new MyComboBox(gridLayoutWidget_2);
        myComboBox_marca->setObjectName(QString::fromUtf8("myComboBox_marca"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(myComboBox_marca->sizePolicy().hasHeightForWidth());
        myComboBox_marca->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(myComboBox_marca);

        pushButton_xmarca = new QPushButton(gridLayoutWidget_2);
        pushButton_xmarca->setObjectName(QString::fromUtf8("pushButton_xmarca"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_xmarca->sizePolicy().hasHeightForWidth());
        pushButton_xmarca->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_xmarca->setIcon(icon);
        pushButton_xmarca->setAutoDefault(false);
        pushButton_xmarca->setFlat(true);

        horizontalLayout_7->addWidget(pushButton_xmarca);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_tamanio = new MyComboBox(gridLayoutWidget_2);
        comboBox_tamanio->setObjectName(QString::fromUtf8("comboBox_tamanio"));
        sizePolicy1.setHeightForWidth(comboBox_tamanio->sizePolicy().hasHeightForWidth());
        comboBox_tamanio->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(comboBox_tamanio);

        pushButton_xtamanio = new QPushButton(gridLayoutWidget_2);
        pushButton_xtamanio->setObjectName(QString::fromUtf8("pushButton_xtamanio"));
        sizePolicy2.setHeightForWidth(pushButton_xtamanio->sizePolicy().hasHeightForWidth());
        pushButton_xtamanio->setSizePolicy(sizePolicy2);
        pushButton_xtamanio->setIcon(icon);
        pushButton_xtamanio->setAutoDefault(false);
        pushButton_xtamanio->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_xtamanio);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        comboBox_forma = new MyComboBox(gridLayoutWidget_2);
        comboBox_forma->setObjectName(QString::fromUtf8("comboBox_forma"));
        sizePolicy1.setHeightForWidth(comboBox_forma->sizePolicy().hasHeightForWidth());
        comboBox_forma->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(comboBox_forma);

        pushButton_xforma = new QPushButton(gridLayoutWidget_2);
        pushButton_xforma->setObjectName(QString::fromUtf8("pushButton_xforma"));
        sizePolicy2.setHeightForWidth(pushButton_xforma->sizePolicy().hasHeightForWidth());
        pushButton_xforma->setSizePolicy(sizePolicy2);
        pushButton_xforma->setIcon(icon);
        pushButton_xforma->setAutoDefault(false);
        pushButton_xforma->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_xforma);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_calidad = new MyComboBox(gridLayoutWidget_2);
        comboBox_calidad->setObjectName(QString::fromUtf8("comboBox_calidad"));
        sizePolicy1.setHeightForWidth(comboBox_calidad->sizePolicy().hasHeightForWidth());
        comboBox_calidad->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(comboBox_calidad);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setIcon(icon);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(true);

        horizontalLayout_10->addWidget(pushButton_4);


        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        verticalLayout_10->addWidget(label_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        comboBox_color = new MyComboBox(gridLayoutWidget_2);
        comboBox_color->setObjectName(QString::fromUtf8("comboBox_color"));
        sizePolicy1.setHeightForWidth(comboBox_color->sizePolicy().hasHeightForWidth());
        comboBox_color->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(comboBox_color);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setIcon(icon);
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(true);

        horizontalLayout_14->addWidget(pushButton_8);


        verticalLayout_10->addLayout(horizontalLayout_14);


        verticalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        verticalLayout_8->addLayout(verticalLayout_7);


        gridLayout_2->addLayout(verticalLayout_8, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_agregar = new QPushButton(gridLayoutWidget_2);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));

        horizontalLayout->addWidget(pushButton_agregar);

        pushButton_cancelar = new QPushButton(gridLayoutWidget_2);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);


        gridLayout_2->addLayout(horizontalLayout, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(27, 34, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        line = new QFrame(ui_producto_agregar_montura);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 741, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(ui_producto_agregar_montura);

        QMetaObject::connectSlotsByName(ui_producto_agregar_montura);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_montura)
    {
        ui_producto_agregar_montura->setWindowTitle(QApplication::translate("ui_producto_agregar_montura", "Agregar Montura", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_producto_agregar_montura", "Agregar Montura", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_montura", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_producto_agregar_montura", "Accesorios", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_montura", "Precio De Descuento", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_montura", "Stock", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_producto_agregar_montura", "Precio", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_montura", "Codigo", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_producto_agregar_montura", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_producto_agregar_montura", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_producto_agregar_montura", "Marca", 0, QApplication::UnicodeUTF8));
        pushButton_xmarca->setText(QString());
        label_9->setText(QApplication::translate("ui_producto_agregar_montura", "Tama\303\261o", 0, QApplication::UnicodeUTF8));
        pushButton_xtamanio->setText(QString());
        label_10->setText(QApplication::translate("ui_producto_agregar_montura", "Forma", 0, QApplication::UnicodeUTF8));
        pushButton_xforma->setText(QString());
        label_11->setText(QApplication::translate("ui_producto_agregar_montura", "Calidad", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        label_15->setText(QApplication::translate("ui_producto_agregar_montura", "Color", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QString());
        pushButton_agregar->setText(QApplication::translate("ui_producto_agregar_montura", "Agregar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_producto_agregar_montura", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_montura: public Ui_ui_producto_agregar_montura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_MONTURA_H
