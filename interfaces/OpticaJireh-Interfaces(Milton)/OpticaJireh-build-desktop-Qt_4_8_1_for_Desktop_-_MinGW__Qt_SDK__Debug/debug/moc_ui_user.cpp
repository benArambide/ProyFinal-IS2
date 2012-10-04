/****************************************************************************
** Meta object code from reading C++ file 'ui_user.h'
**
** Created: Mon 1. Oct 19:04:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OpticaJireh/ui_user.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UI_USER[] = {

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
       9,    8,    8,    8, 0x08,
      39,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UI_USER[] = {
    "UI_USER\0\0on_pushButton_Nuevo_clicked()\0"
    "on_pushButton_Editar_clicked()\0"
};

void UI_USER::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UI_USER *_t = static_cast<UI_USER *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Nuevo_clicked(); break;
        case 1: _t->on_pushButton_Editar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UI_USER::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UI_USER::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UI_USER,
      qt_meta_data_UI_USER, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UI_USER::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UI_USER::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UI_USER::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UI_USER))
        return static_cast<void*>(const_cast< UI_USER*>(this));
    return QWidget::qt_metacast(_clname);
}

int UI_USER::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
