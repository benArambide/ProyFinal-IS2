/********************************************************************************
** Form generated from reading UI file 'ui_user.ui'
**
** Created: Tue 18. Sep 12:02:20 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_USER_H
#define UI_UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_USER
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *UI_USER)
    {
        if (UI_USER->objectName().isEmpty())
            UI_USER->setObjectName(QString::fromUtf8("UI_USER"));
        UI_USER->resize(722, 406);
        widget = new QWidget(UI_USER);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(580, 120, 141, 134));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/notification_done.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);


        retranslateUi(UI_USER);

        QMetaObject::connectSlotsByName(UI_USER);
    } // setupUi

    void retranslateUi(QWidget *UI_USER)
    {
        UI_USER->setWindowTitle(QApplication::translate("UI_USER", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("UI_USER", "Nuevo Usuario", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("UI_USER", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("UI_USER", "Editar Usuario", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("UI_USER", "Deshabilitar Usuario", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_USER: public Ui_UI_USER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_USER_H
