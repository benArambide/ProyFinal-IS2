/********************************************************************************
** Form generated from reading UI file 'ui_data_client.ui'
**
** Created: Fri Oct 5 08:15:50 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DATA_CLIENT_H
#define UI_UI_DATA_CLIENT_H

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

class Ui_UI_DATA_CLIENT
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_25;
    QLineEdit *lineEdit_13;
    QLabel *label_21;
    QLineEdit *lineEdit_10;
    QLabel *label_29;
    QLineEdit *lineEdit_16;
    QLabel *label_24;
    QLineEdit *lineEdit_9;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QFrame *line;
    QLabel *label_28;
    QDateEdit *dateEdit_2;
    QLabel *label_17;
    QComboBox *comboBox_8;
    QLabel *label_20;
    QComboBox *comboBox_10;
    QFrame *line_2;
    QLabel *label_23;
    QComboBox *comboBox_7;
    QLabel *label_18;
    QComboBox *comboBox_9;
    QLabel *label_26;
    QComboBox *comboBox_6;
    QLabel *label_19;
    QLineEdit *lineEdit_12;
    QFrame *line_3;
    QLabel *label_22;
    QLineEdit *lineEdit_15;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UI_DATA_CLIENT)
    {
        if (UI_DATA_CLIENT->objectName().isEmpty())
            UI_DATA_CLIENT->setObjectName(QString::fromUtf8("UI_DATA_CLIENT"));
        UI_DATA_CLIENT->resize(684, 325);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1329798560_animation.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_DATA_CLIENT->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(UI_DATA_CLIENT);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 0, 4, 1, 1);

        label_25 = new QLabel(UI_DATA_CLIENT);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 1, 0, 1, 1);

        lineEdit_13 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        gridLayout_4->addWidget(lineEdit_13, 1, 1, 1, 4);

        label_21 = new QLabel(UI_DATA_CLIENT);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_4->addWidget(label_21, 2, 0, 1, 1);

        lineEdit_10 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout_4->addWidget(lineEdit_10, 2, 1, 1, 1);

        label_29 = new QLabel(UI_DATA_CLIENT);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 2, 3, 1, 1);

        lineEdit_16 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));

        gridLayout_4->addWidget(lineEdit_16, 2, 4, 1, 1);

        label_24 = new QLabel(UI_DATA_CLIENT);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 3, 0, 1, 1);

        lineEdit_9 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout_4->addWidget(lineEdit_9, 3, 1, 1, 1);

        label_16 = new QLabel(UI_DATA_CLIENT);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 3, 3, 1, 1);

        lineEdit_14 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        gridLayout_4->addWidget(lineEdit_14, 3, 4, 1, 1);

        line = new QFrame(UI_DATA_CLIENT);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 4, 0, 1, 5);

        label_28 = new QLabel(UI_DATA_CLIENT);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 5, 0, 1, 1);

        dateEdit_2 = new QDateEdit(UI_DATA_CLIENT);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit_2->sizePolicy().hasHeightForWidth());
        dateEdit_2->setSizePolicy(sizePolicy);
        dateEdit_2->setCalendarPopup(true);

        gridLayout_4->addWidget(dateEdit_2, 5, 1, 1, 1);

        label_17 = new QLabel(UI_DATA_CLIENT);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 6, 0, 1, 1);

        comboBox_8 = new QComboBox(UI_DATA_CLIENT);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_8->sizePolicy().hasHeightForWidth());
        comboBox_8->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboBox_8, 6, 1, 1, 1);

        label_20 = new QLabel(UI_DATA_CLIENT);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_20, 6, 3, 1, 1);

        comboBox_10 = new QComboBox(UI_DATA_CLIENT);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));
        sizePolicy1.setHeightForWidth(comboBox_10->sizePolicy().hasHeightForWidth());
        comboBox_10->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboBox_10, 6, 4, 1, 1);

        line_2 = new QFrame(UI_DATA_CLIENT);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 7, 0, 1, 5);

        label_23 = new QLabel(UI_DATA_CLIENT);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 8, 0, 1, 1);

        comboBox_7 = new QComboBox(UI_DATA_CLIENT);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        sizePolicy1.setHeightForWidth(comboBox_7->sizePolicy().hasHeightForWidth());
        comboBox_7->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboBox_7, 8, 1, 1, 1);

        label_18 = new QLabel(UI_DATA_CLIENT);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 8, 3, 1, 1);

        comboBox_9 = new QComboBox(UI_DATA_CLIENT);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        sizePolicy1.setHeightForWidth(comboBox_9->sizePolicy().hasHeightForWidth());
        comboBox_9->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboBox_9, 8, 4, 1, 1);

        label_26 = new QLabel(UI_DATA_CLIENT);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_4->addWidget(label_26, 9, 0, 1, 1);

        comboBox_6 = new QComboBox(UI_DATA_CLIENT);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        sizePolicy1.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(comboBox_6, 9, 1, 1, 1);

        label_19 = new QLabel(UI_DATA_CLIENT);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 10, 0, 1, 1);

        lineEdit_12 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        gridLayout_4->addWidget(lineEdit_12, 10, 1, 1, 4);

        line_3 = new QFrame(UI_DATA_CLIENT);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 11, 0, 1, 5);

        label_22 = new QLabel(UI_DATA_CLIENT);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 12, 0, 1, 1);

        lineEdit_15 = new QLineEdit(UI_DATA_CLIENT);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        gridLayout_4->addWidget(lineEdit_15, 12, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Aceptar = new QPushButton(UI_DATA_CLIENT);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout->addWidget(pushButton_Aceptar, 0, 1, 1, 1);

        pushButton_Cancelar = new QPushButton(UI_DATA_CLIENT);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout->addWidget(pushButton_Cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(UI_DATA_CLIENT);

        QMetaObject::connectSlotsByName(UI_DATA_CLIENT);
    } // setupUi

    void retranslateUi(QWidget *UI_DATA_CLIENT)
    {
        UI_DATA_CLIENT->setWindowTitle(QApplication::translate("UI_DATA_CLIENT", "Form", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("UI_DATA_CLIENT", "Nombres", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("UI_DATA_CLIENT", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("UI_DATA_CLIENT", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("UI_DATA_CLIENT", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("UI_DATA_CLIENT", "N\303\272mero de Documento", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("UI_DATA_CLIENT", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("UI_DATA_CLIENT", "Sexo", 0, QApplication::UnicodeUTF8));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("UI_DATA_CLIENT", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_DATA_CLIENT", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_20->setText(QApplication::translate("UI_DATA_CLIENT", "Estado Civil", 0, QApplication::UnicodeUTF8));
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("UI_DATA_CLIENT", "Soltero/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_DATA_CLIENT", "Casado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_DATA_CLIENT", "Viudo/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_DATA_CLIENT", "Divorciado/a", 0, QApplication::UnicodeUTF8)
        );
        label_23->setText(QApplication::translate("UI_DATA_CLIENT", "Departamento", 0, QApplication::UnicodeUTF8));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("UI_DATA_CLIENT", "Arequipa", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("UI_DATA_CLIENT", "Provincia", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("UI_DATA_CLIENT", "Distrito", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("UI_DATA_CLIENT", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("UI_DATA_CLIENT", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("UI_DATA_CLIENT", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("UI_DATA_CLIENT", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_DATA_CLIENT: public Ui_UI_DATA_CLIENT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DATA_CLIENT_H
