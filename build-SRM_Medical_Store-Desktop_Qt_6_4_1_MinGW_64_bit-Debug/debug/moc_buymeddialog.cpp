/****************************************************************************
** Meta object code from reading C++ file 'buymeddialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Projects/Cpp project/SRM_Medical_Store/buymeddialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buymeddialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BuyMedDialog_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[25];
    char stringdata5[25];
    char stringdata6[25];
    char stringdata7[20];
    char stringdata8[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BuyMedDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BuyMedDialog_t qt_meta_stringdata_BuyMedDialog = {
    {
        QT_MOC_LITERAL(0, 12),  // "BuyMedDialog"
        QT_MOC_LITERAL(13, 30),  // "on_generatebill_button_clicked"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 20),  // "on_addbutton_clicked"
        QT_MOC_LITERAL(66, 24),  // "on_search_button_clicked"
        QT_MOC_LITERAL(91, 24),  // "on_delete_button_clicked"
        QT_MOC_LITERAL(116, 24),  // "on_cancel_button_clicked"
        QT_MOC_LITERAL(141, 19),  // "WriteTransactionXML"
        QT_MOC_LITERAL(161, 16)   // "EditMedicineList"
    },
    "BuyMedDialog",
    "on_generatebill_button_clicked",
    "",
    "on_addbutton_clicked",
    "on_search_button_clicked",
    "on_delete_button_clicked",
    "on_cancel_button_clicked",
    "WriteTransactionXML",
    "EditMedicineList"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BuyMedDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BuyMedDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BuyMedDialog.offsetsAndSizes,
    qt_meta_data_BuyMedDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BuyMedDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BuyMedDialog, std::true_type>,
        // method 'on_generatebill_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_search_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delete_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancel_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'WriteTransactionXML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EditMedicineList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BuyMedDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BuyMedDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_generatebill_button_clicked(); break;
        case 1: _t->on_addbutton_clicked(); break;
        case 2: _t->on_search_button_clicked(); break;
        case 3: _t->on_delete_button_clicked(); break;
        case 4: _t->on_cancel_button_clicked(); break;
        case 5: _t->WriteTransactionXML(); break;
        case 6: _t->EditMedicineList(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *BuyMedDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BuyMedDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BuyMedDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BuyMedDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
