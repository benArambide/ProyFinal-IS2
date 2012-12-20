/********************************************************************************
** Form generated from reading UI file 'ui_producto_datos.ui'
**
** Created: Thu Dec 20 14:21:44 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_DATOS_H
#define UI_UI_PRODUCTO_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_ui_producto_datos
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    MyComboBox *calidad_luna;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    MyComboBox *tipo_luna;
    MyComboBox *diametro_c;
    QLineEdit *medida;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Buscar;
    QPushButton *Cancelar;

    void setupUi(QWidget *ui_producto_datos)
    {
        if (ui_producto_datos->objectName().isEmpty())
            ui_producto_datos->setObjectName(QString::fromUtf8("ui_producto_datos"));
        ui_producto_datos->resize(447, 209);
        gridLayout_7 = new QGridLayout(ui_producto_datos);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        calidad_luna = new MyComboBox(ui_producto_datos);
        calidad_luna->setObjectName(QString::fromUtf8("calidad_luna"));

        gridLayout_3->addWidget(calidad_luna, 0, 1, 1, 1);

        label_2 = new QLabel(ui_producto_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(ui_producto_datos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(ui_producto_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(ui_producto_datos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        tipo_luna = new MyComboBox(ui_producto_datos);
        tipo_luna->setObjectName(QString::fromUtf8("tipo_luna"));

        gridLayout_3->addWidget(tipo_luna, 1, 1, 1, 1);

        diametro_c = new MyComboBox(ui_producto_datos);
        diametro_c->setObjectName(QString::fromUtf8("diametro_c"));

        gridLayout_3->addWidget(diametro_c, 3, 1, 1, 1);

        medida = new QLineEdit(ui_producto_datos);
        medida->setObjectName(QString::fromUtf8("medida"));

        gridLayout_3->addWidget(medida, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Buscar = new QPushButton(ui_producto_datos);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));

        horizontalLayout->addWidget(Buscar);

        Cancelar = new QPushButton(ui_producto_datos);
        Cancelar->setObjectName(QString::fromUtf8("Cancelar"));

        horizontalLayout->addWidget(Cancelar);


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ui_producto_datos);

        QMetaObject::connectSlotsByName(ui_producto_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_producto_datos)
    {
        ui_producto_datos->setWindowTitle(QApplication::translate("ui_producto_datos", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_datos", "Calidad de Luna", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_producto_datos", "Tipo de Luna", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_datos", "Medida", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_datos", "Diametro", 0, QApplication::UnicodeUTF8));
        Buscar->setText(QApplication::translate("ui_producto_datos", "Buscar", 0, QApplication::UnicodeUTF8));
        Cancelar->setText(QApplication::translate("ui_producto_datos", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_datos: public Ui_ui_producto_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_DATOS_H
