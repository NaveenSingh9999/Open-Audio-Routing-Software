/****************************************************************************
** Meta object code from reading C++ file 'RoutingController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/controllers/RoutingController.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RoutingController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RoutingController_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[4];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[25];
    char stringdata8[21];
    char stringdata9[7];
    char stringdata10[19];
    char stringdata11[6];
    char stringdata12[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RoutingController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RoutingController_t qt_meta_stringdata_RoutingController = {
    {
        QT_MOC_LITERAL(0, 17),  // "RoutingController"
        QT_MOC_LITERAL(18, 17),  // "applicationRouted"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 17),  // "AudioApplication*"
        QT_MOC_LITERAL(55, 3),  // "app"
        QT_MOC_LITERAL(59, 12),  // "AudioDevice*"
        QT_MOC_LITERAL(72, 6),  // "device"
        QT_MOC_LITERAL(79, 24),  // "routeApplicationToDevice"
        QT_MOC_LITERAL(104, 20),  // "setApplicationVolume"
        QT_MOC_LITERAL(125, 6),  // "volume"
        QT_MOC_LITERAL(132, 18),  // "setApplicationMute"
        QT_MOC_LITERAL(151, 5),  // "muted"
        QT_MOC_LITERAL(157, 19)   // "refreshApplications"
    },
    "RoutingController",
    "applicationRouted",
    "",
    "AudioApplication*",
    "app",
    "AudioDevice*",
    "device",
    "routeApplicationToDevice",
    "setApplicationVolume",
    "volume",
    "setApplicationMute",
    "muted",
    "refreshApplications"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RoutingController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   49,    2, 0x02,    4 /* Public */,
       8,    2,   54,    2, 0x02,    7 /* Public */,
      10,    2,   59,    2, 0x02,   10 /* Public */,
      12,    0,   64,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RoutingController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RoutingController.offsetsAndSizes,
    qt_meta_data_RoutingController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RoutingController_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoutingController, std::true_type>,
        // method 'applicationRouted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'routeApplicationToDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'setApplicationVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setApplicationMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'refreshApplications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RoutingController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoutingController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->applicationRouted((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[2]))); break;
        case 1: _t->routeApplicationToDevice((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[2]))); break;
        case 2: _t->setApplicationVolume((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->setApplicationMute((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->refreshApplications(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            }
            break;
        case 3:
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
            using _t = void (RoutingController::*)(AudioApplication * , AudioDevice * );
            if (_t _q_method = &RoutingController::applicationRouted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *RoutingController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutingController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoutingController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RoutingController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RoutingController::applicationRouted(AudioApplication * _t1, AudioDevice * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
