/********************************************************************************
** Form generated from reading UI file 'ui_tienda.ui'
**
** Created: Tue 18. Dec 22:47:57 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TIENDA_H
#define UI_UI_TIENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_tienda
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *List;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *ver_vitrina;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ui_tienda)
    {
        if (ui_tienda->objectName().isEmpty())
            ui_tienda->setObjectName(QString::fromUtf8("ui_tienda"));
        ui_tienda->resize(850, 450);
        gridLayout_7 = new QGridLayout(ui_tienda);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));

        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(ui_tienda);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ui_tienda);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        List = new QWidget();
        List->setObjectName(QString::fromUtf8("List"));
        gridLayout_5 = new QGridLayout(List);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(List);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(List);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(List);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);

        ver_vitrina = new QPushButton(List);
        ver_vitrina->setObjectName(QString::fromUtf8("ver_vitrina"));
        ver_vitrina->setFlat(true);

        gridLayout->addWidget(ver_vitrina, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(List);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 5, 1, 1);

        pushButton_7 = new QPushButton(List);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716391_monotone_printer_hardware.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setFlat(true);

        gridLayout->addWidget(pushButton_7, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        tableView = new QTableView(List);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(List, QString());

        gridLayout_6->addWidget(tabWidget, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(ui_tienda);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_tienda);
    } // setupUi

    void retranslateUi(QWidget *ui_tienda)
    {
        ui_tienda->setWindowTitle(QApplication::translate("ui_tienda", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_tienda", "Lista de Tiendas", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_tienda", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_tienda", "Editar", 0, QApplication::UnicodeUTF8));
        ver_vitrina->setText(QApplication::translate("ui_tienda", "Ver Vitrinas", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_tienda", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ui_tienda", "Imprimir Productos", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(List), QApplication::translate("ui_tienda", "Lista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tienda: public Ui_ui_tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TIENDA_H
