/****************************************************************************
** Meta object code from reading C++ file 'ui_contenedor_datos.h'
**
** Created: Tue 18. Dec 22:50:29 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_contenedor_datos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_contenedor_datos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_contenedor_datos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      51,   20,   20,   20, 0x08,
      87,   20,   20,   20, 0x08,
     126,   20,   20,   20, 0x08,
     167,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_contenedor_datos[] = {
    "ui_contenedor_datos\0\0on_pushButton_salir_clicked()\0"
    "on_pushButton_addProducto_clicked()\0"
    "on_pushButton_saveContenedor_clicked()\0"
    "on_pushButton_deleteContenedor_clicked()\0"
    "on_pushButton_deleteProducto_clicked()\0"
};

void ui_contenedor_datos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_contenedor_datos *_t = static_cast<ui_contenedor_datos *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_salir_clicked(); break;
        case 1: _t->on_pushButton_addProducto_clicked(); break;
        case 2: _t->on_pushButton_saveContenedor_clicked(); break;
        case 3: _t->on_pushButton_deleteContenedor_clicked(); break;
        case 4: _t->on_pushButton_deleteProducto_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ui_contenedor_datos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_contenedor_datos::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_contenedor_datos,
      qt_meta_data_ui_contenedor_datos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_contenedor_datos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_contenedor_datos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_contenedor_datos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_contenedor_datos))
        return static_cast<void*>(const_cast< ui_contenedor_datos*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_contenedor_datos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
