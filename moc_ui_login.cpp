/****************************************************************************
** Meta object code from reading C++ file 'ui_login.h'
**
** Created: Wed Nov 28 05:37:25 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ui_login.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UI_LOGIN[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UI_LOGIN[] = {
    "UI_LOGIN\0\0on_pushButton_Aceptar_clicked()\0"
    "on_pushButton_Cancelar_clicked()\0"
};

const QMetaObject UI_LOGIN::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UI_LOGIN,
      qt_meta_data_UI_LOGIN, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UI_LOGIN::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UI_LOGIN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UI_LOGIN::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UI_LOGIN))
        return static_cast<void*>(const_cast< UI_LOGIN*>(this));
    return QWidget::qt_metacast(_clname);
}

int UI_LOGIN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Aceptar_clicked(); break;
        case 1: on_pushButton_Cancelar_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
