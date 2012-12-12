/********************************************************************************
** Form generated from reading UI file 'ui_tienda_agregar.ui'
**
** Created: Tue Dec 11 18:43:27 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TIENDA_AGREGAR_H
#define UI_UI_TIENDA_AGREGAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_tienda_agregar
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *textPermisoMunicipal;
    QLabel *label_19;
    QLineEdit *textDireccion;
    QLabel *label_22;
    QLineEdit *textTelefono;
    QComboBox *comboEmpresa;
    QLabel *label_24;
    QLineEdit *textAlias;
    QLineEdit *textIdTienda;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QLabel *label_28;
    QFrame *line_3;
    QLabel *label_23;

    void setupUi(QDialog *ui_tienda_agregar)
    {
        if (ui_tienda_agregar->objectName().isEmpty())
            ui_tienda_agregar->setObjectName(QString::fromUtf8("ui_tienda_agregar"));
        ui_tienda_agregar->resize(706, 316);
        layoutWidget = new QWidget(ui_tienda_agregar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 688, 298));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Aceptar = new QPushButton(layoutWidget);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout->addWidget(pushButton_Aceptar, 0, 1, 1, 1);

        pushButton_Cancelar = new QPushButton(layoutWidget);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout->addWidget(pushButton_Cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 6, 0, 1, 4);

        horizontalSpacer_11 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        textPermisoMunicipal = new QLineEdit(layoutWidget);
        textPermisoMunicipal->setObjectName(QString::fromUtf8("textPermisoMunicipal"));

        gridLayout_4->addWidget(textPermisoMunicipal, 10, 1, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 7, 0, 1, 1);

        textDireccion = new QLineEdit(layoutWidget);
        textDireccion->setObjectName(QString::fromUtf8("textDireccion"));

        gridLayout_4->addWidget(textDireccion, 7, 1, 1, 3);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 9, 0, 1, 1);

        textTelefono = new QLineEdit(layoutWidget);
        textTelefono->setObjectName(QString::fromUtf8("textTelefono"));

        gridLayout_4->addWidget(textTelefono, 9, 1, 1, 1);

        comboEmpresa = new QComboBox(layoutWidget);
        comboEmpresa->setObjectName(QString::fromUtf8("comboEmpresa"));

        gridLayout_4->addWidget(comboEmpresa, 4, 1, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 2, 0, 1, 1);

        textAlias = new QLineEdit(layoutWidget);
        textAlias->setObjectName(QString::fromUtf8("textAlias"));

        gridLayout_4->addWidget(textAlias, 2, 1, 1, 1);

        textIdTienda = new QLineEdit(layoutWidget);
        textIdTienda->setObjectName(QString::fromUtf8("textIdTienda"));
        textIdTienda->setEnabled(false);

        gridLayout_4->addWidget(textIdTienda, 1, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 3, 0, 1, 4);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 4, 0, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 8, 0, 1, 4);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 10, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(ui_tienda_agregar);

        QMetaObject::connectSlotsByName(ui_tienda_agregar);
    } // setupUi

    void retranslateUi(QDialog *ui_tienda_agregar)
    {
        ui_tienda_agregar->setWindowTitle(QApplication::translate("ui_tienda_agregar", "Agregar Tienda", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("ui_tienda_agregar", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("ui_tienda_agregar", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_tienda_agregar", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_tienda_agregar", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_tienda_agregar", "Alias", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ui_tienda_agregar", "idTienda", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_tienda_agregar", "Empresa", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ui_tienda_agregar", "Permiso Municipal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tienda_agregar: public Ui_ui_tienda_agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TIENDA_AGREGAR_H
