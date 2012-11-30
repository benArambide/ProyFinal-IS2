/****************************************************************************
** Meta object code from reading C++ file 'ui_buscarusuario.h'
**
** Created: Thu 29. Nov 00:01:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_buscarusuario.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_buscarusuario.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_BuscarUsuario[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_BuscarUsuario[] = {
    "ui_BuscarUsuario\0\0arg1,arg2\0"
    "on_le_dni_cursorPositionChanged(int,int)\0"
};

void ui_BuscarUsuario::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_BuscarUsuario *_t = static_cast<ui_BuscarUsuario *>(_o);
        switch (_id) {
        case 0: _t->on_le_dni_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_BuscarUsuario::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_BuscarUsuario::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_BuscarUsuario,
      qt_meta_data_ui_BuscarUsuario, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_BuscarUsuario::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_BuscarUsuario::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_BuscarUsuario::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_BuscarUsuario))
        return static_cast<void*>(const_cast< ui_BuscarUsuario*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_BuscarUsuario::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
