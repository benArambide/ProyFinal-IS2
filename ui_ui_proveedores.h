/********************************************************************************
** Form generated from reading UI file 'ui_proveedores.ui'
**
** Created: Sat 1. Dec 11:41:08 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PROVEEDORES_H
#define UI_UI_PROVEEDORES_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_proveedores
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox_2;
    QTreeWidget *treeWidget_2;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_15;
    QLabel *label_5;
    QGridLayout *gridLayout_16;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QTableWidget *tableWidget_2;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_2;

    void setupUi(QWidget *ui_proveedores)
    {
        if (ui_proveedores->objectName().isEmpty())
            ui_proveedores->setObjectName(QString::fromUtf8("ui_proveedores"));
        ui_proveedores->resize(850, 450);
        layoutWidget = new QWidget(ui_proveedores);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 841, 441));
        gridLayout_9 = new QGridLayout(layoutWidget);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_12->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(18, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);

        gridLayout_12->addWidget(comboBox_2, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);

        treeWidget_2 = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget_2);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(treeWidget_2);
        treeWidget_2->setObjectName(QString::fromUtf8("treeWidget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget_2->sizePolicy().hasHeightForWidth());
        treeWidget_2->setSizePolicy(sizePolicy1);
        treeWidget_2->setMaximumSize(QSize(200, 16777215));
        treeWidget_2->header()->setVisible(false);

        gridLayout_11->addWidget(treeWidget_2, 1, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setAutoDefault(false);
        pushButton_7->setDefault(false);
        pushButton_7->setFlat(true);

        gridLayout_13->addWidget(pushButton_7, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_8->setFlat(true);

        gridLayout_13->addWidget(pushButton_8, 0, 2, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon2);
        pushButton_9->setFlat(true);

        gridLayout_13->addWidget(pushButton_9, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 2, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_8, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(label_5, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        horizontalSpacer_9 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setIcon(icon2);
        pushButton_10->setFlat(true);

        gridLayout_16->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setIcon(icon1);
        pushButton_11->setFlat(true);

        gridLayout_16->addWidget(pushButton_11, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setIcon(icon);
        pushButton_12->setFlat(true);

        gridLayout_16->addWidget(pushButton_12, 0, 3, 1, 1);


        gridLayout_15->addLayout(gridLayout_16, 2, 0, 1, 1);

        tableWidget_2 = new QTableWidget(layoutWidget);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_15->addWidget(tableWidget_2, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_15, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_10, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_14, 0, 2, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 0, 1, 1, 1);


        retranslateUi(ui_proveedores);

        QMetaObject::connectSlotsByName(ui_proveedores);
    } // setupUi

    void retranslateUi(QWidget *ui_proveedores)
    {
        ui_proveedores->setWindowTitle(QApplication::translate("ui_proveedores", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_proveedores", "Empresa :", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ui_proveedores", "Empresa 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_proveedores", "Empresa 2", 0, QApplication::UnicodeUTF8)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ui_proveedores", "Empresas", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget_2->isSortingEnabled();
        treeWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_2->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("ui_proveedores", "Tienda 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("ui_proveedores", "Almacen 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("ui_proveedores", "Contenedor 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("ui_proveedores", "Contenedor 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("ui_proveedores", "Contenedor 3", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem6->setText(0, QApplication::translate("ui_proveedores", "Almacen 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("ui_proveedores", "Contenedor 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget_2->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("ui_proveedores", "Tienda 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("ui_proveedores", "Almacen 1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget_2->topLevelItem(2);
        ___qtreewidgetitem10->setText(0, QApplication::translate("ui_proveedores", "Tienda 3", 0, QApplication::UnicodeUTF8));
        treeWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_5->setText(QApplication::translate("ui_proveedores", "Lista de Productos", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("ui_proveedores", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_10->setShortcut(QApplication::translate("ui_proveedores", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("ui_proveedores", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_11->setShortcut(QApplication::translate("ui_proveedores", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("ui_proveedores", "Eliminar", 0, QApplication::UnicodeUTF8));
        pushButton_12->setShortcut(QApplication::translate("ui_proveedores", "Del", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_proveedores", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_proveedores", "Codigo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_proveedores", "Calidad", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_proveedores: public Ui_ui_proveedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PROVEEDORES_H
