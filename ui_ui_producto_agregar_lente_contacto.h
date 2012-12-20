/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_lente_contacto.ui'
**
** Created: Thu Dec 20 14:21:44 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
#define UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H

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
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_ui_producto_agregar_lente_contacto
{
public:
    QLabel *label_titulo;
    QFrame *line;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *line_stock;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *line_rango_k;
    QLineEdit *line_disenio;
    QLineEdit *line_acuoso;
    QLineEdit *line_visibilidad;
    QLineEdit *line_descuento;
    QLineEdit *line_venta;
    QLineEdit *line_compra;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    MyComboBox *comboBox_marca;
    QPushButton *marca_x;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    MyComboBox *comboBox_tipo_lente;
    QPushButton *topolente_x;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    MyComboBox *comboBox_potencia;
    QPushButton *portencia_x;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    MyComboBox *comboBox_curva_base;
    QPushButton *curvabase_x;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    MyComboBox *comboBox_diametro;
    QPushButton *diametro_x;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    MyComboBox *comboBox_tiempo_uso;
    QPushButton *tiempouso_x;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    MyComboBox *comboBox_material;
    QPushButton *material_x;
    QSpacerItem *verticalSpacer_7;
    QPushButton *boton_cancelar;
    QPushButton *boton_agregar;

    void setupUi(QDialog *ui_producto_agregar_lente_contacto)
    {
        if (ui_producto_agregar_lente_contacto->objectName().isEmpty())
            ui_producto_agregar_lente_contacto->setObjectName(QString::fromUtf8("ui_producto_agregar_lente_contacto"));
        ui_producto_agregar_lente_contacto->resize(663, 540);
        ui_producto_agregar_lente_contacto->setMinimumSize(QSize(663, 540));
        ui_producto_agregar_lente_contacto->setMaximumSize(QSize(663, 577));
        label_titulo = new QLabel(ui_producto_agregar_lente_contacto);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(10, 10, 231, 21));
        line = new QFrame(ui_producto_agregar_lente_contacto);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 661, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(ui_producto_agregar_lente_contacto);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 50, 641, 452));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        line_stock = new QLineEdit(gridLayoutWidget);
        line_stock->setObjectName(QString::fromUtf8("line_stock"));
        line_stock->setAutoFillBackground(false);

        gridLayout_2->addWidget(line_stock, 0, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 1, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 3, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 4, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 5, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 6, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 7, 0, 1, 1);

        line_rango_k = new QLineEdit(gridLayoutWidget);
        line_rango_k->setObjectName(QString::fromUtf8("line_rango_k"));

        gridLayout_2->addWidget(line_rango_k, 7, 1, 1, 1);

        line_disenio = new QLineEdit(gridLayoutWidget);
        line_disenio->setObjectName(QString::fromUtf8("line_disenio"));

        gridLayout_2->addWidget(line_disenio, 6, 1, 1, 1);

        line_acuoso = new QLineEdit(gridLayoutWidget);
        line_acuoso->setObjectName(QString::fromUtf8("line_acuoso"));

        gridLayout_2->addWidget(line_acuoso, 5, 1, 1, 1);

        line_visibilidad = new QLineEdit(gridLayoutWidget);
        line_visibilidad->setObjectName(QString::fromUtf8("line_visibilidad"));

        gridLayout_2->addWidget(line_visibilidad, 4, 1, 1, 1);

        line_descuento = new QLineEdit(gridLayoutWidget);
        line_descuento->setObjectName(QString::fromUtf8("line_descuento"));

        gridLayout_2->addWidget(line_descuento, 3, 1, 1, 1);

        line_venta = new QLineEdit(gridLayoutWidget);
        line_venta->setObjectName(QString::fromUtf8("line_venta"));

        gridLayout_2->addWidget(line_venta, 2, 1, 1, 1);

        line_compra = new QLineEdit(gridLayoutWidget);
        line_compra->setObjectName(QString::fromUtf8("line_compra"));

        gridLayout_2->addWidget(line_compra, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_marca = new MyComboBox(gridLayoutWidget);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));
        comboBox_marca->setMinimumSize(QSize(230, 0));
        comboBox_marca->setMaximumSize(QSize(100, 100));

        horizontalLayout_2->addWidget(comboBox_marca);

        marca_x = new QPushButton(gridLayoutWidget);
        marca_x->setObjectName(QString::fromUtf8("marca_x"));
        marca_x->setMinimumSize(QSize(38, 27));
        marca_x->setMaximumSize(QSize(38, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        marca_x->setIcon(icon);
        marca_x->setFlat(true);

        horizontalLayout_2->addWidget(marca_x);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_tipo_lente = new MyComboBox(gridLayoutWidget);
        comboBox_tipo_lente->setObjectName(QString::fromUtf8("comboBox_tipo_lente"));

        horizontalLayout_3->addWidget(comboBox_tipo_lente);

        topolente_x = new QPushButton(gridLayoutWidget);
        topolente_x->setObjectName(QString::fromUtf8("topolente_x"));
        topolente_x->setMinimumSize(QSize(38, 27));
        topolente_x->setMaximumSize(QSize(38, 27));
        topolente_x->setIcon(icon);
        topolente_x->setFlat(true);

        horizontalLayout_3->addWidget(topolente_x);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBox_potencia = new MyComboBox(gridLayoutWidget);
        comboBox_potencia->setObjectName(QString::fromUtf8("comboBox_potencia"));

        horizontalLayout_4->addWidget(comboBox_potencia);

        portencia_x = new QPushButton(gridLayoutWidget);
        portencia_x->setObjectName(QString::fromUtf8("portencia_x"));
        portencia_x->setMinimumSize(QSize(38, 27));
        portencia_x->setMaximumSize(QSize(38, 27));
        portencia_x->setIcon(icon);
        portencia_x->setFlat(true);

        horizontalLayout_4->addWidget(portencia_x);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox_curva_base = new MyComboBox(gridLayoutWidget);
        comboBox_curva_base->setObjectName(QString::fromUtf8("comboBox_curva_base"));

        horizontalLayout_5->addWidget(comboBox_curva_base);

        curvabase_x = new QPushButton(gridLayoutWidget);
        curvabase_x->setObjectName(QString::fromUtf8("curvabase_x"));
        curvabase_x->setMinimumSize(QSize(38, 27));
        curvabase_x->setMaximumSize(QSize(38, 27));
        curvabase_x->setIcon(icon);
        curvabase_x->setFlat(true);

        horizontalLayout_5->addWidget(curvabase_x);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        comboBox_diametro = new MyComboBox(gridLayoutWidget);
        comboBox_diametro->setObjectName(QString::fromUtf8("comboBox_diametro"));

        horizontalLayout_6->addWidget(comboBox_diametro);

        diametro_x = new QPushButton(gridLayoutWidget);
        diametro_x->setObjectName(QString::fromUtf8("diametro_x"));
        diametro_x->setMinimumSize(QSize(38, 27));
        diametro_x->setMaximumSize(QSize(38, 27));
        diametro_x->setIcon(icon);
        diametro_x->setFlat(true);

        horizontalLayout_6->addWidget(diametro_x);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_tiempo_uso = new MyComboBox(gridLayoutWidget);
        comboBox_tiempo_uso->setObjectName(QString::fromUtf8("comboBox_tiempo_uso"));

        horizontalLayout_7->addWidget(comboBox_tiempo_uso);

        tiempouso_x = new QPushButton(gridLayoutWidget);
        tiempouso_x->setObjectName(QString::fromUtf8("tiempouso_x"));
        tiempouso_x->setMinimumSize(QSize(38, 27));
        tiempouso_x->setMaximumSize(QSize(38, 27));
        tiempouso_x->setIcon(icon);
        tiempouso_x->setFlat(true);

        horizontalLayout_7->addWidget(tiempouso_x);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_7->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_material = new MyComboBox(gridLayoutWidget);
        comboBox_material->setObjectName(QString::fromUtf8("comboBox_material"));

        horizontalLayout_8->addWidget(comboBox_material);

        material_x = new QPushButton(gridLayoutWidget);
        material_x->setObjectName(QString::fromUtf8("material_x"));
        material_x->setMinimumSize(QSize(38, 27));
        material_x->setMaximumSize(QSize(38, 27));
        material_x->setIcon(icon);
        material_x->setFlat(true);

        horizontalLayout_8->addWidget(material_x);


        verticalLayout_7->addLayout(horizontalLayout_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);


        verticalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        boton_cancelar = new QPushButton(ui_producto_agregar_lente_contacto);
        boton_cancelar->setObjectName(QString::fromUtf8("boton_cancelar"));
        boton_cancelar->setGeometry(QRect(550, 510, 97, 27));
        boton_agregar = new QPushButton(ui_producto_agregar_lente_contacto);
        boton_agregar->setObjectName(QString::fromUtf8("boton_agregar"));
        boton_agregar->setGeometry(QRect(410, 510, 97, 27));
        QWidget::setTabOrder(line_stock, line_compra);
        QWidget::setTabOrder(line_compra, line_venta);
        QWidget::setTabOrder(line_venta, line_descuento);
        QWidget::setTabOrder(line_descuento, line_visibilidad);
        QWidget::setTabOrder(line_visibilidad, line_acuoso);
        QWidget::setTabOrder(line_acuoso, line_disenio);
        QWidget::setTabOrder(line_disenio, line_rango_k);
        QWidget::setTabOrder(line_rango_k, comboBox_marca);
        QWidget::setTabOrder(comboBox_marca, comboBox_tipo_lente);
        QWidget::setTabOrder(comboBox_tipo_lente, comboBox_potencia);
        QWidget::setTabOrder(comboBox_potencia, comboBox_curva_base);
        QWidget::setTabOrder(comboBox_curva_base, comboBox_diametro);
        QWidget::setTabOrder(comboBox_diametro, comboBox_tiempo_uso);
        QWidget::setTabOrder(comboBox_tiempo_uso, comboBox_material);
        QWidget::setTabOrder(comboBox_material, marca_x);
        QWidget::setTabOrder(marca_x, topolente_x);
        QWidget::setTabOrder(topolente_x, portencia_x);
        QWidget::setTabOrder(portencia_x, curvabase_x);
        QWidget::setTabOrder(curvabase_x, diametro_x);
        QWidget::setTabOrder(diametro_x, tiempouso_x);
        QWidget::setTabOrder(tiempouso_x, material_x);
        QWidget::setTabOrder(material_x, boton_agregar);
        QWidget::setTabOrder(boton_agregar, boton_cancelar);

        retranslateUi(ui_producto_agregar_lente_contacto);

        QMetaObject::connectSlotsByName(ui_producto_agregar_lente_contacto);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_lente_contacto)
    {
        ui_producto_agregar_lente_contacto->setWindowTitle(QApplication::translate("ui_producto_agregar_lente_contacto", "Lente de Contacto", 0, QApplication::UnicodeUTF8));
        label_titulo->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Agregar Lente de Contacto", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Stock", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Descuento", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tinte de Visibilidad", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Contenido Acuoso", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Dise\303\261o", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Rango K", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Marca", 0, QApplication::UnicodeUTF8));
        marca_x->setText(QString());
        label_4->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tipo de Lente", 0, QApplication::UnicodeUTF8));
        topolente_x->setText(QString());
        label_5->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Potencia", 0, QApplication::UnicodeUTF8));
        portencia_x->setText(QString());
        label_6->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Curva Base", 0, QApplication::UnicodeUTF8));
        curvabase_x->setText(QString());
        label_7->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Diametro", 0, QApplication::UnicodeUTF8));
        diametro_x->setText(QString());
        label_8->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tiempo de Uso", 0, QApplication::UnicodeUTF8));
        tiempouso_x->setText(QString());
        label_9->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Material", 0, QApplication::UnicodeUTF8));
        material_x->setText(QString());
        boton_cancelar->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Cancelar", 0, QApplication::UnicodeUTF8));
        boton_agregar->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Agregar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_lente_contacto: public Ui_ui_producto_agregar_lente_contacto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
