/********************************************************************************
** Form generated from reading UI file 'ui_cambiarpassdialog.ui'
**
** Created: Tue Oct 23 20:23:50 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CAMBIARPASSDIALOG_H
#define UI_UI_CAMBIARPASSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_cambiarPassDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_nuevoPass;
    QLineEdit *lineEdit_confPass;
    QLabel *label_3;

    void setupUi(QDialog *ui_cambiarPassDialog)
    {
        if (ui_cambiarPassDialog->objectName().isEmpty())
            ui_cambiarPassDialog->setObjectName(QString::fromUtf8("ui_cambiarPassDialog"));
        ui_cambiarPassDialog->resize(413, 288);
        buttonBox = new QDialogButtonBox(ui_cambiarPassDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        layoutWidget = new QWidget(ui_cambiarPassDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 60, 411, 171));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_nuevoPass = new QLineEdit(layoutWidget);
        lineEdit_nuevoPass->setObjectName(QString::fromUtf8("lineEdit_nuevoPass"));
        lineEdit_nuevoPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(lineEdit_nuevoPass, 0, 3, 1, 1);

        lineEdit_confPass = new QLineEdit(layoutWidget);
        lineEdit_confPass->setObjectName(QString::fromUtf8("lineEdit_confPass"));
        lineEdit_confPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_2->addWidget(lineEdit_confPass, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        label_3 = new QLabel(ui_cambiarPassDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 381, 41));
        label_3->setWordWrap(true);

        retranslateUi(ui_cambiarPassDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ui_cambiarPassDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ui_cambiarPassDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ui_cambiarPassDialog);
    } // setupUi

    void retranslateUi(QDialog *ui_cambiarPassDialog)
    {
        ui_cambiarPassDialog->setWindowTitle(QApplication::translate("ui_cambiarPassDialog", "Cambiar Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_cambiarPassDialog", "Nueva Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_cambiarPassDialog", "Confirmar Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_cambiarPassDialog", "Se necesita que cambie su contrase\303\261a y no podr\303\241 iniciar sesion hasta que cambie su contrase\303\261a correctamente", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_cambiarPassDialog: public Ui_ui_cambiarPassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CAMBIARPASSDIALOG_H
