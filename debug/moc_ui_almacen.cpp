/****************************************************************************
** Meta object code from reading C++ file 'ui_almacen.h'
**
** Created: Wed 19. Dec 09:30:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ui_almacen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_almacen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ui_almacen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x08,
      66,   12,   11,   11, 0x08,
     114,   12,   11,   11, 0x08,
     163,   12,   11,   11, 0x08,
     212,   11,   11,   11, 0x08,
     247,   11,   11,   11, 0x08,
     283,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     356,   11,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     441,  430,   11,   11, 0x08,
     499,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ui_almacen[] = {
    "ui_almacen\0\0arg1\0"
    "on_comboBox_Empresa_currentIndexChanged(QString)\0"
    "on_comboBox_Tienda_currentIndexChanged(QString)\0"
    "on_comboBox_Almacen_currentIndexChanged(QString)\0"
    "on_comboBox_Andamio_currentIndexChanged(QString)\0"
    "on_pushButton_addAlmacen_clicked()\0"
    "on_pushButton_editAlmacen_clicked()\0"
    "on_pushButton_deleteAlmacen_clicked()\0"
    "on_pushButton_addAndamio_clicked()\0"
    "on_pushButton_editAndamio_clicked()\0"
    "on_pushButton_deleteAndamio_clicked()\0"
    "row,column\0"
    "on_tableWidget_griContenedores_cellDoubleClicked(int,int)\0"
    "on_tableWidget_griContenedores_itemSelectionChanged()\0"
};

void ui_almacen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ui_almacen *_t = static_cast<ui_almacen *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_Empresa_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_Tienda_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_Almacen_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_Andamio_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_addAlmacen_clicked(); break;
        case 5: _t->on_pushButton_editAlmacen_clicked(); break;
        case 6: _t->on_pushButton_deleteAlmacen_clicked(); break;
        case 7: _t->on_pushButton_addAndamio_clicked(); break;
        case 8: _t->on_pushButton_editAndamio_clicked(); break;
        case 9: _t->on_pushButton_deleteAndamio_clicked(); break;
        case 10: _t->on_tableWidget_griContenedores_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_tableWidget_griContenedores_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ui_almacen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ui_almacen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ui_almacen,
      qt_meta_data_ui_almacen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ui_almacen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ui_almacen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ui_almacen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ui_almacen))
        return static_cast<void*>(const_cast< ui_almacen*>(this));
    return QWidget::qt_metacast(_clname);
}

int ui_almacen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
