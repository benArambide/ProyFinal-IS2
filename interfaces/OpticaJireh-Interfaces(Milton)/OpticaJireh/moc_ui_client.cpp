/****************************************************************************
** Meta object code from reading C++ file 'ui_client.h'
**
** Created: Fri Oct 5 08:16:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ui_client.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UI_CLIENT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      41,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UI_CLIENT[] = {
    "UI_CLIENT\0\0on_pushButton_Nuevo_clicked()\0"
    "on_pushButton_Editar_clicked()\0"
};

void UI_CLIENT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UI_CLIENT *_t = static_cast<UI_CLIENT *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Nuevo_clicked(); break;
        case 1: _t->on_pushButton_Editar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UI_CLIENT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UI_CLIENT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UI_CLIENT,
      qt_meta_data_UI_CLIENT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UI_CLIENT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UI_CLIENT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UI_CLIENT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UI_CLIENT))
        return static_cast<void*>(const_cast< UI_CLIENT*>(this));
    return QWidget::qt_metacast(_clname);
}

int UI_CLIENT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
