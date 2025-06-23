/****************************************************************************
** Meta object code from reading C++ file 'AudioApplication.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/utils/AudioApplication.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioApplication.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AudioApplication_t {
    uint offsetsAndSizes[38];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[16];
    char stringdata5[14];
    char stringdata6[15];
    char stringdata7[16];
    char stringdata8[19];
    char stringdata9[17];
    char stringdata10[5];
    char stringdata11[12];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[7];
    char stringdata15[8];
    char stringdata16[9];
    char stringdata17[12];
    char stringdata18[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AudioApplication_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AudioApplication_t qt_meta_stringdata_AudioApplication = {
    {
        QT_MOC_LITERAL(0, 16),  // "AudioApplication"
        QT_MOC_LITERAL(17, 11),  // "nameChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 18),  // "processNameChanged"
        QT_MOC_LITERAL(49, 15),  // "clientIdChanged"
        QT_MOC_LITERAL(65, 13),  // "volumeChanged"
        QT_MOC_LITERAL(79, 14),  // "isMutedChanged"
        QT_MOC_LITERAL(94, 15),  // "iconNameChanged"
        QT_MOC_LITERAL(110, 18),  // "deviceIndexChanged"
        QT_MOC_LITERAL(129, 16),  // "isPlayingChanged"
        QT_MOC_LITERAL(146, 4),  // "name"
        QT_MOC_LITERAL(151, 11),  // "processName"
        QT_MOC_LITERAL(163, 8),  // "clientId"
        QT_MOC_LITERAL(172, 8),  // "uint32_t"
        QT_MOC_LITERAL(181, 6),  // "volume"
        QT_MOC_LITERAL(188, 7),  // "isMuted"
        QT_MOC_LITERAL(196, 8),  // "iconName"
        QT_MOC_LITERAL(205, 11),  // "deviceIndex"
        QT_MOC_LITERAL(217, 9)   // "isPlaying"
    },
    "AudioApplication",
    "nameChanged",
    "",
    "processNameChanged",
    "clientIdChanged",
    "volumeChanged",
    "isMutedChanged",
    "iconNameChanged",
    "deviceIndexChanged",
    "isPlayingChanged",
    "name",
    "processName",
    "clientId",
    "uint32_t",
    "volume",
    "isMuted",
    "iconName",
    "deviceIndex",
    "isPlaying"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AudioApplication[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,
       5,    0,   65,    2, 0x06,   12 /* Public */,
       6,    0,   66,    2, 0x06,   13 /* Public */,
       7,    0,   67,    2, 0x06,   14 /* Public */,
       8,    0,   68,    2, 0x06,   15 /* Public */,
       9,    0,   69,    2, 0x06,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(2), 0,
      14, QMetaType::Double, 0x00015103, uint(3), 0,
      15, QMetaType::Bool, 0x00015103, uint(4), 0,
      16, QMetaType::QString, 0x00015001, uint(5), 0,
      17, 0x80000000 | 13, 0x0001510b, uint(6), 0,
      18, QMetaType::Bool, 0x00015103, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioApplication.offsetsAndSizes,
    qt_meta_data_AudioApplication,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AudioApplication_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'processName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'clientId'
        QtPrivate::TypeAndForceComplete<uint32_t, std::true_type>,
        // property 'volume'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'isMuted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'deviceIndex'
        QtPrivate::TypeAndForceComplete<uint32_t, std::true_type>,
        // property 'isPlaying'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioApplication, std::true_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clientIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isMutedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isPlayingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AudioApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->processNameChanged(); break;
        case 2: _t->clientIdChanged(); break;
        case 3: _t->volumeChanged(); break;
        case 4: _t->isMutedChanged(); break;
        case 5: _t->iconNameChanged(); break;
        case 6: _t->deviceIndexChanged(); break;
        case 7: _t->isPlayingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::processNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::clientIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::volumeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::isMutedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::iconNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::deviceIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AudioApplication::*)();
            if (_t _q_method = &AudioApplication::isPlayingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->processName(); break;
        case 2: *reinterpret_cast< uint32_t*>(_v) = _t->clientId(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 6: *reinterpret_cast< uint32_t*>(_v) = _t->deviceIndex(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioApplication *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setProcessName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setClientId(*reinterpret_cast< uint32_t*>(_v)); break;
        case 3: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setIsMuted(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDeviceIndex(*reinterpret_cast< uint32_t*>(_v)); break;
        case 7: _t->setIsPlaying(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *AudioApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioApplication.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AudioApplication::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioApplication::processNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AudioApplication::clientIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AudioApplication::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioApplication::isMutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioApplication::iconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AudioApplication::deviceIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AudioApplication::isPlayingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
