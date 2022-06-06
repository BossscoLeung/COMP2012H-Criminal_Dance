/****************************************************************************
** Meta object code from reading C++ file 'render.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../criminal_dance_online/render/render.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'render.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Render_t {
    QByteArrayData data[12];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Render_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Render_t qt_meta_stringdata_Render = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Render"
QT_MOC_LITERAL(1, 7, 14), // "displayDetails"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "player_name"
QT_MOC_LITERAL(4, 35, 14), // "num_cards_left"
QT_MOC_LITERAL(5, 50, 13), // "is_accomplice"
QT_MOC_LITERAL(6, 64, 7), // "handles"
QT_MOC_LITERAL(7, 72, 5), // "Card*"
QT_MOC_LITERAL(8, 78, 4), // "card"
QT_MOC_LITERAL(9, 83, 5), // "index"
QT_MOC_LITERAL(10, 89, 8), // "nextTurn"
QT_MOC_LITERAL(11, 98, 17) // "printDebugMessage"

    },
    "Render\0displayDetails\0\0player_name\0"
    "num_cards_left\0is_accomplice\0handles\0"
    "Card*\0card\0index\0nextTurn\0printDebugMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Render[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       6,    2,   41,    2, 0x0a /* Public */,
      10,    0,   46,    2, 0x0a /* Public */,
      11,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Render::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Render *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->handles((*reinterpret_cast< Card*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->nextTurn(); break;
        case 3: _t->printDebugMessage(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Render::staticMetaObject = { {
    &QGraphicsView::staticMetaObject,
    qt_meta_stringdata_Render.data,
    qt_meta_data_Render,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Render::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Render::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Render.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int Render::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
