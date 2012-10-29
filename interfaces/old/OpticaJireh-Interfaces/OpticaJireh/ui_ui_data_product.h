/********************************************************************************
** Form generated from reading UI file 'ui_data_product.ui'
**
** Created: Thu Oct 4 13:57:20 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DATA_PRODUCT_H
#define UI_UI_DATA_PRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_DATA_PRODUCT
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QFrame *line_2;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Cancelar;

    void setupUi(QWidget *UI_DATA_PRODUCT)
    {
        if (UI_DATA_PRODUCT->objectName().isEmpty())
            UI_DATA_PRODUCT->setObjectName(QString::fromUtf8("UI_DATA_PRODUCT"));
        UI_DATA_PRODUCT->resize(256, 392);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/product.png"), QSize(), QIcon::Normal, QIcon::Off);
        UI_DATA_PRODUCT->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(UI_DATA_PRODUCT);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(UI_DATA_PRODUCT);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(UI_DATA_PRODUCT);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(UI_DATA_PRODUCT);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        lineEdit = new QLineEdit(UI_DATA_PRODUCT);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        line = new QFrame(UI_DATA_PRODUCT);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(UI_DATA_PRODUCT);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(UI_DATA_PRODUCT);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        spinBox = new QSpinBox(UI_DATA_PRODUCT);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_2->addWidget(spinBox, 1, 2, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(UI_DATA_PRODUCT);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout_2->addWidget(doubleSpinBox, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 2, 1);

        label_4 = new QLabel(UI_DATA_PRODUCT);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 0, 1, 1);

        line_2 = new QFrame(UI_DATA_PRODUCT);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_2, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_5 = new QLabel(UI_DATA_PRODUCT);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        textEdit = new QTextEdit(UI_DATA_PRODUCT);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 5, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_Aceptar = new QPushButton(UI_DATA_PRODUCT);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        gridLayout_4->addWidget(pushButton_Aceptar, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton_Cancelar = new QPushButton(UI_DATA_PRODUCT);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        gridLayout_4->addWidget(pushButton_Cancelar, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 6, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(UI_DATA_PRODUCT);

        QMetaObject::connectSlotsByName(UI_DATA_PRODUCT);
    } // setupUi

    void retranslateUi(QWidget *UI_DATA_PRODUCT)
    {
        UI_DATA_PRODUCT->setWindowTitle(QApplication::translate("UI_DATA_PRODUCT", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UI_DATA_PRODUCT", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UI_DATA_PRODUCT", "Nombre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UI_DATA_PRODUCT", "Precio", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UI_DATA_PRODUCT", "S/.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UI_DATA_PRODUCT", "Cantidad", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UI_DATA_PRODUCT", "Descripcion", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("UI_DATA_PRODUCT", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setShortcut(QApplication::translate("UI_DATA_PRODUCT", "Return", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("UI_DATA_PRODUCT", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setShortcut(QApplication::translate("UI_DATA_PRODUCT", "Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_DATA_PRODUCT: public Ui_UI_DATA_PRODUCT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DATA_PRODUCT_H
