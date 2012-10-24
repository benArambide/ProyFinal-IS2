/********************************************************************************
** Form generated from reading UI file 'ui_search.ui'
**
** Created: Thu Oct 4 13:57:20 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_SEARCH_H
#define UI_UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_SEARCH
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *line;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QWidget *widget2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *UI_SEARCH)
    {
        if (UI_SEARCH->objectName().isEmpty())
            UI_SEARCH->setObjectName(QString::fromUtf8("UI_SEARCH"));
        UI_SEARCH->resize(483, 268);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349145121_Black_Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_SEARCH->setWindowIcon(icon);
        label = new QLabel(UI_SEARCH);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 38, 16));
        tabWidget = new QTabWidget(UI_SEARCH);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(9, 35, 451, 191));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        line = new QFrame(tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 40, 421, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 60, 212, 43));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout_3->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        gridLayout_3->addWidget(doubleSpinBox_2, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 10, 421, 22));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        lineEdit = new QLineEdit(UI_SEARCH);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(53, 9, 391, 20));
        widget2 = new QWidget(UI_SEARCH);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(100, 230, 250, 25));
        gridLayout_2 = new QGridLayout(widget2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);


        retranslateUi(UI_SEARCH);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UI_SEARCH);
    } // setupUi

    void retranslateUi(QWidget *UI_SEARCH)
    {
        UI_SEARCH->setWindowTitle(QApplication::translate("UI_SEARCH", "Busqueda Avanzada", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_SEARCH", "Buscar  ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UI_SEARCH", "Precio", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UI_SEARCH", "Desde", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UI_SEARCH", "hasta", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_SEARCH", "Categoria", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UI_SEARCH", "Marca", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UI_SEARCH", "Producto", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UI_SEARCH", "Usuario", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("UI_SEARCH", "Cliente", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("UI_SEARCH", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("UI_SEARCH", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_SEARCH: public Ui_UI_SEARCH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_SEARCH_H
