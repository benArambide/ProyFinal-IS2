/****************************************************************************
** Meta object code from reading C++ file 'moduleinterface.h'
**
** Created: Tue 18. Dec 22:49:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../moduleinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moduleinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModuleInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   31,   16,   16, 0x08,
      78,   16,   16,   16, 0x08,
     117,   16,   16,   16, 0x08,
     150,  141,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModuleInterface[] = {
    "ModuleInterface\0\0rowSelected()\0index\0"
    "on_list_tableView_activated(QModelIndex)\0"
    "on_list_tableView_entered(QModelIndex)\0"
    "on_actionUp_triggered()\0cur,prev\0"
    "selectionChangedHandle(QModelIndex,QModelIndex)\0"
};

void ModuleInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModuleInterface *_t = static_cast<ModuleInterface *>(_o);
        switch (_id) {
        case 0: _t->rowSelected(); break;
        case 1: _t->on_list_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_list_tableView_entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_actionUp_triggered(); break;
        case 4: _t->selectionChangedHandle((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModuleInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModuleInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModuleInterface,
      qt_meta_data_ModuleInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModuleInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModuleInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModuleInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleInterface))
        return static_cast<void*>(const_cast< ModuleInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int ModuleInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ModuleInterface::rowSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
