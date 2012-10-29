/********************************************************************************
** Form generated from reading UI file 'ui_client.ui'
**
** Created: Fri Oct 5 08:15:50 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CLIENT_H
#define UI_UI_CLIENT_H

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

class Ui_UI_CLIENT
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QFrame *line;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Nuevo;
    QPushButton *pushButton_Editar;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_2;

    void setupUi(QWidget *UI_CLIENT)
    {
        if (UI_CLIENT->objectName().isEmpty())
            UI_CLIENT->setObjectName(QString::fromUtf8("UI_CLIENT"));
        UI_CLIENT->resize(850, 450);
        gridLayout_4 = new QGridLayout(UI_CLIENT);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(648, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 2);

        label = new QLabel(UI_CLIENT);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(UI_CLIENT);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(UI_CLIENT);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 2);

        tableWidget = new QTableWidget(UI_CLIENT);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 4, 0, 1, 2);

        line = new QFrame(UI_CLIENT);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(120, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Nuevo = new QPushButton(UI_CLIENT);
        pushButton_Nuevo->setObjectName(QString::fromUtf8("pushButton_Nuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1348112114_notification_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Nuevo->setIcon(icon);
        pushButton_Nuevo->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_Nuevo, 4, 0, 1, 1);

        pushButton_Editar = new QPushButton(UI_CLIENT);
        pushButton_Editar->setObjectName(QString::fromUtf8("pushButton_Editar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1348112116_file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Editar->setIcon(icon1);
        pushButton_Editar->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_Editar, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        line_2 = new QFrame(UI_CLIENT);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(UI_CLIENT);

        QMetaObject::connectSlotsByName(UI_CLIENT);
    } // setupUi

    void retranslateUi(QWidget *UI_CLIENT)
    {
        UI_CLIENT->setWindowTitle(QApplication::translate("UI_CLIENT", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_CLIENT", "Cliente Seleccionado", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_CLIENT", "Lista de Clientes", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UI_CLIENT", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UI_CLIENT", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UI_CLIENT", "Nombres", 0, QApplication::UnicodeUTF8));
        pushButton_Nuevo->setText(QApplication::translate("UI_CLIENT", "   Nuevo   ", 0, QApplication::UnicodeUTF8));
        pushButton_Editar->setText(QApplication::translate("UI_CLIENT", "   Editar   ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_CLIENT: public Ui_UI_CLIENT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CLIENT_H
