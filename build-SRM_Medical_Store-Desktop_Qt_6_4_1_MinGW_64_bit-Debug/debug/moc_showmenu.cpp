/****************************************************************************
** Meta object code from reading C++ file 'showmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Projects/Cpp project/SRM_Medical_Store/showmenu.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showmenu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ShowMenu_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[28];
    char stringdata5[23];
    char stringdata6[25];
    char stringdata7[30];
    char stringdata8[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ShowMenu_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ShowMenu_t qt_meta_stringdata_ShowMenu = {
    {
        QT_MOC_LITERAL(0, 8),  // "ShowMenu"
        QT_MOC_LITERAL(9, 24),  // "on_BillingButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 23),  // "on_ExpiryButton_clicked"
        QT_MOC_LITERAL(59, 27),  // "on_PlaceOrderButton_clicked"
        QT_MOC_LITERAL(87, 22),  // "on_FilesButton_clicked"
        QT_MOC_LITERAL(110, 24),  // "on_MedFileButton_clicked"
        QT_MOC_LITERAL(135, 29),  // "on_SupplierFileButton_clicked"
        QT_MOC_LITERAL(165, 32)   // "on_TransactionFileButton_clicked"
    },
    "ShowMenu",
    "on_BillingButton_clicked",
    "",
    "on_ExpiryButton_clicked",
    "on_PlaceOrderButton_clicked",
    "on_FilesButton_clicked",
    "on_MedFileButton_clicked",
    "on_SupplierFileButton_clicked",
    "on_TransactionFileButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ShowMenu[] = {

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

Q_CONSTINIT const QMetaObject ShowMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ShowMenu.offsetsAndSizes,
    qt_meta_data_ShowMenu,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ShowMenu_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShowMenu, std::true_type>,
        // method 'on_BillingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ExpiryButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlaceOrderButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_FilesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MedFileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SupplierFileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TransactionFileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ShowMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_BillingButton_clicked(); break;
        case 1: _t->on_ExpiryButton_clicked(); break;
        case 2: _t->on_PlaceOrderButton_clicked(); break;
        case 3: _t->on_FilesButton_clicked(); break;
        case 4: _t->on_MedFileButton_clicked(); break;
        case 5: _t->on_SupplierFileButton_clicked(); break;
        case 6: _t->on_TransactionFileButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ShowMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShowMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
