/********************************************************************************
** Form generated from reading UI file 'ui_producto.ui'
**
** Created: Tue Oct 23 20:00:15 2012
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_H
#define UI_UI_PRODUCTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_PRODUCTO
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab_lista;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_5;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_detalle;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QComboBox *marcaComboBox;
    QLabel *label_3;
    QLineEdit *descripcionLineEdit;
    QLabel *marcaLabel;
    QLabel *descripcionLabel;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QPushButton *Configurar_producto;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *UI_PRODUCTO)
    {
        if (UI_PRODUCTO->objectName().isEmpty())
            UI_PRODUCTO->setObjectName(QString::fromUtf8("UI_PRODUCTO"));
        UI_PRODUCTO->resize(1028, 526);
        gridLayout_4 = new QGridLayout(UI_PRODUCTO);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(UI_PRODUCTO);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        line = new QFrame(UI_PRODUCTO);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 2);

        tabWidget = new QTabWidget(UI_PRODUCTO);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_lista = new QWidget();
        tab_lista->setObjectName(QString::fromUtf8("tab_lista"));
        gridLayoutWidget = new QWidget(tab_lista);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 841, 421));
        gridLayout_5 = new QGridLayout(gridLayoutWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tableView_2 = new QTableView(gridLayoutWidget);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView_2->sizePolicy().hasHeightForWidth());
        tableView_2->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(tableView_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(2, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        tabWidget->addTab(tab_lista, QString());
        tab_detalle = new QWidget();
        tab_detalle->setObjectName(QString::fromUtf8("tab_detalle"));
        gridLayoutWidget_2 = new QWidget(tab_detalle);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 10, 671, 127));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 4, 1, 1);

        marcaComboBox = new QComboBox(gridLayoutWidget_2);
        marcaComboBox->setObjectName(QString::fromUtf8("marcaComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(marcaComboBox->sizePolicy().hasHeightForWidth());
        marcaComboBox->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(marcaComboBox, 0, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        descripcionLineEdit = new QLineEdit(gridLayoutWidget_2);
        descripcionLineEdit->setObjectName(QString::fromUtf8("descripcionLineEdit"));
        descripcionLineEdit->setMaxLength(150);

        gridLayout_7->addWidget(descripcionLineEdit, 1, 1, 1, 5);

        marcaLabel = new QLabel(gridLayoutWidget_2);
        marcaLabel->setObjectName(QString::fromUtf8("marcaLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(marcaLabel->sizePolicy().hasHeightForWidth());
        marcaLabel->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(marcaLabel, 0, 2, 1, 1);

        descripcionLabel = new QLabel(gridLayoutWidget_2);
        descripcionLabel->setObjectName(QString::fromUtf8("descripcionLabel"));

        gridLayout_7->addWidget(descripcionLabel, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaxLength(15);

        gridLayout_7->addWidget(lineEdit_2, 0, 1, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(comboBox, 0, 5, 1, 1);

        Configurar_producto = new QPushButton(tab_detalle);
        Configurar_producto->setObjectName(QString::fromUtf8("Configurar_producto"));
        Configurar_producto->setGeometry(QRect(690, 10, 155, 27));
        tabWidget->addTab(tab_detalle, QString());

        gridLayout_3->addWidget(tabWidget, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 2);

        tableWidget = new QTableWidget(UI_PRODUCTO);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(100, 0));
        tableWidget->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(tableWidget, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        descripcionLabel->setBuddy(descripcionLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UI_PRODUCTO);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UI_PRODUCTO);
    } // setupUi

    void retranslateUi(QWidget *UI_PRODUCTO)
    {
        UI_PRODUCTO->setWindowTitle(QApplication::translate("UI_PRODUCTO", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_PRODUCTO", "Lista de Productos ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_lista), QApplication::translate("UI_PRODUCTO", "Lista", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UI_PRODUCTO", "Categor\303\255a", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UI_PRODUCTO", "C\303\263digo :", 0, QApplication::UnicodeUTF8));
        marcaLabel->setText(QApplication::translate("UI_PRODUCTO", "Marca :", 0, QApplication::UnicodeUTF8));
        descripcionLabel->setText(QApplication::translate("UI_PRODUCTO", "&Descripcion", 0, QApplication::UnicodeUTF8));
        Configurar_producto->setText(QApplication::translate("UI_PRODUCTO", "Configurar Producto", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_detalle), QApplication::translate("UI_PRODUCTO", "Detalle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UI_PRODUCTO", "Categoria", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_PRODUCTO: public Ui_UI_PRODUCTO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_H
