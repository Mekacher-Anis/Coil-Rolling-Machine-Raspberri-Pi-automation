/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "on_start_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "on_save_clicked"
QT_MOC_LITERAL(4, 45, 18), // "on_start_2_clicked"
QT_MOC_LITERAL(5, 64, 17), // "on_save_2_clicked"
QT_MOC_LITERAL(6, 82, 6), // "openDB"
QT_MOC_LITERAL(7, 89, 12), // "QSqlDatabase"
QT_MOC_LITERAL(8, 102, 4), // "name"
QT_MOC_LITERAL(9, 107, 20), // "on_searchBut_clicked"
QT_MOC_LITERAL(10, 128, 22), // "on_tabs_currentChanged"
QT_MOC_LITERAL(11, 151, 5), // "index"
QT_MOC_LITERAL(12, 157, 23), // "on_startMachBut_clicked"
QT_MOC_LITERAL(13, 181, 20), // "on_addWorker_clicked"
QT_MOC_LITERAL(14, 202, 17), // "on_save_3_clicked"
QT_MOC_LITERAL(15, 220, 17), // "on_dltBut_clicked"
QT_MOC_LITERAL(16, 238, 17), // "on_addBut_clicked"
QT_MOC_LITERAL(17, 256, 30), // "on_itemNat_currentIndexChanged"
QT_MOC_LITERAL(18, 287, 3), // "log"
QT_MOC_LITERAL(19, 291, 3), // "txt"
QT_MOC_LITERAL(20, 295, 31), // "on_diagType_currentIndexChanged"
QT_MOC_LITERAL(21, 327, 10) // "machIsDone"

    },
    "MainWindow\0on_start_clicked\0\0"
    "on_save_clicked\0on_start_2_clicked\0"
    "on_save_2_clicked\0openDB\0QSqlDatabase\0"
    "name\0on_searchBut_clicked\0"
    "on_tabs_currentChanged\0index\0"
    "on_startMachBut_clicked\0on_addWorker_clicked\0"
    "on_save_3_clicked\0on_dltBut_clicked\0"
    "on_addBut_clicked\0on_itemNat_currentIndexChanged\0"
    "log\0txt\0on_diagType_currentIndexChanged\0"
    "machIsDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    1,   98,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,
      20,    1,  116,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_start_clicked(); break;
        case 1: _t->on_save_clicked(); break;
        case 2: _t->on_start_2_clicked(); break;
        case 3: _t->on_save_2_clicked(); break;
        case 4: { QSqlDatabase _r = _t->openDB((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_searchBut_clicked(); break;
        case 6: _t->on_tabs_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_startMachBut_clicked(); break;
        case 8: _t->on_addWorker_clicked(); break;
        case 9: _t->on_save_3_clicked(); break;
        case 10: _t->on_dltBut_clicked(); break;
        case 11: _t->on_addBut_clicked(); break;
        case 12: _t->on_itemNat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->on_diagType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->machIsDone(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
