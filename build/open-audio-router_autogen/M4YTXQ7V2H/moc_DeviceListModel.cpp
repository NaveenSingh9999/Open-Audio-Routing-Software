/****************************************************************************
** Meta object code from reading C++ file 'DeviceListModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/models/DeviceListModel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceListModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DeviceListModel_t {
    uint offsetsAndSizes[38];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[13];
    char stringdata7[9];
    char stringdata8[12];
    char stringdata9[13];
    char stringdata10[10];
    char stringdata11[6];
    char stringdata12[17];
    char stringdata13[16];
    char stringdata14[20];
    char stringdata15[17];
    char stringdata16[22];
    char stringdata17[23];
    char stringdata18[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DeviceListModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DeviceListModel_t qt_meta_stringdata_DeviceListModel = {
    {
        QT_MOC_LITERAL(0, 15),  // "DeviceListModel"
        QT_MOC_LITERAL(16, 12),  // "countChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 9),  // "addDevice"
        QT_MOC_LITERAL(40, 12),  // "AudioDevice*"
        QT_MOC_LITERAL(53, 6),  // "device"
        QT_MOC_LITERAL(60, 12),  // "removeDevice"
        QT_MOC_LITERAL(73, 8),  // "uint32_t"
        QT_MOC_LITERAL(82, 11),  // "deviceIndex"
        QT_MOC_LITERAL(94, 12),  // "updateDevice"
        QT_MOC_LITERAL(107, 9),  // "getDevice"
        QT_MOC_LITERAL(117, 5),  // "index"
        QT_MOC_LITERAL(123, 16),  // "getDeviceByIndex"
        QT_MOC_LITERAL(140, 15),  // "getInputDevices"
        QT_MOC_LITERAL(156, 19),  // "QList<AudioDevice*>"
        QT_MOC_LITERAL(176, 16),  // "getOutputDevices"
        QT_MOC_LITERAL(193, 21),  // "getDefaultInputDevice"
        QT_MOC_LITERAL(215, 22),  // "getDefaultOutputDevice"
        QT_MOC_LITERAL(238, 5)   // "count"
    },
    "DeviceListModel",
    "countChanged",
    "",
    "addDevice",
    "AudioDevice*",
    "device",
    "removeDevice",
    "uint32_t",
    "deviceIndex",
    "updateDevice",
    "getDevice",
    "index",
    "getDeviceByIndex",
    "getInputDevices",
    "QList<AudioDevice*>",
    "getOutputDevices",
    "getDefaultInputDevice",
    "getDefaultOutputDevice",
    "count"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DeviceListModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   75,    2, 0x02,    3 /* Public */,
       6,    1,   78,    2, 0x02,    5 /* Public */,
       9,    1,   81,    2, 0x02,    7 /* Public */,
      10,    1,   84,    2, 0x102,    9 /* Public | MethodIsConst  */,
      12,    1,   87,    2, 0x102,   11 /* Public | MethodIsConst  */,
      13,    0,   90,    2, 0x102,   13 /* Public | MethodIsConst  */,
      15,    0,   91,    2, 0x102,   14 /* Public | MethodIsConst  */,
      16,    0,   92,    2, 0x102,   15 /* Public | MethodIsConst  */,
      17,    0,   93,    2, 0x102,   16 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 4, QMetaType::Int,   11,
    0x80000000 | 4, 0x80000000 | 7,    8,
    0x80000000 | 14,
    0x80000000 | 14,
    0x80000000 | 4,
    0x80000000 | 4,

 // properties: name, type, flags
      18, QMetaType::Int, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_DeviceListModel.offsetsAndSizes,
    qt_meta_data_DeviceListModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DeviceListModel_t,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceListModel, std::true_type>,
        // method 'countChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'removeDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'updateDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'getDevice'
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDeviceByIndex'
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'getInputDevices'
        QtPrivate::TypeAndForceComplete<QList<AudioDevice*>, std::false_type>,
        // method 'getOutputDevices'
        QtPrivate::TypeAndForceComplete<QList<AudioDevice*>, std::false_type>,
        // method 'getDefaultInputDevice'
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'getDefaultOutputDevice'
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>
    >,
    nullptr
} };

void DeviceListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->addDevice((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 2: _t->removeDevice((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 3: _t->updateDevice((*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[1]))); break;
        case 4: { AudioDevice* _r = _t->getDevice((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< AudioDevice**>(_a[0]) = std::move(_r); }  break;
        case 5: { AudioDevice* _r = _t->getDeviceByIndex((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< AudioDevice**>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<AudioDevice*> _r = _t->getInputDevices();
            if (_a[0]) *reinterpret_cast< QList<AudioDevice*>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<AudioDevice*> _r = _t->getOutputDevices();
            if (_a[0]) *reinterpret_cast< QList<AudioDevice*>*>(_a[0]) = std::move(_r); }  break;
        case 8: { AudioDevice* _r = _t->getDefaultInputDevice();
            if (_a[0]) *reinterpret_cast< AudioDevice**>(_a[0]) = std::move(_r); }  break;
        case 9: { AudioDevice* _r = _t->getDefaultOutputDevice();
            if (_a[0]) *reinterpret_cast< AudioDevice**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceListModel::*)();
            if (_t _q_method = &DeviceListModel::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeviceListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DeviceListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DeviceListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DeviceListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
