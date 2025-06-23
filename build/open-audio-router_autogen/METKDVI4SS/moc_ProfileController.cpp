/****************************************************************************
** Meta object code from reading C++ file 'ProfileController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/controllers/ProfileController.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProfileController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ProfileController_t {
    uint offsetsAndSizes[38];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[13];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[14];
    char stringdata13[14];
    char stringdata14[8];
    char stringdata15[8];
    char stringdata16[15];
    char stringdata17[13];
    char stringdata18[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ProfileController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ProfileController_t qt_meta_stringdata_ProfileController = {
    {
        QT_MOC_LITERAL(0, 17),  // "ProfileController"
        QT_MOC_LITERAL(18, 19),  // "profileNamesChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 21),  // "currentProfileChanged"
        QT_MOC_LITERAL(61, 12),  // "profileSaved"
        QT_MOC_LITERAL(74, 4),  // "name"
        QT_MOC_LITERAL(79, 13),  // "profileLoaded"
        QT_MOC_LITERAL(93, 14),  // "profileDeleted"
        QT_MOC_LITERAL(108, 12),  // "loadProfiles"
        QT_MOC_LITERAL(121, 12),  // "saveProfiles"
        QT_MOC_LITERAL(134, 11),  // "saveProfile"
        QT_MOC_LITERAL(146, 11),  // "loadProfile"
        QT_MOC_LITERAL(158, 13),  // "deleteProfile"
        QT_MOC_LITERAL(172, 13),  // "renameProfile"
        QT_MOC_LITERAL(186, 7),  // "oldName"
        QT_MOC_LITERAL(194, 7),  // "newName"
        QT_MOC_LITERAL(202, 14),  // "getProfileData"
        QT_MOC_LITERAL(217, 12),  // "profileNames"
        QT_MOC_LITERAL(230, 14)   // "currentProfile"
    },
    "ProfileController",
    "profileNamesChanged",
    "",
    "currentProfileChanged",
    "profileSaved",
    "name",
    "profileLoaded",
    "profileDeleted",
    "loadProfiles",
    "saveProfiles",
    "saveProfile",
    "loadProfile",
    "deleteProfile",
    "renameProfile",
    "oldName",
    "newName",
    "getProfileData",
    "profileNames",
    "currentProfile"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ProfileController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,
       3,    0,   87,    2, 0x06,    4 /* Public */,
       4,    1,   88,    2, 0x06,    5 /* Public */,
       6,    1,   91,    2, 0x06,    7 /* Public */,
       7,    1,   94,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   97,    2, 0x08,   11 /* Private */,
       9,    0,   98,    2, 0x08,   12 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   99,    2, 0x02,   13 /* Public */,
      11,    1,  102,    2, 0x02,   15 /* Public */,
      12,    1,  105,    2, 0x02,   17 /* Public */,
      13,    2,  108,    2, 0x02,   19 /* Public */,
      16,    1,  113,    2, 0x02,   22 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::QJsonObject, QMetaType::QString,    5,

 // properties: name, type, flags
      17, QMetaType::QStringList, 0x00015001, uint(0), 0,
      18, QMetaType::QString, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProfileController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProfileController.offsetsAndSizes,
    qt_meta_data_ProfileController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ProfileController_t,
        // property 'profileNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'currentProfile'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProfileController, std::true_type>,
        // method 'profileNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentProfileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'profileSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'profileLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'profileDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadProfiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveProfiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'loadProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'renameProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getProfileData'
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ProfileController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfileController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->profileNamesChanged(); break;
        case 1: _t->currentProfileChanged(); break;
        case 2: _t->profileSaved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->profileLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->profileDeleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->loadProfiles(); break;
        case 6: _t->saveProfiles(); break;
        case 7: _t->saveProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->loadProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->deleteProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->renameProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: { QJsonObject _r = _t->getProfileData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProfileController::*)();
            if (_t _q_method = &ProfileController::profileNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProfileController::*)();
            if (_t _q_method = &ProfileController::currentProfileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProfileController::*)(const QString & );
            if (_t _q_method = &ProfileController::profileSaved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProfileController::*)(const QString & );
            if (_t _q_method = &ProfileController::profileLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProfileController::*)(const QString & );
            if (_t _q_method = &ProfileController::profileDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ProfileController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->profileNames(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentProfile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ProfileController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProfileController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ProfileController::profileNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProfileController::currentProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProfileController::profileSaved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProfileController::profileLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProfileController::profileDeleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
