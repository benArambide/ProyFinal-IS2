/****************************************************************************
** Meta object code from reading C++ file 'ui_producto_agregar_luna.h'
**
** Created: Tue 18. Dec 22:50:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_producto_agregar_luna.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_producto_agregar_luna.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_producto_agregar_luna[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x08,
      52,   25,   25,   25, 0x08,
      85,   25,   25,   25, 0x08,
     116,   25,   25,   25, 0x08,
     148,   25,   25,   25, 0x08,
     178,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_producto_agregar_luna[] = {
    "ui_producto_agregar_luna\0\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_cancelar_clicked()\0"
    "on_pushButton_xmarca_clicked()\0"
    "on_pushButton_xindice_clicked()\0"
    "on_pushButton_xtipo_clicked()\0"
    "on_pushButton_xcalidad_clicked()\0"
};

void ui_producto_agregar_luna::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_producto_agregar_luna *_t = static_cast<ui_producto_agregar_luna *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_5_clicked(); break;
        case 1: _t->on_pushButton_cancelar_clicked(); break;
        case 2: _t->on_pushButton_xmarca_clicked(); break;
        case 3: _t->on_pushButton_xindice_clicked(); break;
        case 4: _t->on_pushButton_xtipo_clicked(); break;
        case 5: _t->on_pushButton_xcalidad_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_producto_agregar_luna::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_producto_agregar_luna::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ui_producto_agregar_luna,
      qt_meta_data_ui_producto_agregar_luna, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_producto_agregar_luna::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_producto_agregar_luna::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_producto_agregar_luna::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_producto_agregar_luna))
        return static_cast<void*>(const_cast< ui_producto_agregar_luna*>(this));
    return QDialog::qt_metacast(_clname);
}

int ui_producto_agregar_luna::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
