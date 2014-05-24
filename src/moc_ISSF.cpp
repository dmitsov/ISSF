/****************************************************************************
** Meta object code from reading C++ file 'ISSF.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ISSF.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ISSF.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ISSFApplication_t {
    QByteArrayData data[12];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ISSFApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ISSFApplication_t qt_meta_stringdata_ISSFApplication = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 12),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 14),
QT_MOC_LITERAL(4, 45, 19),
QT_MOC_LITERAL(5, 65, 18),
QT_MOC_LITERAL(6, 84, 19),
QT_MOC_LITERAL(7, 104, 15),
QT_MOC_LITERAL(8, 120, 18),
QT_MOC_LITERAL(9, 139, 16),
QT_MOC_LITERAL(10, 156, 4),
QT_MOC_LITERAL(11, 161, 10)
    },
    "ISSFApplication\0packetsAdded\0\0"
    "onPacketsAdded\0onStartWorkerThread\0"
    "onStopWorkerThread\0onPauseWorkerThread\0"
    "onFilterApplied\0onInterfaceClicked\0"
    "onPacketSelected\0onOk\0onContinue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ISSFApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a,
       4,    0,   66,    2, 0x0a,
       5,    0,   67,    2, 0x0a,
       6,    0,   68,    2, 0x0a,
       7,    0,   69,    2, 0x0a,
       8,    0,   70,    2, 0x0a,
       9,    0,   71,    2, 0x0a,
      10,    0,   72,    2, 0x0a,
      11,    0,   73,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ISSFApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ISSFApplication *_t = static_cast<ISSFApplication *>(_o);
        switch (_id) {
        case 0: _t->packetsAdded(); break;
        case 1: _t->onPacketsAdded(); break;
        case 2: _t->onStartWorkerThread(); break;
        case 3: _t->onStopWorkerThread(); break;
        case 4: _t->onPauseWorkerThread(); break;
        case 5: _t->onFilterApplied(); break;
        case 6: _t->onInterfaceClicked(); break;
        case 7: _t->onPacketSelected(); break;
        case 8: _t->onOk(); break;
        case 9: _t->onContinue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ISSFApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ISSFApplication::packetsAdded)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ISSFApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_ISSFApplication.data,
      qt_meta_data_ISSFApplication,  qt_static_metacall, 0, 0}
};


const QMetaObject *ISSFApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ISSFApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ISSFApplication.stringdata))
        return static_cast<void*>(const_cast< ISSFApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int ISSFApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ISSFApplication::packetsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
