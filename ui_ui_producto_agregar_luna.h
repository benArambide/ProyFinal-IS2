/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_luna.ui'
**
** Created: Wed 28. Nov 23:58:26 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_LUNA_H
#define UI_UI_PRODUCTO_AGREGAR_LUNA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ui_producto_agregar_luna
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_accesorios;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_p_descuento;
    QLabel *label_4;
    QLineEdit *lineEdit_stock;
    QLabel *label_5;
    QLineEdit *lineEdit_precio;
    QLineEdit *lineEdit_codigo;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_descripcion;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    MyComboBox *comboBox_marca;
    QPushButton *pushButton_xmarca;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    MyComboBox *comboBox_indice_refraccion;
    QPushButton *pushButton_xindice;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_9;
    MyComboBox *comboBox_tipo_luna;
    QPushButton *pushButton_xtipo;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_10;
    MyComboBox *comboBox_calidad;
    QPushButton *pushButton_xcalidad;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QPlainTextEdit *plainTextEdit_descripcionRM;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_valor_ini;
    QSpacerItem *horizontalSpacer;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_valor_fin;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_nombre;
    QLabel *label_15;
    QFrame *line;

    void setupUi(QDialog *ui_producto_agregar_luna)
    {
        if (ui_producto_agregar_luna->objectName().isEmpty())
            ui_producto_agregar_luna->setObjectName(QString::fromUtf8("ui_producto_agregar_luna"));
        ui_producto_agregar_luna->setEnabled(true);
        ui_producto_agregar_luna->resize(700, 522);
        ui_producto_agregar_luna->setMinimumSize(QSize(700, 522));
        ui_producto_agregar_luna->setMaximumSize(QSize(712, 522));
        ui_producto_agregar_luna->setContextMenuPolicy(Qt::NoContextMenu);
        ui_producto_agregar_luna->setWindowFilePath(QString::fromUtf8(""));
        ui_producto_agregar_luna->setSizeGripEnabled(false);
        ui_producto_agregar_luna->setModal(false);
        verticalLayoutWidget = new QWidget(ui_producto_agregar_luna);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 671, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        lineEdit_accesorios = new QLineEdit(verticalLayoutWidget);
        lineEdit_accesorios->setObjectName(QString::fromUtf8("lineEdit_accesorios"));

        gridLayout->addWidget(lineEdit_accesorios, 4, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        lineEdit_p_descuento = new QLineEdit(verticalLayoutWidget);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));

        gridLayout->addWidget(lineEdit_p_descuento, 3, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit_stock = new QLineEdit(verticalLayoutWidget);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 2, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_precio = new QLineEdit(verticalLayoutWidget);
        lineEdit_precio->setObjectName(QString::fromUtf8("lineEdit_precio"));

        gridLayout->addWidget(lineEdit_precio, 1, 1, 1, 1);

        lineEdit_codigo = new QLineEdit(verticalLayoutWidget);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));

        gridLayout->addWidget(lineEdit_codigo, 0, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        plainTextEdit_descripcion = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_descripcion->setObjectName(QString::fromUtf8("plainTextEdit_descripcion"));
        plainTextEdit_descripcion->setMaximumSize(QSize(140, 100));

        gridLayout->addWidget(plainTextEdit_descripcion, 5, 1, 1, 1);


        horizontalLayout_12->addLayout(gridLayout);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        gridLayout_3->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_marca = new MyComboBox(verticalLayoutWidget);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_marca->sizePolicy().hasHeightForWidth());
        comboBox_marca->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(comboBox_marca);

        pushButton_xmarca = new QPushButton(verticalLayoutWidget);
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

        verticalSpacer_6 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_indice_refraccion = new MyComboBox(verticalLayoutWidget);
        comboBox_indice_refraccion->setObjectName(QString::fromUtf8("comboBox_indice_refraccion"));
        sizePolicy1.setHeightForWidth(comboBox_indice_refraccion->sizePolicy().hasHeightForWidth());
        comboBox_indice_refraccion->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(comboBox_indice_refraccion);

        pushButton_xindice = new QPushButton(verticalLayoutWidget);
        pushButton_xindice->setObjectName(QString::fromUtf8("pushButton_xindice"));
        sizePolicy2.setHeightForWidth(pushButton_xindice->sizePolicy().hasHeightForWidth());
        pushButton_xindice->setSizePolicy(sizePolicy2);
        pushButton_xindice->setIcon(icon);
        pushButton_xindice->setAutoDefault(false);
        pushButton_xindice->setFlat(true);

        horizontalLayout_8->addWidget(pushButton_xindice);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        comboBox_tipo_luna = new MyComboBox(verticalLayoutWidget);
        comboBox_tipo_luna->setObjectName(QString::fromUtf8("comboBox_tipo_luna"));
        sizePolicy1.setHeightForWidth(comboBox_tipo_luna->sizePolicy().hasHeightForWidth());
        comboBox_tipo_luna->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(comboBox_tipo_luna);

        pushButton_xtipo = new QPushButton(verticalLayoutWidget);
        pushButton_xtipo->setObjectName(QString::fromUtf8("pushButton_xtipo"));
        sizePolicy2.setHeightForWidth(pushButton_xtipo->sizePolicy().hasHeightForWidth());
        pushButton_xtipo->setSizePolicy(sizePolicy2);
        pushButton_xtipo->setIcon(icon);
        pushButton_xtipo->setAutoDefault(false);
        pushButton_xtipo->setFlat(true);

        horizontalLayout_9->addWidget(pushButton_xtipo);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        comboBox_calidad = new MyComboBox(verticalLayoutWidget);
        comboBox_calidad->setObjectName(QString::fromUtf8("comboBox_calidad"));
        sizePolicy1.setHeightForWidth(comboBox_calidad->sizePolicy().hasHeightForWidth());
        comboBox_calidad->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(comboBox_calidad);

        pushButton_xcalidad = new QPushButton(verticalLayoutWidget);
        pushButton_xcalidad->setObjectName(QString::fromUtf8("pushButton_xcalidad"));
        sizePolicy2.setHeightForWidth(pushButton_xcalidad->sizePolicy().hasHeightForWidth());
        pushButton_xcalidad->setSizePolicy(sizePolicy2);
        pushButton_xcalidad->setIcon(icon);
        pushButton_xcalidad->setAutoDefault(false);
        pushButton_xcalidad->setFlat(true);

        horizontalLayout_10->addWidget(pushButton_xcalidad);


        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_8->addLayout(verticalLayout_6);

        verticalSpacer_9 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_7->addWidget(label_12);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);

        plainTextEdit_descripcionRM = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_descripcionRM->setObjectName(QString::fromUtf8("plainTextEdit_descripcionRM"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(plainTextEdit_descripcionRM->sizePolicy().hasHeightForWidth());
        plainTextEdit_descripcionRM->setSizePolicy(sizePolicy3);
        plainTextEdit_descripcionRM->setMinimumSize(QSize(0, 0));
        plainTextEdit_descripcionRM->setMaximumSize(QSize(200, 60));

        horizontalLayout_2->addWidget(plainTextEdit_descripcionRM);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        doubleSpinBox_valor_ini = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_valor_ini->setObjectName(QString::fromUtf8("doubleSpinBox_valor_ini"));
        doubleSpinBox_valor_ini->setMaximum(10);
        doubleSpinBox_valor_ini->setSingleStep(0.1);

        horizontalLayout_11->addWidget(doubleSpinBox_valor_ini);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);

        doubleSpinBox_valor_fin = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_valor_fin->setObjectName(QString::fromUtf8("doubleSpinBox_valor_fin"));
        doubleSpinBox_valor_fin->setMaximum(10.99);
        doubleSpinBox_valor_fin->setSingleStep(0.1);

        horizontalLayout_11->addWidget(doubleSpinBox_valor_fin);


        verticalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_8->addLayout(verticalLayout_7);


        gridLayout_3->addLayout(verticalLayout_8, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_cancelar = new QPushButton(verticalLayoutWidget);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);


        gridLayout_3->addLayout(horizontalLayout, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(6, 35, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        label = new QLabel(ui_producto_agregar_luna);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 131, 31));
        lineEdit_nombre = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        lineEdit_nombre->setGeometry(QRect(370, 20, 321, 27));
        label_15 = new QLabel(ui_producto_agregar_luna);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(300, 20, 67, 17));
        line = new QFrame(ui_producto_agregar_luna);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 50, 701, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(ui_producto_agregar_luna);

        QMetaObject::connectSlotsByName(ui_producto_agregar_luna);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_luna)
    {
        ui_producto_agregar_luna->setWindowTitle(QApplication::translate("ui_producto_agregar_luna", "Agregar Luna Nueva", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_producto_agregar_luna", "Accesorios", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_luna", "Precio Descuento", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_luna", "Stock", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_producto_agregar_luna", "Precio", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_luna", "Codigo", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_producto_agregar_luna", "Marca", 0, QApplication::UnicodeUTF8));
        pushButton_xmarca->setText(QString());
        label_9->setText(QApplication::translate("ui_producto_agregar_luna", "Indice de Refraccion", 0, QApplication::UnicodeUTF8));
        pushButton_xindice->setText(QString());
        label_10->setText(QApplication::translate("ui_producto_agregar_luna", "Tipo de  Luna", 0, QApplication::UnicodeUTF8));
        pushButton_xtipo->setText(QString());
        label_11->setText(QApplication::translate("ui_producto_agregar_luna", "Calidad", 0, QApplication::UnicodeUTF8));
        pushButton_xcalidad->setText(QString());
        label_12->setText(QApplication::translate("ui_producto_agregar_luna", "Rango de Medida", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Inicial", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Final", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ui_producto_agregar_luna", "Agregar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_producto_agregar_luna", "Cancelar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_producto_agregar_luna", "Agregar Luna", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ui_producto_agregar_luna", "Nombre", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_luna: public Ui_ui_producto_agregar_luna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_LUNA_H
