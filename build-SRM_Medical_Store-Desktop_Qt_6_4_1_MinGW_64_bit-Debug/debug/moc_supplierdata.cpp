/****************************************************************************
** Meta object code from reading C++ file 'supplierdata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Projects/Cpp project/SRM_Medical_Store/supplierdata.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'supplierdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
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
struct qt_meta_stringdata_supplierData_t {
    uint offsetsAndSizes[10];
    char stringdata0[13];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_supplierData_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_supplierData_t qt_meta_stringdata_supplierData = {
    {
        QT_MOC_LITERAL(0, 12),  // "supplierData"
        QT_MOC_LITERAL(13, 20),  // "on_AddButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 23),  // "on_DeleteButton_clicked"
        QT_MOC_LITERAL(59, 22)   // "on_AddButton_2_clicked"
    },
    "supplierData",
    "on_AddButton_clicked",
    "",
    "on_DeleteButton_clicked",
    "on_AddButton_2_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_supplierData[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject supplierData::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_supplierData.offsetsAndSizes,
    qt_meta_data_supplierData,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_supplierData_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<supplierData, std::true_type>,
        // method 'on_AddButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_AddButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void supplierData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<supplierData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_AddButton_clicked(); break;
        case 1: _t->on_DeleteButton_clicked(); break;
        case 2: _t->on_AddButton_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *supplierData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *supplierData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_supplierData.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int supplierData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
