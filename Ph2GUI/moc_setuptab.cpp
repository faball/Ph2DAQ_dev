/****************************************************************************
** Meta object code from reading C++ file 'setuptab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "View/setuptab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setuptab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUI__SetupTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      51,   14,   14,   14, 0x05,
      70,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   88,   14,   14, 0x0a,
     128,  122,   14,   14, 0x0a,
     163,   14,   14,   14, 0x08,
     186,   14,   14,   14, 0x08,
     209,   14,   14,   14, 0x08,
     232,   14,   14,   14, 0x08,
     253,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUI__SetupTab[] = {
    "GUI::SetupTab\0\0cbc2\0onBtnLoadSettingsClicked(bool)\0"
    "onBtnInitClicked()\0onBtnCfgClicked()\0"
    "statusMsg\0onStatusUpdate(QString)\0"
    "model\0setHwTreeView(QStandardItemModel*)\0"
    "on_radio2CBC_clicked()\0on_radio8CBC_clicked()\0"
    "on_btnConfig_clicked()\0on_btnLoad_clicked()\0"
    "on_btnInit_clicked()\0"
};

void GUI::SetupTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetupTab *_t = static_cast<SetupTab *>(_o);
        switch (_id) {
        case 0: _t->onBtnLoadSettingsClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onBtnInitClicked(); break;
        case 2: _t->onBtnCfgClicked(); break;
        case 3: _t->onStatusUpdate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setHwTreeView((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 5: _t->on_radio2CBC_clicked(); break;
        case 6: _t->on_radio8CBC_clicked(); break;
        case 7: _t->on_btnConfig_clicked(); break;
        case 8: _t->on_btnLoad_clicked(); break;
        case 9: _t->on_btnInit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUI::SetupTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUI::SetupTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUI__SetupTab,
      qt_meta_data_GUI__SetupTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUI::SetupTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUI::SetupTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUI::SetupTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__SetupTab))
        return static_cast<void*>(const_cast< SetupTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUI::SetupTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GUI::SetupTab::onBtnLoadSettingsClicked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::SetupTab::onBtnInitClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GUI::SetupTab::onBtnCfgClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
