/****************************************************************************
** Meta object code from reading C++ file 'submarine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "submarine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submarine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SubMarine_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubMarine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubMarine_t qt_meta_stringdata_SubMarine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SubMarine"
QT_MOC_LITERAL(1, 10, 18), // "subMarineDestroyed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 26), // "subMarineExecutionFinished"
QT_MOC_LITERAL(4, 57, 21) // "subMarineStateChanged"

    },
    "SubMarine\0subMarineDestroyed\0\0"
    "subMarineExecutionFinished\0"
    "subMarineStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubMarine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubMarine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubMarine *_t = static_cast<SubMarine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subMarineDestroyed(); break;
        case 1: _t->subMarineExecutionFinished(); break;
        case 2: _t->subMarineStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SubMarine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SubMarine::subMarineDestroyed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SubMarine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SubMarine::subMarineExecutionFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SubMarine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SubMarine::subMarineStateChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SubMarine::staticMetaObject = {
    { &PixmapItem::staticMetaObject, qt_meta_stringdata_SubMarine.data,
      qt_meta_data_SubMarine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SubMarine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubMarine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SubMarine.stringdata0))
        return static_cast<void*>(const_cast< SubMarine*>(this));
    return PixmapItem::qt_metacast(_clname);
}

int SubMarine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PixmapItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SubMarine::subMarineDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SubMarine::subMarineExecutionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SubMarine::subMarineStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
