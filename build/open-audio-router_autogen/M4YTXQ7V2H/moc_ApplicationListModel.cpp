/****************************************************************************
** Meta object code from reading C++ file 'ApplicationListModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/models/ApplicationListModel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationListModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ApplicationListModel_t {
    uint offsetsAndSizes[36];
    char stringdata0[21];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[4];
    char stringdata6[18];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[18];
    char stringdata10[15];
    char stringdata11[6];
    char stringdata12[25];
    char stringdata13[25];
    char stringdata14[25];
    char stringdata15[12];
    char stringdata16[23];
    char stringdata17[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ApplicationListModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ApplicationListModel_t qt_meta_stringdata_ApplicationListModel = {
    {
        QT_MOC_LITERAL(0, 20),  // "ApplicationListModel"
        QT_MOC_LITERAL(21, 12),  // "countChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "addApplication"
        QT_MOC_LITERAL(50, 17),  // "AudioApplication*"
        QT_MOC_LITERAL(68, 3),  // "app"
        QT_MOC_LITERAL(72, 17),  // "removeApplication"
        QT_MOC_LITERAL(90, 8),  // "uint32_t"
        QT_MOC_LITERAL(99, 8),  // "clientId"
        QT_MOC_LITERAL(108, 17),  // "updateApplication"
        QT_MOC_LITERAL(126, 14),  // "getApplication"
        QT_MOC_LITERAL(141, 5),  // "index"
        QT_MOC_LITERAL(147, 24),  // "getApplicationByClientId"
        QT_MOC_LITERAL(172, 24),  // "getApplicationsForDevice"
        QT_MOC_LITERAL(197, 24),  // "QList<AudioApplication*>"
        QT_MOC_LITERAL(222, 11),  // "deviceIndex"
        QT_MOC_LITERAL(234, 22),  // "getPlayingApplications"
        QT_MOC_LITERAL(257, 5)   // "count"
    },
    "ApplicationListModel",
    "countChanged",
    "",
    "addApplication",
    "AudioApplication*",
    "app",
    "removeApplication",
    "uint32_t",
    "clientId",
    "updateApplication",
    "getApplication",
    "index",
    "getApplicationByClientId",
    "getApplicationsForDevice",
    "QList<AudioApplication*>",
    "deviceIndex",
    "getPlayingApplications",
    "count"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ApplicationListModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x02,    3 /* Public */,
       6,    1,   66,    2, 0x02,    5 /* Public */,
       9,    1,   69,    2, 0x02,    7 /* Public */,
      10,    1,   72,    2, 0x102,    9 /* Public | MethodIsConst  */,
      12,    1,   75,    2, 0x102,   11 /* Public | MethodIsConst  */,
      13,    1,   78,    2, 0x102,   13 /* Public | MethodIsConst  */,
      16,    0,   81,    2, 0x102,   15 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 4, QMetaType::Int,   11,
    0x80000000 | 4, 0x80000000 | 7,    8,
    0x80000000 | 14, 0x80000000 | 7,   15,
    0x80000000 | 14,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ApplicationListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ApplicationListModel.offsetsAndSizes,
    qt_meta_data_ApplicationListModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ApplicationListModel_t,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ApplicationListModel, std::true_type>,
        // method 'countChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addApplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'removeApplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'updateApplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        // method 'getApplication'
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getApplicationByClientId'
        QtPrivate::TypeAndForceComplete<AudioApplication *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'getApplicationsForDevice'
        QtPrivate::TypeAndForceComplete<QList<AudioApplication*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'getPlayingApplications'
        QtPrivate::TypeAndForceComplete<QList<AudioApplication*>, std::false_type>
    >,
    nullptr
} };

void ApplicationListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->addApplication((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 2: _t->removeApplication((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 3: _t->updateApplication((*reinterpret_cast< std::add_pointer_t<AudioApplication*>>(_a[1]))); break;
        case 4: { AudioApplication* _r = _t->getApplication((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< AudioApplication**>(_a[0]) = std::move(_r); }  break;
        case 5: { AudioApplication* _r = _t->getApplicationByClientId((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< AudioApplication**>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<AudioApplication*> _r = _t->getApplicationsForDevice((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<AudioApplication*>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<AudioApplication*> _r = _t->getPlayingApplications();
            if (_a[0]) *reinterpret_cast< QList<AudioApplication*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
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
            using _t = void (ApplicationListModel::*)();
            if (_t _q_method = &ApplicationListModel::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ApplicationListModel *>(_o);
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

const QMetaObject *ApplicationListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ApplicationListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ApplicationListModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
