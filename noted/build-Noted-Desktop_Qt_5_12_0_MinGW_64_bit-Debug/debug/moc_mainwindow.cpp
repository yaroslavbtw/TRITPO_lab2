/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Noted/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
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
QT_MOC_LITERAL(1, 11, 18), // "on_addNote_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(4, 55, 15), // "on_dayT_clicked"
QT_MOC_LITERAL(5, 71, 15), // "on_impT_clicked"
QT_MOC_LITERAL(6, 87, 16), // "on_planT_clicked"
QT_MOC_LITERAL(7, 104, 21), // "on_complTasks_clicked"
QT_MOC_LITERAL(8, 126, 22), // "on_boolPlanned_toggled"
QT_MOC_LITERAL(9, 149, 7), // "checked"
QT_MOC_LITERAL(10, 157, 24), // "on_boolCompleted_toggled"
QT_MOC_LITERAL(11, 182, 18), // "on_addType_clicked"
QT_MOC_LITERAL(12, 201, 25), // "on_noteList_doubleClicked"
QT_MOC_LITERAL(13, 227, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 239, 5), // "index"
QT_MOC_LITERAL(15, 245, 22), // "on_applyButton_clicked"
QT_MOC_LITERAL(16, 268, 21), // "on_editButton_clicked"
QT_MOC_LITERAL(17, 290, 23), // "on_addTypeApply_clicked"
QT_MOC_LITERAL(18, 314, 23) // "on_addNoteApply_clicked"

    },
    "MainWindow\0on_addNote_clicked\0\0"
    "on_returnButton_clicked\0on_dayT_clicked\0"
    "on_impT_clicked\0on_planT_clicked\0"
    "on_complTasks_clicked\0on_boolPlanned_toggled\0"
    "checked\0on_boolCompleted_toggled\0"
    "on_addType_clicked\0on_noteList_doubleClicked\0"
    "QModelIndex\0index\0on_applyButton_clicked\0"
    "on_editButton_clicked\0on_addTypeApply_clicked\0"
    "on_addNoteApply_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addNote_clicked(); break;
        case 1: _t->on_returnButton_clicked(); break;
        case 2: _t->on_dayT_clicked(); break;
        case 3: _t->on_impT_clicked(); break;
        case 4: _t->on_planT_clicked(); break;
        case 5: _t->on_complTasks_clicked(); break;
        case 6: _t->on_boolPlanned_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_boolCompleted_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_addType_clicked(); break;
        case 9: _t->on_noteList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_applyButton_clicked(); break;
        case 11: _t->on_editButton_clicked(); break;
        case 12: _t->on_addTypeApply_clicked(); break;
        case 13: _t->on_addNoteApply_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
