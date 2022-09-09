/****************************************************************************
** Meta object code from reading C++ file 'admindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminDialog_t {
    QByteArrayData data[21];
    char stringdata[493];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AdminDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AdminDialog_t qt_meta_stringdata_AdminDialog = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 16),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 15),
QT_MOC_LITERAL(4, 46, 22),
QT_MOC_LITERAL(5, 69, 5),
QT_MOC_LITERAL(6, 75, 26),
QT_MOC_LITERAL(7, 102, 28),
QT_MOC_LITERAL(8, 131, 28),
QT_MOC_LITERAL(9, 160, 26),
QT_MOC_LITERAL(10, 187, 28),
QT_MOC_LITERAL(11, 216, 30),
QT_MOC_LITERAL(12, 247, 30),
QT_MOC_LITERAL(13, 278, 28),
QT_MOC_LITERAL(14, 307, 24),
QT_MOC_LITERAL(15, 332, 31),
QT_MOC_LITERAL(16, 364, 33),
QT_MOC_LITERAL(17, 398, 23),
QT_MOC_LITERAL(18, 422, 21),
QT_MOC_LITERAL(19, 444, 23),
QT_MOC_LITERAL(20, 468, 23)
    },
    "AdminDialog\0on_Write_clicked\0\0"
    "on_Read_clicked\0on_tableView_activated\0"
    "index\0on_pushButton_save_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_update_clicked\0"
    "on_pushButton_load_clicked\0"
    "on_pushButton_save_2_clicked\0"
    "on_pushButton_update_2_clicked\0"
    "on_pushButton_delete_2_clicked\0"
    "on_pushButton_load_2_clicked\0"
    "on_tableView_2_activated\0"
    "on_comboBox_currentIndexChanged\0"
    "on_comboBox_2_currentIndexChanged\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08,
       3,    0,  105,    2, 0x08,
       4,    1,  106,    2, 0x08,
       6,    0,  109,    2, 0x08,
       7,    0,  110,    2, 0x08,
       8,    0,  111,    2, 0x08,
       9,    0,  112,    2, 0x08,
      10,    0,  113,    2, 0x08,
      11,    0,  114,    2, 0x08,
      12,    0,  115,    2, 0x08,
      13,    0,  116,    2, 0x08,
      14,    1,  117,    2, 0x08,
      15,    1,  120,    2, 0x08,
      16,    1,  123,    2, 0x08,
      17,    0,  126,    2, 0x08,
      18,    0,  127,    2, 0x08,
      19,    0,  128,    2, 0x08,
      20,    0,  129,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminDialog *_t = static_cast<AdminDialog *>(_o);
        switch (_id) {
        case 0: _t->on_Write_clicked(); break;
        case 1: _t->on_Read_clicked(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_save_clicked(); break;
        case 4: _t->on_pushButton_delete_clicked(); break;
        case 5: _t->on_pushButton_update_clicked(); break;
        case 6: _t->on_pushButton_load_clicked(); break;
        case 7: _t->on_pushButton_save_2_clicked(); break;
        case 8: _t->on_pushButton_update_2_clicked(); break;
        case 9: _t->on_pushButton_delete_2_clicked(); break;
        case 10: _t->on_pushButton_load_2_clicked(); break;
        case 11: _t->on_tableView_2_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_pushButton_2_clicked(); break;
        case 15: _t->on_pushButton_clicked(); break;
        case 16: _t->on_pushButton_3_clicked(); break;
        case 17: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AdminDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminDialog.data,
      qt_meta_data_AdminDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AdminDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdminDialog.stringdata))
        return static_cast<void*>(const_cast< AdminDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdminDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
