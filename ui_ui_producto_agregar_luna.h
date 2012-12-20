/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_luna.ui'
**
** Created: Thu Dec 20 14:21:44 2012
**      by: Qt User Interface Compiler version 4.7.4
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
    QLabel *label_4;
    QLineEdit *lineEdit_stock;
    QLineEdit *lineEdit_descripcion;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_precio_compra;
    QLineEdit *lineEdit_precio_venta;
    QLabel *label_7;
    QLineEdit *lineEdit_p_descuento;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    MyComboBox *comboBox_tratamiento;
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
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_14;
    MyComboBox *comboBox_diametro;
    QPushButton *pushButton_xdiametro;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *descripcion_rango_medida;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineEdit_vinicial;
    QSpacerItem *horizontalSpacer;
    QLabel *label_14;
    QLineEdit *lineEdit_vfinal;
    QLabel *label_titulo;
    QFrame *line;

    void setupUi(QDialog *ui_producto_agregar_luna)
    {
        if (ui_producto_agregar_luna->objectName().isEmpty())
            ui_producto_agregar_luna->setObjectName(QString::fromUtf8("ui_producto_agregar_luna"));
        ui_producto_agregar_luna->setEnabled(true);
        ui_producto_agregar_luna->resize(712, 522);
        ui_producto_agregar_luna->setMinimumSize(QSize(700, 522));
        ui_producto_agregar_luna->setMaximumSize(QSize(712, 522));
        ui_producto_agregar_luna->setContextMenuPolicy(Qt::NoContextMenu);
        ui_producto_agregar_luna->setWindowFilePath(QString::fromUtf8(""));
        ui_producto_agregar_luna->setSizeGripEnabled(false);
        ui_producto_agregar_luna->setModal(false);
        verticalLayoutWidget = new QWidget(ui_producto_agregar_luna);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 50, 681, 458));
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

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_stock = new QLineEdit(verticalLayoutWidget);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 0, 1, 1, 1);

        lineEdit_descripcion = new QLineEdit(verticalLayoutWidget);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(lineEdit_descripcion, 4, 1, 1, 1);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 2, 0, 1, 1);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        lineEdit_precio_compra = new QLineEdit(verticalLayoutWidget);
        lineEdit_precio_compra->setObjectName(QString::fromUtf8("lineEdit_precio_compra"));

        gridLayout->addWidget(lineEdit_precio_compra, 1, 1, 1, 1);

        lineEdit_precio_venta = new QLineEdit(verticalLayoutWidget);
        lineEdit_precio_venta->setObjectName(QString::fromUtf8("lineEdit_precio_venta"));

        gridLayout->addWidget(lineEdit_precio_venta, 2, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        lineEdit_p_descuento = new QLineEdit(verticalLayoutWidget);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));

        gridLayout->addWidget(lineEdit_p_descuento, 3, 1, 1, 1);


        horizontalLayout_12->addLayout(gridLayout);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        gridLayout_3->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_tratamiento = new MyComboBox(verticalLayoutWidget);
        comboBox_tratamiento->setObjectName(QString::fromUtf8("comboBox_tratamiento"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_tratamiento->sizePolicy().hasHeightForWidth());
        comboBox_tratamiento->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(comboBox_tratamiento);

        pushButton_xindice = new QPushButton(verticalLayoutWidget);
        pushButton_xindice->setObjectName(QString::fromUtf8("pushButton_xindice"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_xindice->sizePolicy().hasHeightForWidth());
        pushButton_xindice->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
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

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(0, 10));
        label_21->setMaximumSize(QSize(16777215, 9));

        verticalLayout_8->addWidget(label_21);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        comboBox_diametro = new MyComboBox(verticalLayoutWidget);
        comboBox_diametro->setObjectName(QString::fromUtf8("comboBox_diametro"));
        sizePolicy1.setHeightForWidth(comboBox_diametro->sizePolicy().hasHeightForWidth());
        comboBox_diametro->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(comboBox_diametro);

        pushButton_xdiametro = new QPushButton(verticalLayoutWidget);
        pushButton_xdiametro->setObjectName(QString::fromUtf8("pushButton_xdiametro"));
        sizePolicy2.setHeightForWidth(pushButton_xdiametro->sizePolicy().hasHeightForWidth());
        pushButton_xdiametro->setSizePolicy(sizePolicy2);
        pushButton_xdiametro->setIcon(icon);
        pushButton_xdiametro->setAutoDefault(false);
        pushButton_xdiametro->setFlat(true);

        horizontalLayout_14->addWidget(pushButton_xdiametro);


        verticalLayout_8->addLayout(horizontalLayout_14);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

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

        descripcion_rango_medida = new QLineEdit(verticalLayoutWidget);
        descripcion_rango_medida->setObjectName(QString::fromUtf8("descripcion_rango_medida"));

        horizontalLayout_2->addWidget(descripcion_rango_medida);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        lineEdit_vinicial = new QLineEdit(verticalLayoutWidget);
        lineEdit_vinicial->setObjectName(QString::fromUtf8("lineEdit_vinicial"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_vinicial->sizePolicy().hasHeightForWidth());
        lineEdit_vinicial->setSizePolicy(sizePolicy3);
        lineEdit_vinicial->setMaximumSize(QSize(60, 27));

        horizontalLayout_11->addWidget(lineEdit_vinicial);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);

        lineEdit_vfinal = new QLineEdit(verticalLayoutWidget);
        lineEdit_vfinal->setObjectName(QString::fromUtf8("lineEdit_vfinal"));
        lineEdit_vfinal->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(lineEdit_vfinal);


        verticalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_8->addLayout(verticalLayout_7);


        gridLayout_3->addLayout(verticalLayout_8, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        label_titulo = new QLabel(ui_producto_agregar_luna);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));
        label_titulo->setGeometry(QRect(20, 0, 131, 31));
        line = new QFrame(ui_producto_agregar_luna);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 30, 701, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        QWidget::setTabOrder(lineEdit_stock, lineEdit_precio_compra);
        QWidget::setTabOrder(lineEdit_precio_compra, lineEdit_precio_venta);
        QWidget::setTabOrder(lineEdit_precio_venta, lineEdit_p_descuento);
        QWidget::setTabOrder(lineEdit_p_descuento, lineEdit_descripcion);
        QWidget::setTabOrder(lineEdit_descripcion, descripcion_rango_medida);
        QWidget::setTabOrder(descripcion_rango_medida, lineEdit_vinicial);
        QWidget::setTabOrder(lineEdit_vinicial, lineEdit_vfinal);
        QWidget::setTabOrder(lineEdit_vfinal, comboBox_tratamiento);
        QWidget::setTabOrder(comboBox_tratamiento, comboBox_tipo_luna);
        QWidget::setTabOrder(comboBox_tipo_luna, comboBox_calidad);
        QWidget::setTabOrder(comboBox_calidad, comboBox_diametro);
        QWidget::setTabOrder(comboBox_diametro, pushButton_xindice);
        QWidget::setTabOrder(pushButton_xindice, pushButton_xtipo);
        QWidget::setTabOrder(pushButton_xtipo, pushButton_xcalidad);
        QWidget::setTabOrder(pushButton_xcalidad, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_xdiametro);
        QWidget::setTabOrder(pushButton_xdiametro, pushButton_cancelar);

        retranslateUi(ui_producto_agregar_luna);

        QMetaObject::connectSlotsByName(ui_producto_agregar_luna);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_luna)
    {
        ui_producto_agregar_luna->setWindowTitle(QApplication::translate("ui_producto_agregar_luna", "Luna", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_luna", "Stock", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_producto_agregar_luna", "Precio De Venta", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_producto_agregar_luna", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_luna", "Precio Descuento", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ui_producto_agregar_luna", "Agregar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_producto_agregar_luna", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_producto_agregar_luna", "Tratamiento", 0, QApplication::UnicodeUTF8));
        pushButton_xindice->setText(QString());
        label_10->setText(QApplication::translate("ui_producto_agregar_luna", "Tipo de  Luna", 0, QApplication::UnicodeUTF8));
        pushButton_xtipo->setText(QString());
        label_11->setText(QApplication::translate("ui_producto_agregar_luna", "Calidad", 0, QApplication::UnicodeUTF8));
        pushButton_xcalidad->setText(QString());
        label_21->setText(QApplication::translate("ui_producto_agregar_luna", "Diametro", 0, QApplication::UnicodeUTF8));
        pushButton_xdiametro->setText(QString());
        label_12->setText(QApplication::translate("ui_producto_agregar_luna", "Rango de Medida", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Inicial", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Final", 0, QApplication::UnicodeUTF8));
        label_titulo->setText(QApplication::translate("ui_producto_agregar_luna", "Agregar Luna", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_luna: public Ui_ui_producto_agregar_luna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_LUNA_H
