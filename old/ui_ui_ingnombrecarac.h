/********************************************************************************
** Form generated from reading UI file 'ui_ingnombrecarac.ui'
**
** Created: Tue Oct 23 20:00:15 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_INGNOMBRECARAC_H
#define UI_UI_INGNOMBRECARAC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_ingNombreCarac
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineaEdit_IngNom;
    QSpacerItem *verticalSpacer;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Boton_IngNom_cancelar;
    QPushButton *Boton_IngNom_guardar;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *ui_ingNombreCarac)
    {
        if (ui_ingNombreCarac->objectName().isEmpty())
            ui_ingNombreCarac->setObjectName(QString::fromUtf8("ui_ingNombreCarac"));
        ui_ingNombreCarac->resize(439, 120);
        gridLayoutWidget = new QWidget(ui_ingNombreCarac);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 421, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineaEdit_IngNom = new QLineEdit(gridLayoutWidget);
        lineaEdit_IngNom->setObjectName(QString::fromUtf8("lineaEdit_IngNom"));

        gridLayout->addWidget(lineaEdit_IngNom, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(ui_ingNombreCarac);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 80, 421, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Boton_IngNom_cancelar = new QPushButton(gridLayoutWidget_2);
        Boton_IngNom_cancelar->setObjectName(QString::fromUtf8("Boton_IngNom_cancelar"));

        gridLayout_2->addWidget(Boton_IngNom_cancelar, 0, 3, 1, 1);

        Boton_IngNom_guardar = new QPushButton(gridLayoutWidget_2);
        Boton_IngNom_guardar->setObjectName(QString::fromUtf8("Boton_IngNom_guardar"));

        gridLayout_2->addWidget(Boton_IngNom_guardar, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        retranslateUi(ui_ingNombreCarac);

        QMetaObject::connectSlotsByName(ui_ingNombreCarac);
    } // setupUi

    void retranslateUi(QDialog *ui_ingNombreCarac)
    {
        ui_ingNombreCarac->setWindowTitle(QApplication::translate("ui_ingNombreCarac", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_ingNombreCarac", "Ingrese el Nombre del Atributo", 0, QApplication::UnicodeUTF8));
        Boton_IngNom_cancelar->setText(QApplication::translate("ui_ingNombreCarac", "Cancelar", 0, QApplication::UnicodeUTF8));
        Boton_IngNom_guardar->setText(QApplication::translate("ui_ingNombreCarac", "Guardar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_ingNombreCarac: public Ui_ui_ingNombreCarac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_INGNOMBRECARAC_H
