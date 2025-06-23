/****************************************************************************
** Meta object code from reading C++ file 'MainController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/controllers/MainController.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainController_t {
    uint offsetsAndSizes[40];
    char stringdata0[15];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[14];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[16];
    char stringdata11[19];
    char stringdata12[18];
    char stringdata13[4];
    char stringdata14[21];
    char stringdata15[9];
    char stringdata16[21];
    char stringdata17[20];
    char stringdata18[14];
    char stringdata19[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainController_t qt_meta_stringdata_MainController = {
    {
        QT_MOC_LITERAL(0, 14),  // "MainController"
        QT_MOC_LITERAL(15, 18),  // "initializedChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 20),  // "statusMessageChanged"
        QT_MOC_LITERAL(56, 13),  // "onDeviceAdded"
        QT_MOC_LITERAL(70, 12),  // "AudioDevice*"
        QT_MOC_LITERAL(83, 6),  // "device"
        QT_MOC_LITERAL(90, 15),  // "onDeviceRemoved"
        QT_MOC_LITERAL(106, 8),  // "uint32_t"
        QT_MOC_LITERAL(115, 11),  // "deviceIndex"
        QT_MOC_LITERAL(127, 15),  // "onDeviceUpdated"
        QT_MOC_LITERAL(143, 18),  // "onApplicationAdded"
        QT_MOC_LITERAL(162, 17),  // "AudioApplication*"
        QT_MOC_LITERAL(180, 3),  // "app"
        QT_MOC_LITERAL(184, 20),  // "onApplicationRemoved"
        QT_MOC_LITERAL(205, 8),  // "clientId"
        QT_MOC_LITERAL(214, 20),  // "onApplicationUpdated"
        QT_MOC_LITERAL(235, 19),  // "onConnectionChanged"
        QT_MOC_LITERAL(255, 13),  // "isInitialized"
        QT_MOC_LITERAL(269, 13)   // "statusMessage"
    },
    "MainController",
    "initializedChanged",
    "",
    "statusMessageChanged",
    "onDeviceAdded",
    "AudioDevice*",
    "device",
    "onDeviceRemoved",
    "uint32_t",
    "deviceIndex",
    "onDeviceUpdated",
    "onApplicationAdded",
    "AudioApplication*",
    "app",
    "onApplicationRemoved",
    "clientId",
    "onApplicationUpdated",
    "onConnectionChanged",
    "isInitialized",
    "statusMessage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    3 /* Public */,
       3,    0,   69,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   70,    2, 0x08,    5 /* Private */,
       7,    1,   73,    2, 0x08,    7 /* Private */,
      10,    1,   76,    2, 0x08,    9 /* Private */,
      11,    1,   79,    2, 0x08,   11 /* Private */,
      14,    1,   82,    2, 0x08,   13 /* Private */,
      16,    1,   85,    2, 0x08,   15 /* Private */,
      17,    0,   88,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 8,   15,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00015001, uint(0), 0,
      19, QMetaType::QString, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainController.offsetsAndSizes,
    qt_meta_data_MainController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainController_t,
        // property 'isInitialized'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'statusMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainController, std::true_type>,
        // method 'initializedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeviceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'onDeviceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'onDeviceUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'onApplicationAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'onApplicationRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'onApplicationUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'onConnectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initializedChanged(); break;
        case 1: _t->statusMessageChanged(); break;
        case 2: _t->onDeviceAdded((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 3: _t->onDeviceRemoved((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 4: _t->onDeviceUpdated((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 5: _t->onApplicationAdded((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 6: _t->onApplicationRemoved((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 7: _t->onApplicationUpdated((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 8: _t->onConnectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainController::*)();
            if (_t _q_method = &MainController::initializedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainController::*)();
            if (_t _q_method = &MainController::statusMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isInitialized(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->statusMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MainController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MainController::initializedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainController::statusMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
