/********************************************************************************
** Form generated from reading UI file 'ui_producto.ui'
**
** Created: Thu 18. Oct 08:26:31 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_H
#define UI_UI_PRODUCTO_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QTreeWidget *treeWidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(850, 450);
        gridLayout_13 = new QGridLayout(Form);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);

        gridLayout_10->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(Form);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setFlat(true);

        gridLayout_10->addWidget(pushButton_6, 0, 3, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(Form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(Form);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 0));
        treeWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/Icons/1349716393_monotone_add_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setFlat(true);

        gridLayout_4->addWidget(pushButton_4, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_7, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        tableWidget = new QTableWidget(Form);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 2, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label->setText(QApplication::translate("Form", "Tipo de Producto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "Categoria", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Form", "Opciones", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form", "Lista  de Productos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "Codigo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "Descripcion", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Form", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Form", "Deshabilitar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_H
