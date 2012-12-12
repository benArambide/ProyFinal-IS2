/********************************************************************************
** Form generated from reading UI file 'ui_almacen.ui'
**
** Created: Tue Dec 11 20:51:03 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ALMACEN_H
#define UI_UI_ALMACEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_almacen
{
public:
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QTableView *tableView;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;

    void setupUi(QWidget *ui_almacen)
    {
        if (ui_almacen->objectName().isEmpty())
            ui_almacen->setObjectName(QString::fromUtf8("ui_almacen"));
        ui_almacen->resize(850, 450);
        gridLayout_9 = new QGridLayout(ui_almacen);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(ui_almacen);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setDefault(false);
        pushButton_4->setFlat(true);

        gridLayout_2->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_5 = new QPushButton(ui_almacen);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setFlat(true);

        gridLayout_2->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(ui_almacen);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setFlat(true);

        gridLayout_2->addWidget(pushButton_6, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(ui_almacen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        comboBox = new QComboBox(ui_almacen);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBox, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(ui_almacen);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font;
        font.setKerning(true);
        treeWidget->setFont(font);
        treeWidget->setItemsExpandable(true);
        treeWidget->header()->setVisible(false);

        gridLayout_5->addWidget(treeWidget, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableView = new QTableView(ui_almacen);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_4->addWidget(tableView, 1, 0, 1, 1);

        label_2 = new QLabel(ui_almacen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton = new QPushButton(ui_almacen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setIcon(icon2);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(ui_almacen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(ui_almacen);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setIcon(icon);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 2, 1, 1);

        line = new QFrame(ui_almacen);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        retranslateUi(ui_almacen);

        QMetaObject::connectSlotsByName(ui_almacen);
    } // setupUi

    void retranslateUi(QWidget *ui_almacen)
    {
        ui_almacen->setWindowTitle(QApplication::translate("ui_almacen", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_3->setText(QApplication::translate("ui_almacen", "Empresa :", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ui_almacen", "Empresa 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_almacen", "Empresa 2", 0, QApplication::UnicodeUTF8)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_almacen", "Empresas", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_almacen", "Lista de Productos", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_almacen", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("ui_almacen", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_almacen", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("ui_almacen", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_almacen", "Eliminar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("ui_almacen", "Del", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_almacen: public Ui_ui_almacen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ALMACEN_H
