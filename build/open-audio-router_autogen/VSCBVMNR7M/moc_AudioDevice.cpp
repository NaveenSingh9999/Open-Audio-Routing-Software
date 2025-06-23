/****************************************************************************
** Meta object code from reading C++ file 'AudioDevice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/utils/AudioDevice.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioDevice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AudioDevice_t {
    uint offsetsAndSizes[44];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[12];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[15];
    char stringdata8[16];
    char stringdata9[13];
    char stringdata10[5];
    char stringdata11[12];
    char stringdata12[5];
    char stringdata13[11];
    char stringdata14[10];
    char stringdata15[7];
    char stringdata16[8];
    char stringdata17[9];
    char stringdata18[6];
    char stringdata19[9];
    char stringdata20[6];
    char stringdata21[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AudioDevice_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AudioDevice_t qt_meta_stringdata_AudioDevice = {
    {
        QT_MOC_LITERAL(0, 11),  // "AudioDevice"
        QT_MOC_LITERAL(12, 11),  // "nameChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 18),  // "descriptionChanged"
        QT_MOC_LITERAL(44, 11),  // "typeChanged"
        QT_MOC_LITERAL(56, 16),  // "isDefaultChanged"
        QT_MOC_LITERAL(73, 13),  // "volumeChanged"
        QT_MOC_LITERAL(87, 14),  // "isMutedChanged"
        QT_MOC_LITERAL(102, 15),  // "iconNameChanged"
        QT_MOC_LITERAL(118, 12),  // "indexChanged"
        QT_MOC_LITERAL(131, 4),  // "name"
        QT_MOC_LITERAL(136, 11),  // "description"
        QT_MOC_LITERAL(148, 4),  // "type"
        QT_MOC_LITERAL(153, 10),  // "DeviceType"
        QT_MOC_LITERAL(164, 9),  // "isDefault"
        QT_MOC_LITERAL(174, 6),  // "volume"
        QT_MOC_LITERAL(181, 7),  // "isMuted"
        QT_MOC_LITERAL(189, 8),  // "iconName"
        QT_MOC_LITERAL(198, 5),  // "index"
        QT_MOC_LITERAL(204, 8),  // "uint32_t"
        QT_MOC_LITERAL(213, 5),  // "Input"
        QT_MOC_LITERAL(219, 6)   // "Output"
    },
    "AudioDevice",
    "nameChanged",
    "",
    "descriptionChanged",
    "typeChanged",
    "isDefaultChanged",
    "volumeChanged",
    "isMutedChanged",
    "iconNameChanged",
    "indexChanged",
    "name",
    "description",
    "type",
    "DeviceType",
    "isDefault",
    "volume",
    "isMuted",
    "iconName",
    "index",
    "uint32_t",
    "Input",
    "Output"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AudioDevice[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       1,  110, // enums/sets
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
      14, QMetaType::Bool, 0x00015103, uint(3), 0,
      15, QMetaType::Double, 0x00015103, uint(4), 0,
      16, QMetaType::Bool, 0x00015103, uint(5), 0,
      17, QMetaType::QString, 0x00015001, uint(6), 0,
      18, 0x80000000 | 19, 0x0001510b, uint(7), 0,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    2,  115,

 // enum data: key, value
      20, uint(AudioDevice::Input),
      21, uint(AudioDevice::Output),

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioDevice.offsetsAndSizes,
    qt_meta_data_AudioDevice,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AudioDevice_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<DeviceType, std::true_type>,
        // property 'isDefault'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'volume'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'isMuted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'index'
        QtPrivate::TypeAndForceComplete<uint32_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AudioDevice, std::true_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isDefaultChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isMutedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'indexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AudioDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->typeChanged(); break;
        case 3: _t->isDefaultChanged(); break;
        case 4: _t->volumeChanged(); break;
        case 5: _t->isMutedChanged(); break;
        case 6: _t->iconNameChanged(); break;
        case 7: _t->indexChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::descriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::isDefaultChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::volumeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::isMutedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::iconNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AudioDevice::*)();
            if (_t _q_method = &AudioDevice::indexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< DeviceType*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isDefault(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 7: *reinterpret_cast< uint32_t*>(_v) = _t->index(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioDevice *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setType(*reinterpret_cast< DeviceType*>(_v)); break;
        case 3: _t->setIsDefault(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setIsMuted(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setIndex(*reinterpret_cast< uint32_t*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *AudioDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AudioDevice::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioDevice::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AudioDevice::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AudioDevice::isDefaultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioDevice::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioDevice::isMutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AudioDevice::iconNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AudioDevice::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
