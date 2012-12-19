/********************************************************************************
** Form generated from reading UI file 'compras.ui'
**
** Created: Wed 19. Dec 09:28:17 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRAS_H
#define UI_COMPRAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_compras
{
public:
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *List;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *details;

    void setupUi(QWidget *compras)
    {
        if (compras->objectName().isEmpty())
            compras->setObjectName(QString::fromUtf8("compras"));
        compras->resize(687, 382);
        gridLayout_5 = new QGridLayout(compras);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_3 = new QLabel(compras);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(compras);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(compras);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);

        gridLayout_10->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(compras);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setFlat(true);

        gridLayout_10->addWidget(pushButton_6, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_10, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(147, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        line = new QFrame(compras);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 3);

        tabWidget = new QTabWidget(compras);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        List = new QWidget();
        List->setObjectName(QString::fromUtf8("List"));
        gridLayout_6 = new QGridLayout(List);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
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

        tableView = new QTableView(List);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton = new QPushButton(List);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(List);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(List);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(List, QString());
        details = new QWidget();
        details->setObjectName(QString::fromUtf8("details"));
        tabWidget->addTab(details, QString());

        gridLayout_5->addWidget(tabWidget, 2, 0, 1, 3);


        retranslateUi(compras);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(compras);
    } // setupUi

    void retranslateUi(QWidget *compras)
    {
        compras->setWindowTitle(QApplication::translate("compras", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("compras", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("compras", "Lista de Compras", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("compras", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("compras", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("compras", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(List), QApplication::translate("compras", "Lista", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(details), QApplication::translate("compras", "Detalles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class compras: public Ui_compras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRAS_H
