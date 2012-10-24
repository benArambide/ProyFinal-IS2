/********************************************************************************
** Form generated from reading UI file 'ui_status_bar.ui'
**
** Created: Tue Oct 23 20:00:15 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_STATUS_BAR_H
#define UI_UI_STATUS_BAR_H

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

class Ui_UI_STATUS_BAR
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_Mensaje;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Buscar;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_Buscar;
    QPushButton *pushButton_BusquedaAvanzada;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *UI_STATUS_BAR)
    {
        if (UI_STATUS_BAR->objectName().isEmpty())
            UI_STATUS_BAR->setObjectName(QString::fromUtf8("UI_STATUS_BAR"));
        UI_STATUS_BAR->resize(1759, 28);
        UI_STATUS_BAR->setCursor(QCursor(Qt::ArrowCursor));
        gridLayout_2 = new QGridLayout(UI_STATUS_BAR);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Mensaje = new QLabel(UI_STATUS_BAR);
        label_Mensaje->setObjectName(QString::fromUtf8("label_Mensaje"));
        QPalette palette;
        QBrush brush(QColor(106, 106, 106, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_Mensaje->setPalette(palette);
        label_Mensaje->setScaledContents(false);
        label_Mensaje->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_Mensaje, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(1000, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        label_3 = new QLabel(UI_STATUS_BAR);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        lineEdit_Buscar = new QLineEdit(UI_STATUS_BAR);
        lineEdit_Buscar->setObjectName(QString::fromUtf8("lineEdit_Buscar"));
        lineEdit_Buscar->setMinimumSize(QSize(300, 0));
        lineEdit_Buscar->setMaximumSize(QSize(300, 16777215));
        lineEdit_Buscar->setCursor(QCursor(Qt::IBeamCursor));

        gridLayout->addWidget(lineEdit_Buscar, 0, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_Buscar = new QPushButton(UI_STATUS_BAR);
        pushButton_Buscar->setObjectName(QString::fromUtf8("pushButton_Buscar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Buscar->sizePolicy().hasHeightForWidth());
        pushButton_Buscar->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349145121_Black_Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Buscar->setIcon(icon);
        pushButton_Buscar->setCheckable(false);
        pushButton_Buscar->setFlat(true);

        gridLayout_5->addWidget(pushButton_Buscar, 0, 1, 1, 1);

        pushButton_BusquedaAvanzada = new QPushButton(UI_STATUS_BAR);
        pushButton_BusquedaAvanzada->setObjectName(QString::fromUtf8("pushButton_BusquedaAvanzada"));
        sizePolicy.setHeightForWidth(pushButton_BusquedaAvanzada->sizePolicy().hasHeightForWidth());
        pushButton_BusquedaAvanzada->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349145287_Black_Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_BusquedaAvanzada->setIcon(icon1);
        pushButton_BusquedaAvanzada->setFlat(true);

        gridLayout_5->addWidget(pushButton_BusquedaAvanzada, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_5, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(120, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(UI_STATUS_BAR);

        QMetaObject::connectSlotsByName(UI_STATUS_BAR);
    } // setupUi

    void retranslateUi(QWidget *UI_STATUS_BAR)
    {
        UI_STATUS_BAR->setWindowTitle(QApplication::translate("UI_STATUS_BAR", "Form", 0, QApplication::UnicodeUTF8));
        label_Mensaje->setText(QApplication::translate("UI_STATUS_BAR", "User 001 - Last Sesion 07/05/1991 . . . more information here . . .", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UI_STATUS_BAR", "Buscar ", 0, QApplication::UnicodeUTF8));
        pushButton_Buscar->setText(QString());
        pushButton_BusquedaAvanzada->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UI_STATUS_BAR: public Ui_UI_STATUS_BAR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_STATUS_BAR_H
