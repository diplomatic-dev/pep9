/****************************************************************************
** Meta object code from reading C++ file 'listingtracepane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "listingtracepane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listingtracepane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListingTracePane_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListingTracePane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListingTracePane_t qt_meta_stringdata_ListingTracePane = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ListingTracePane"
QT_MOC_LITERAL(1, 17, 18), // "labelDoubleClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "Enu::EPane"
QT_MOC_LITERAL(4, 48, 4), // "pane"
QT_MOC_LITERAL(5, 53, 13), // "onFontChanged"
QT_MOC_LITERAL(6, 67, 4), // "font"
QT_MOC_LITERAL(7, 72, 20), // "updateIsCheckedTable"
QT_MOC_LITERAL(8, 93, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 111, 4) // "item"

    },
    "ListingTracePane\0labelDoubleClicked\0"
    "\0Enu::EPane\0pane\0onFontChanged\0font\0"
    "updateIsCheckedTable\0QTableWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListingTracePane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void ListingTracePane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListingTracePane *_t = static_cast<ListingTracePane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelDoubleClicked((*reinterpret_cast< Enu::EPane(*)>(_a[1]))); break;
        case 1: _t->onFontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 2: _t->updateIsCheckedTable((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListingTracePane::*)(Enu::EPane );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListingTracePane::labelDoubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ListingTracePane::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListingTracePane.data,
      qt_meta_data_ListingTracePane,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ListingTracePane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListingTracePane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListingTracePane.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ListingTracePane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ListingTracePane::labelDoubleClicked(Enu::EPane _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
