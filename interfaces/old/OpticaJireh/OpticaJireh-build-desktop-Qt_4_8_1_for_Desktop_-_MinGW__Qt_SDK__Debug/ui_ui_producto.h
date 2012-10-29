/********************************************************************************
** Form generated from reading UI file 'ui_producto.ui'
**
** Created: Thu 20. Sep 07:40:35 2012
**      by: Qt User Interface Compiler version 4.8.1
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_PRODUCTO
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_ModificarProducto;
    QPushButton *pushButton_NuevoProducto;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_DeshabilitarProducto;

    void setupUi(QWidget *UI_PRODUCTO)
    {
        if (UI_PRODUCTO->objectName().isEmpty())
            UI_PRODUCTO->setObjectName(QString::fromUtf8("UI_PRODUCTO"));
        UI_PRODUCTO->resize(850, 450);
        gridLayout_4 = new QGridLayout(UI_PRODUCTO);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 2);

        label = new QLabel(UI_PRODUCTO);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(UI_PRODUCTO);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(UI_PRODUCTO);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        tableWidget = new QTableWidget(UI_PRODUCTO);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(100, 0));
        tableWidget->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(tableWidget, 4, 0, 1, 1);

        tableWidget_2 = new QTableWidget(UI_PRODUCTO);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_3->addWidget(tableWidget_2, 4, 1, 1, 1);

        line = new QFrame(UI_PRODUCTO);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(120, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_ModificarProducto = new QPushButton(UI_PRODUCTO);
        pushButton_ModificarProducto->setObjectName(QString::fromUtf8("pushButton_ModificarProducto"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1348112116_file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ModificarProducto->setIcon(icon);
        pushButton_ModificarProducto->setIconSize(QSize(32, 32));
        pushButton_ModificarProducto->setAutoDefault(false);
        pushButton_ModificarProducto->setDefault(true);
        pushButton_ModificarProducto->setFlat(false);

        gridLayout->addWidget(pushButton_ModificarProducto, 4, 0, 1, 1);

        pushButton_NuevoProducto = new QPushButton(UI_PRODUCTO);
        pushButton_NuevoProducto->setObjectName(QString::fromUtf8("pushButton_NuevoProducto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1348112114_notification_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_NuevoProducto->setIcon(icon1);
        pushButton_NuevoProducto->setIconSize(QSize(32, 32));
        pushButton_NuevoProducto->setDefault(true);
        pushButton_NuevoProducto->setFlat(false);

        gridLayout->addWidget(pushButton_NuevoProducto, 3, 0, 1, 1);

        line_2 = new QFrame(UI_PRODUCTO);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        pushButton_DeshabilitarProducto = new QPushButton(UI_PRODUCTO);
        pushButton_DeshabilitarProducto->setObjectName(QString::fromUtf8("pushButton_DeshabilitarProducto"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/notification_error.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_DeshabilitarProducto->setIcon(icon2);
        pushButton_DeshabilitarProducto->setIconSize(QSize(32, 32));
        pushButton_DeshabilitarProducto->setDefault(true);
        pushButton_DeshabilitarProducto->setFlat(false);

        gridLayout_2->addWidget(pushButton_DeshabilitarProducto, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);


        retranslateUi(UI_PRODUCTO);

        QMetaObject::connectSlotsByName(UI_PRODUCTO);
    } // setupUi

    void retranslateUi(QWidget *UI_PRODUCTO)
    {
        UI_PRODUCTO->setWindowTitle(QApplication::translate("UI_PRODUCTO", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_PRODUCTO", "Producto Seleccionado ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_PRODUCTO", "Lista de Productos ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UI_PRODUCTO", "Categoria", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("UI_PRODUCTO", "Nombre", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("UI_PRODUCTO", "Codigo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("UI_PRODUCTO", "Stock", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("UI_PRODUCTO", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("UI_PRODUCTO", "Descripcion", 0, QApplication::UnicodeUTF8));
        pushButton_ModificarProducto->setText(QApplication::translate("UI_PRODUCTO", "   Editar   ", 0, QApplication::UnicodeUTF8));
        pushButton_ModificarProducto->setShortcut(QApplication::translate("UI_PRODUCTO", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        pushButton_NuevoProducto->setText(QApplication::translate("UI_PRODUCTO", "   Nuevo    ", 0, QApplication::UnicodeUTF8));
        pushButton_NuevoProducto->setShortcut(QApplication::translate("UI_PRODUCTO", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_DeshabilitarProducto->setText(QApplication::translate("UI_PRODUCTO", "   Deshabilitar   ", 0, QApplication::UnicodeUTF8));
        pushButton_DeshabilitarProducto->setShortcut(QApplication::translate("UI_PRODUCTO", "Ctrl+D", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_PRODUCTO: public Ui_UI_PRODUCTO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_H
