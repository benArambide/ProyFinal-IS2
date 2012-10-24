/********************************************************************************
** Form generated from reading UI file 'ui_ingnomobscarac.ui'
**
** Created: Tue Oct 23 20:00:15 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_INGNOMOBSCARAC_H
#define UI_UI_INGNOMOBSCARAC_H

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
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_ingNomObsCarac
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineaEdit_Nom;
    QTextEdit *textEdit_Des;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Boton_IngNomObs_cancelar;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Boton_IngNomObs_guardar;

    void setupUi(QDialog *ui_ingNomObsCarac)
    {
        if (ui_ingNomObsCarac->objectName().isEmpty())
            ui_ingNomObsCarac->setObjectName(QString::fromUtf8("ui_ingNomObsCarac"));
        ui_ingNomObsCarac->resize(439, 316);
        gridLayoutWidget = new QWidget(ui_ingNomObsCarac);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 421, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineaEdit_Nom = new QLineEdit(gridLayoutWidget);
        lineaEdit_Nom->setObjectName(QString::fromUtf8("lineaEdit_Nom"));

        gridLayout->addWidget(lineaEdit_Nom, 2, 0, 1, 1);

        textEdit_Des = new QTextEdit(gridLayoutWidget);
        textEdit_Des->setObjectName(QString::fromUtf8("textEdit_Des"));

        gridLayout->addWidget(textEdit_Des, 5, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(ui_ingNomObsCarac);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 260, 421, 55));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Boton_IngNomObs_cancelar = new QPushButton(gridLayoutWidget_2);
        Boton_IngNomObs_cancelar->setObjectName(QString::fromUtf8("Boton_IngNomObs_cancelar"));

        gridLayout_2->addWidget(Boton_IngNomObs_cancelar, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        Boton_IngNomObs_guardar = new QPushButton(gridLayoutWidget_2);
        Boton_IngNomObs_guardar->setObjectName(QString::fromUtf8("Boton_IngNomObs_guardar"));

        gridLayout_2->addWidget(Boton_IngNomObs_guardar, 1, 1, 1, 1);


        retranslateUi(ui_ingNomObsCarac);

        QMetaObject::connectSlotsByName(ui_ingNomObsCarac);
    } // setupUi

    void retranslateUi(QDialog *ui_ingNomObsCarac)
    {
        ui_ingNomObsCarac->setWindowTitle(QApplication::translate("ui_ingNomObsCarac", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_ingNomObsCarac", "Ingrese el Nombre del Atributo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_ingNomObsCarac", "Ingrese la Descripsion del Atributo", 0, QApplication::UnicodeUTF8));
        Boton_IngNomObs_cancelar->setText(QApplication::translate("ui_ingNomObsCarac", "Cancelar", 0, QApplication::UnicodeUTF8));
        Boton_IngNomObs_cancelar->setShortcut(QApplication::translate("ui_ingNomObsCarac", "Esc", 0, QApplication::UnicodeUTF8));
        Boton_IngNomObs_guardar->setText(QApplication::translate("ui_ingNomObsCarac", "Guardar", 0, QApplication::UnicodeUTF8));
        Boton_IngNomObs_guardar->setShortcut(QApplication::translate("ui_ingNomObsCarac", "Ctrl+G", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_ingNomObsCarac: public Ui_ui_ingNomObsCarac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_INGNOMOBSCARAC_H
