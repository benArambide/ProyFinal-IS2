/********************************************************************************
** Form generated from reading UI file 'ui_cliente_datos.ui'
**
** Created: Thu Dec 6 18:52:41 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CLIENTE_DATOS_H
#define UI_UI_CLIENTE_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_cliente_datos
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_nroDoc;
    QFrame *line;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_29;
    QLabel *label_16;
    QLabel *label_25;
    QLineEdit *lineEdit_nombres;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_24;
    QLineEdit *lineEdit_telefono;
    QFrame *line_2;
    QLabel *label_28;
    QFrame *line_3;
    QLabel *label_21;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_primerApellido;
    QLineEdit *lineEdit_segundoApellido;
    QLabel *label_19;
    QLineEdit *lineEdit_direccion;
    QComboBox *comboBox_sexo;
    QDateEdit *dateEdit;
    QLabel *label_17;
    QComboBox *comboBox_tipoDoc;
    QLabel *label;
    QLineEdit *celular;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ui_cliente_datos)
    {
        if (ui_cliente_datos->objectName().isEmpty())
            ui_cliente_datos->setObjectName(QString::fromUtf8("ui_cliente_datos"));
        ui_cliente_datos->resize(706, 349);
        gridLayout_3 = new QGridLayout(ui_cliente_datos);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_nroDoc = new QLineEdit(ui_cliente_datos);
        lineEdit_nroDoc->setObjectName(QString::fromUtf8("lineEdit_nroDoc"));

        gridLayout_4->addWidget(lineEdit_nroDoc, 3, 4, 1, 1);

        line = new QFrame(ui_cliente_datos);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 4, 0, 1, 5);

        horizontalSpacer_12 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 4, 1, 1);

        label_29 = new QLabel(ui_cliente_datos);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 2, 3, 1, 1);

        label_16 = new QLabel(ui_cliente_datos);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 3, 1, 1);

        label_25 = new QLabel(ui_cliente_datos);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 1, 0, 1, 1);

        lineEdit_nombres = new QLineEdit(ui_cliente_datos);
        lineEdit_nombres->setObjectName(QString::fromUtf8("lineEdit_nombres"));

        gridLayout_4->addWidget(lineEdit_nombres, 1, 1, 1, 4);

        horizontalSpacer_7 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        label_24 = new QLabel(ui_cliente_datos);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 3, 0, 1, 1);

        lineEdit_telefono = new QLineEdit(ui_cliente_datos);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));

        gridLayout_4->addWidget(lineEdit_telefono, 10, 1, 1, 1);

        line_2 = new QFrame(ui_cliente_datos);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 7, 0, 1, 5);

        label_28 = new QLabel(ui_cliente_datos);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 5, 0, 1, 1);

        line_3 = new QFrame(ui_cliente_datos);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 9, 0, 1, 5);

        label_21 = new QLabel(ui_cliente_datos);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 2, 0, 1, 1);

        label_22 = new QLabel(ui_cliente_datos);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 10, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        lineEdit_primerApellido = new QLineEdit(ui_cliente_datos);
        lineEdit_primerApellido->setObjectName(QString::fromUtf8("lineEdit_primerApellido"));

        gridLayout_4->addWidget(lineEdit_primerApellido, 2, 1, 1, 1);

        lineEdit_segundoApellido = new QLineEdit(ui_cliente_datos);
        lineEdit_segundoApellido->setObjectName(QString::fromUtf8("lineEdit_segundoApellido"));

        gridLayout_4->addWidget(lineEdit_segundoApellido, 2, 4, 1, 1);

        label_19 = new QLabel(ui_cliente_datos);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 8, 0, 1, 1);

        lineEdit_direccion = new QLineEdit(ui_cliente_datos);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        gridLayout_4->addWidget(lineEdit_direccion, 8, 1, 1, 4);

        comboBox_sexo = new QComboBox(ui_cliente_datos);
        comboBox_sexo->setObjectName(QString::fromUtf8("comboBox_sexo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_sexo->sizePolicy().hasHeightForWidth());
        comboBox_sexo->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(comboBox_sexo, 6, 1, 1, 1);

        dateEdit = new QDateEdit(ui_cliente_datos);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy1);
        dateEdit->setCalendarPopup(true);

        gridLayout_4->addWidget(dateEdit, 5, 1, 1, 1);

        label_17 = new QLabel(ui_cliente_datos);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 6, 0, 1, 1);

        comboBox_tipoDoc = new QComboBox(ui_cliente_datos);
        comboBox_tipoDoc->setObjectName(QString::fromUtf8("comboBox_tipoDoc"));

        gridLayout_4->addWidget(comboBox_tipoDoc, 3, 1, 1, 1);

        label = new QLabel(ui_cliente_datos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 10, 3, 1, 1);

        celular = new QLineEdit(ui_cliente_datos);
        celular->setObjectName(QString::fromUtf8("celular"));

        gridLayout_4->addWidget(celular, 10, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Aceptar = new QPushButton(ui_cliente_datos);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout->addWidget(pushButton_Aceptar, 0, 1, 1, 1);

        pushButton_Cancelar = new QPushButton(ui_cliente_datos);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout->addWidget(pushButton_Cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(ui_cliente_datos);

        QMetaObject::connectSlotsByName(ui_cliente_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_cliente_datos)
    {
        ui_cliente_datos->setWindowTitle(QApplication::translate("ui_cliente_datos", "Form", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_cliente_datos", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_cliente_datos", "N\303\272mero de Documento", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_cliente_datos", "Nombres", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_cliente_datos", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_cliente_datos", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ui_cliente_datos", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_cliente_datos", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_cliente_datos", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        comboBox_sexo->clear();
        comboBox_sexo->insertItems(0, QStringList()
         << QApplication::translate("ui_cliente_datos", "Femenino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_cliente_datos", "Masculino", 0, QApplication::UnicodeUTF8)
        );
        label_17->setText(QApplication::translate("ui_cliente_datos", "Sexo", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_cliente_datos", "Celular", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("ui_cliente_datos", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setShortcut(QApplication::translate("ui_cliente_datos", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("ui_cliente_datos", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setShortcut(QApplication::translate("ui_cliente_datos", "Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_cliente_datos: public Ui_ui_cliente_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CLIENTE_DATOS_H
