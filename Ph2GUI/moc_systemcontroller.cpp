/****************************************************************************
** Meta object code from reading C++ file 'systemcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Model/systemcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__SystemController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   22,   22,   22, 0x0a,
      76,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GUI__SystemController[] = {
    "GUI::SystemController\0\0msg\0"
    "notifyStatusMessage(QString)\0"
    "startInitialiseHw()\0startConfigureHw()\0"
};

void GUI::SystemController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemController *_t = static_cast<SystemController *>(_o);
        switch (_id) {
        case 0: _t->notifyStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->startInitialiseHw(); break;
        case 2: _t->startConfigureHw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::SystemController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::SystemController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUI__SystemController,
      qt_meta_data_GUI__SystemController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::SystemController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::SystemController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::SystemController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__SystemController))
        return static_cast<void*>(const_cast< SystemController*>(this));
    return QObject::qt_metacast(_clname);
}

int GUI::SystemController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GUI::SystemController::notifyStatusMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
