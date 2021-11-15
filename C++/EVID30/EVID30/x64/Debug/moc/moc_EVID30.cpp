/****************************************************************************
** Meta object code from reading C++ file 'EVID30.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../EVID30.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EVID30.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EVID30_t {
    QByteArrayData data[17];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EVID30_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EVID30_t qt_meta_stringdata_EVID30 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "EVID30"
QT_MOC_LITERAL(1, 7, 20), // "onStartButtonClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 23), // "onShutdownButtonClicked"
QT_MOC_LITERAL(4, 53, 5), // "issue"
QT_MOC_LITERAL(5, 59, 4), // "data"
QT_MOC_LITERAL(6, 64, 22), // "onMoveUpXButtonClicked"
QT_MOC_LITERAL(7, 87, 24), // "onMoveDownXButtonClicked"
QT_MOC_LITERAL(8, 112, 22), // "onMoveUpYButtonClicked"
QT_MOC_LITERAL(9, 135, 24), // "onMoveDownYButtonClicked"
QT_MOC_LITERAL(10, 160, 23), // "onAutoModeButtonClicked"
QT_MOC_LITERAL(11, 184, 28), // "onResetPositionButtonClicked"
QT_MOC_LITERAL(12, 213, 23), // "onStopMoveButtonClicked"
QT_MOC_LITERAL(13, 237, 22), // "onZoomMinButtonClicked"
QT_MOC_LITERAL(14, 260, 22), // "onZoomMaxButtonClicked"
QT_MOC_LITERAL(15, 283, 16), // "onStopZoomButton"
QT_MOC_LITERAL(16, 300, 6) // "goHome"

    },
    "EVID30\0onStartButtonClicked\0\0"
    "onShutdownButtonClicked\0issue\0data\0"
    "onMoveUpXButtonClicked\0onMoveDownXButtonClicked\0"
    "onMoveUpYButtonClicked\0onMoveDownYButtonClicked\0"
    "onAutoModeButtonClicked\0"
    "onResetPositionButtonClicked\0"
    "onStopMoveButtonClicked\0onZoomMinButtonClicked\0"
    "onZoomMaxButtonClicked\0onStopZoomButton\0"
    "goHome"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EVID30[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    1,   86,    2, 0x0a /* Public */,
       6,    0,   89,    2, 0x0a /* Public */,
       7,    0,   90,    2, 0x0a /* Public */,
       8,    0,   91,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,
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

void EVID30::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EVID30 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStartButtonClicked(); break;
        case 1: _t->onShutdownButtonClicked(); break;
        case 2: _t->issue((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->onMoveUpXButtonClicked(); break;
        case 4: _t->onMoveDownXButtonClicked(); break;
        case 5: _t->onMoveUpYButtonClicked(); break;
        case 6: _t->onMoveDownYButtonClicked(); break;
        case 7: _t->onAutoModeButtonClicked(); break;
        case 8: _t->onResetPositionButtonClicked(); break;
        case 9: _t->onStopMoveButtonClicked(); break;
        case 10: _t->onZoomMinButtonClicked(); break;
        case 11: _t->onZoomMaxButtonClicked(); break;
        case 12: _t->onStopZoomButton(); break;
        case 13: _t->goHome(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EVID30::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_EVID30.data,
    qt_meta_data_EVID30,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EVID30::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EVID30::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EVID30.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EVID30::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
