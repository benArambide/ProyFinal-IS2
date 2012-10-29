/********************************************************************************
** Form generated from reading UI file 'ui_new_user.ui'
**
** Created: Tue 18. Sep 11:56:59 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_NEW_USER_H
#define UI_UI_NEW_USER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_NEW_USER
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QLabel *label_10;
    QComboBox *comboBox_4;
    QLabel *label_14;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QLineEdit *lineEdit_8;
    QTextEdit *textEdit;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UI_NEW_USER)
    {
        if (UI_NEW_USER->objectName().isEmpty())
            UI_NEW_USER->setObjectName(QString::fromUtf8("UI_NEW_USER"));
        UI_NEW_USER->resize(640, 329);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/user-group-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_NEW_USER->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(UI_NEW_USER);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(UI_NEW_USER);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_3 = new QLabel(UI_NEW_USER);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(UI_NEW_USER);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_6 = new QLabel(UI_NEW_USER);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_9 = new QLabel(UI_NEW_USER);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 5, 0, 1, 1);

        label_11 = new QLabel(UI_NEW_USER);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 6, 0, 1, 1);

        label_12 = new QLabel(UI_NEW_USER);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 7, 0, 1, 1);

        label_15 = new QLabel(UI_NEW_USER);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 8, 0, 1, 1);

        lineEdit_2 = new QLineEdit(UI_NEW_USER);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_2 = new QLabel(UI_NEW_USER);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        lineEdit_3 = new QLineEdit(UI_NEW_USER);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 1, 4, 1, 1);

        label_5 = new QLabel(UI_NEW_USER);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 3, 1, 1);

        lineEdit_5 = new QLineEdit(UI_NEW_USER);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 2, 4, 1, 1);

        lineEdit_4 = new QLineEdit(UI_NEW_USER);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 2, 2, 1, 1);

        lineEdit = new QLineEdit(UI_NEW_USER);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 2, 1, 5);

        lineEdit_6 = new QLineEdit(UI_NEW_USER);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 5, 2, 1, 1);

        comboBox_2 = new QComboBox(UI_NEW_USER);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_2, 4, 2, 1, 1);

        label_7 = new QLabel(UI_NEW_USER);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 4, 3, 1, 1);

        comboBox_3 = new QComboBox(UI_NEW_USER);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_3, 4, 4, 1, 1);

        label_8 = new QLabel(UI_NEW_USER);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 5, 1, 1);

        comboBox = new QComboBox(UI_NEW_USER);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 4, 6, 1, 1);

        dateEdit = new QDateEdit(UI_NEW_USER);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit, 6, 2, 1, 1);

        label_10 = new QLabel(UI_NEW_USER);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 6, 3, 1, 1);

        comboBox_4 = new QComboBox(UI_NEW_USER);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        sizePolicy.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_4, 6, 4, 1, 1);

        label_14 = new QLabel(UI_NEW_USER);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_14, 6, 5, 1, 1);

        comboBox_5 = new QComboBox(UI_NEW_USER);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        sizePolicy.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_5, 6, 6, 1, 1);

        lineEdit_7 = new QLineEdit(UI_NEW_USER);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout_2->addWidget(lineEdit_7, 7, 2, 1, 1);

        label_13 = new QLabel(UI_NEW_USER);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 7, 3, 1, 1);

        lineEdit_8 = new QLineEdit(UI_NEW_USER);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout_2->addWidget(lineEdit_8, 7, 4, 1, 1);

        textEdit = new QTextEdit(UI_NEW_USER);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(textEdit, 9, 0, 1, 7);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(UI_NEW_USER);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(UI_NEW_USER);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_3);
        QWidget::setTabOrder(comboBox_3, comboBox);
        QWidget::setTabOrder(comboBox, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, dateEdit);
        QWidget::setTabOrder(dateEdit, comboBox_4);
        QWidget::setTabOrder(comboBox_4, comboBox_5);
        QWidget::setTabOrder(comboBox_5, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, textEdit);
        QWidget::setTabOrder(textEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(UI_NEW_USER);

        QMetaObject::connectSlotsByName(UI_NEW_USER);
    } // setupUi

    void retranslateUi(QWidget *UI_NEW_USER)
    {
        UI_NEW_USER->setWindowTitle(QApplication::translate("UI_NEW_USER", "Nuevo Usuario", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_NEW_USER", "Nombre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UI_NEW_USER", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UI_NEW_USER", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UI_NEW_USER", "Departamento", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("UI_NEW_USER", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("UI_NEW_USER", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("UI_NEW_USER", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("UI_NEW_USER", "Observaciones", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_NEW_USER", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UI_NEW_USER", "N\303\272mero de Documento", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("UI_NEW_USER", "Arequipa", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("UI_NEW_USER", "Provincia", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("UI_NEW_USER", "Distrito", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("UI_NEW_USER", "Sexo", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("UI_NEW_USER", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_NEW_USER", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_14->setText(QApplication::translate("UI_NEW_USER", "Estado Civil", 0, QApplication::UnicodeUTF8));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("UI_NEW_USER", "Soltero/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_NEW_USER", "Casado/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_NEW_USER", "Viudo/a", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("UI_NEW_USER", "Divorciado/a", 0, QApplication::UnicodeUTF8)
        );
        label_13->setText(QApplication::translate("UI_NEW_USER", "Celular", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("UI_NEW_USER", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("UI_NEW_USER", "Return", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("UI_NEW_USER", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("UI_NEW_USER", "Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_NEW_USER: public Ui_UI_NEW_USER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_NEW_USER_H
