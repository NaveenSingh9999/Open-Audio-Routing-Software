/****************************************************************************
** Meta object code from reading C++ file 'PulseAudioBackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/audio/PulseAudioBackend.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PulseAudioBackend.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PulseAudioBackend_t {
    uint offsetsAndSizes[56];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[17];
    char stringdata10[18];
    char stringdata11[4];
    char stringdata12[19];
    char stringdata13[9];
    char stringdata14[19];
    char stringdata15[24];
    char stringdata16[10];
    char stringdata17[15];
    char stringdata18[15];
    char stringdata19[17];
    char stringdata20[16];
    char stringdata21[9];
    char stringdata22[7];
    char stringdata23[14];
    char stringdata24[6];
    char stringdata25[24];
    char stringdata26[21];
    char stringdata27[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PulseAudioBackend_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PulseAudioBackend_t qt_meta_stringdata_PulseAudioBackend = {
    {
        QT_MOC_LITERAL(0, 17),  // "PulseAudioBackend"
        QT_MOC_LITERAL(18, 11),  // "deviceAdded"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 12),  // "AudioDevice*"
        QT_MOC_LITERAL(44, 6),  // "device"
        QT_MOC_LITERAL(51, 13),  // "deviceRemoved"
        QT_MOC_LITERAL(65, 8),  // "uint32_t"
        QT_MOC_LITERAL(74, 11),  // "deviceIndex"
        QT_MOC_LITERAL(86, 13),  // "deviceUpdated"
        QT_MOC_LITERAL(100, 16),  // "applicationAdded"
        QT_MOC_LITERAL(117, 17),  // "AudioApplication*"
        QT_MOC_LITERAL(135, 3),  // "app"
        QT_MOC_LITERAL(139, 18),  // "applicationRemoved"
        QT_MOC_LITERAL(158, 8),  // "clientId"
        QT_MOC_LITERAL(167, 18),  // "applicationUpdated"
        QT_MOC_LITERAL(186, 23),  // "connectionStatusChanged"
        QT_MOC_LITERAL(210, 9),  // "connected"
        QT_MOC_LITERAL(220, 14),  // "onTimerTimeout"
        QT_MOC_LITERAL(235, 14),  // "setDefaultSink"
        QT_MOC_LITERAL(250, 16),  // "setDefaultSource"
        QT_MOC_LITERAL(267, 15),  // "setDeviceVolume"
        QT_MOC_LITERAL(283, 8),  // "isSource"
        QT_MOC_LITERAL(292, 6),  // "volume"
        QT_MOC_LITERAL(299, 13),  // "setDeviceMute"
        QT_MOC_LITERAL(313, 5),  // "muted"
        QT_MOC_LITERAL(319, 23),  // "moveApplicationToDevice"
        QT_MOC_LITERAL(343, 20),  // "setApplicationVolume"
        QT_MOC_LITERAL(364, 18)   // "setApplicationMute"
    },
    "PulseAudioBackend",
    "deviceAdded",
    "",
    "AudioDevice*",
    "device",
    "deviceRemoved",
    "uint32_t",
    "deviceIndex",
    "deviceUpdated",
    "applicationAdded",
    "AudioApplication*",
    "app",
    "applicationRemoved",
    "clientId",
    "applicationUpdated",
    "connectionStatusChanged",
    "connected",
    "onTimerTimeout",
    "setDefaultSink",
    "setDefaultSource",
    "setDeviceVolume",
    "isSource",
    "volume",
    "setDeviceMute",
    "muted",
    "moveApplicationToDevice",
    "setApplicationVolume",
    "setApplicationMute"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PulseAudioBackend[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,    1 /* Public */,
       5,    1,  107,    2, 0x06,    3 /* Public */,
       8,    1,  110,    2, 0x06,    5 /* Public */,
       9,    1,  113,    2, 0x06,    7 /* Public */,
      12,    1,  116,    2, 0x06,    9 /* Public */,
      14,    1,  119,    2, 0x06,   11 /* Public */,
      15,    1,  122,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  125,    2, 0x08,   15 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      18,    1,  126,    2, 0x02,   16 /* Public */,
      19,    1,  129,    2, 0x02,   18 /* Public */,
      20,    3,  132,    2, 0x02,   20 /* Public */,
      23,    3,  139,    2, 0x02,   24 /* Public */,
      25,    3,  146,    2, 0x02,   28 /* Public */,
      26,    2,  153,    2, 0x02,   32 /* Public */,
      27,    2,  158,    2, 0x02,   35 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 6,   13,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   16,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, QMetaType::Double,    7,   21,   22,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, QMetaType::Bool,    7,   21,   24,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, QMetaType::Bool,   13,    7,   21,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double,   13,   22,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,   13,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject PulseAudioBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PulseAudioBackend.offsetsAndSizes,
    qt_meta_data_PulseAudioBackend,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PulseAudioBackend_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PulseAudioBackend, std::true_type>,
        // method 'deviceAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'deviceRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'deviceUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'applicationAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'applicationRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'applicationUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'connectionStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDefaultSink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'setDefaultSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'setDeviceVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setDeviceMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'moveApplicationToDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setApplicationVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setApplicationMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PulseAudioBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PulseAudioBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 2: _t->deviceUpdated((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 3: _t->applicationAdded((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 4: _t->applicationRemoved((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 5: _t->applicationUpdated((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 6: _t->connectionStatusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->onTimerTimeout(); break;
        case 8: _t->setDefaultSink((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 9: _t->setDefaultSource((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 10: _t->setDeviceVolume((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 11: _t->setDeviceMute((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 12: _t->moveApplicationToDevice((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 13: _t->setApplicationVolume((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 14: _t->setApplicationMute((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioApplication* >(); break;
            }
            break;
        case 5:
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
            using _t = void (PulseAudioBackend::*)(AudioDevice * );
            if (_t _q_method = &PulseAudioBackend::deviceAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(uint32_t );
            if (_t _q_method = &PulseAudioBackend::deviceRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(AudioDevice * );
            if (_t _q_method = &PulseAudioBackend::deviceUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(AudioApplication * );
            if (_t _q_method = &PulseAudioBackend::applicationAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(uint32_t );
            if (_t _q_method = &PulseAudioBackend::applicationRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(AudioApplication * );
            if (_t _q_method = &PulseAudioBackend::applicationUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PulseAudioBackend::*)(bool );
            if (_t _q_method = &PulseAudioBackend::connectionStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *PulseAudioBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PulseAudioBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PulseAudioBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PulseAudioBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PulseAudioBackend::deviceAdded(AudioDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PulseAudioBackend::deviceRemoved(uint32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PulseAudioBackend::deviceUpdated(AudioDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PulseAudioBackend::applicationAdded(AudioApplication * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PulseAudioBackend::applicationRemoved(uint32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PulseAudioBackend::applicationUpdated(AudioApplication * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PulseAudioBackend::connectionStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
