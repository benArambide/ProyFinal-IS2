/********************************************************************************
** Form generated from reading UI file 'ui_vitrina_agregar.ui'
**
** Created: Wed 19. Dec 09:28:17 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_VITRINA_AGREGAR_H
#define UI_UI_VITRINA_AGREGAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_vitrina_agregar
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *guardar;
    QPushButton *cancelar;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *spinBoxFilas;
    QLabel *label_23;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_2;
    QSpinBox *spinBoxcolumnas;
    QLabel *label_28;
    QFrame *line;
    QSpinBox *spinBoxniveles;
    QLabel *label_25;
    QLabel *label_24;
    QLineEdit *textCodigo;
    QLineEdit *textAlias;

    void setupUi(QWidget *ui_vitrina_agregar)
    {
        if (ui_vitrina_agregar->objectName().isEmpty())
            ui_vitrina_agregar->setObjectName(QString::fromUtf8("ui_vitrina_agregar"));
        ui_vitrina_agregar->resize(359, 337);
        layoutWidget = new QWidget(ui_vitrina_agregar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 316, 298));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        guardar = new QPushButton(layoutWidget);
        guardar->setObjectName(QString::fromUtf8("guardar"));

        gridLayout->addWidget(guardar, 0, 1, 1, 1);

        cancelar = new QPushButton(layoutWidget);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));

        gridLayout->addWidget(cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        spinBoxFilas = new QSpinBox(layoutWidget);
        spinBoxFilas->setObjectName(QString::fromUtf8("spinBoxFilas"));

        gridLayout_4->addWidget(spinBoxFilas, 5, 1, 1, 1);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 9, 0, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 8, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 7, 0, 1, 3);

        spinBoxcolumnas = new QSpinBox(layoutWidget);
        spinBoxcolumnas->setObjectName(QString::fromUtf8("spinBoxcolumnas"));

        gridLayout_4->addWidget(spinBoxcolumnas, 8, 1, 1, 1);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 5, 0, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 4, 0, 1, 3);

        spinBoxniveles = new QSpinBox(layoutWidget);
        spinBoxniveles->setObjectName(QString::fromUtf8("spinBoxniveles"));

        gridLayout_4->addWidget(spinBoxniveles, 9, 1, 1, 1);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 1, 0, 1, 1);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 3, 0, 1, 1);

        textCodigo = new QLineEdit(layoutWidget);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));

        gridLayout_4->addWidget(textCodigo, 1, 1, 1, 1);

        textAlias = new QLineEdit(layoutWidget);
        textAlias->setObjectName(QString::fromUtf8("textAlias"));

        gridLayout_4->addWidget(textAlias, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(ui_vitrina_agregar);

        QMetaObject::connectSlotsByName(ui_vitrina_agregar);
    } // setupUi

    void retranslateUi(QWidget *ui_vitrina_agregar)
    {
        ui_vitrina_agregar->setWindowTitle(QApplication::translate("ui_vitrina_agregar", "Form", 0, QApplication::UnicodeUTF8));
        guardar->setText(QApplication::translate("ui_vitrina_agregar", "Guardar", 0, QApplication::UnicodeUTF8));
        cancelar->setText(QApplication::translate("ui_vitrina_agregar", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ui_vitrina_agregar", "Niveles", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_vitrina_agregar", "Columnas", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_vitrina_agregar", "Filas", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_vitrina_agregar", "Codigo", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_vitrina_agregar", "Alias", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_vitrina_agregar: public Ui_ui_vitrina_agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_VITRINA_AGREGAR_H
