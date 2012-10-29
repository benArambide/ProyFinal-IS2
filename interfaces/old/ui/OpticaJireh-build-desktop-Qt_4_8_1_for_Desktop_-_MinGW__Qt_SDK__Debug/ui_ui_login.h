/********************************************************************************
** Form generated from reading UI file 'ui_login.ui'
**
** Created: Tue 18. Sep 12:44:31 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_LOGIN_H
#define UI_UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_LOGIN
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Usuario;
    QLabel *label_2;
    QLineEdit *lineEdit_Password;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Aceptar;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UI_LOGIN)
    {
        if (UI_LOGIN->objectName().isEmpty())
            UI_LOGIN->setObjectName(QString::fromUtf8("UI_LOGIN"));
        UI_LOGIN->resize(290, 110);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UI_LOGIN->sizePolicy().hasHeightForWidth());
        UI_LOGIN->setSizePolicy(sizePolicy);
        UI_LOGIN->setMinimumSize(QSize(290, 110));
        UI_LOGIN->setMaximumSize(QSize(290, 110));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/add-group.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_LOGIN->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(UI_LOGIN);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(UI_LOGIN);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_Usuario = new QLineEdit(UI_LOGIN);
        lineEdit_Usuario->setObjectName(QString::fromUtf8("lineEdit_Usuario"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Usuario->sizePolicy().hasHeightForWidth());
        lineEdit_Usuario->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_Usuario, 0, 2, 1, 1);

        label_2 = new QLabel(UI_LOGIN);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_Password = new QLineEdit(UI_LOGIN);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        sizePolicy1.setHeightForWidth(lineEdit_Password->sizePolicy().hasHeightForWidth());
        lineEdit_Password->setSizePolicy(sizePolicy1);
        QFont font;
        font.setStrikeOut(false);
        lineEdit_Password->setFont(font);
        lineEdit_Password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_Password, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Cancelar = new QPushButton(UI_LOGIN);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout->addWidget(pushButton_Cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton_Aceptar = new QPushButton(UI_LOGIN);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout->addWidget(pushButton_Aceptar, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(UI_LOGIN);

        QMetaObject::connectSlotsByName(UI_LOGIN);
    } // setupUi

    void retranslateUi(QWidget *UI_LOGIN)
    {
        UI_LOGIN->setWindowTitle(QApplication::translate("UI_LOGIN", "Inicio de Sesi\303\263n", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_LOGIN", "Usuario ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_LOGIN", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("UI_LOGIN", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setShortcut(QApplication::translate("UI_LOGIN", "Esc", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("UI_LOGIN", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setShortcut(QApplication::translate("UI_LOGIN", "Return", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_LOGIN: public Ui_UI_LOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_LOGIN_H
