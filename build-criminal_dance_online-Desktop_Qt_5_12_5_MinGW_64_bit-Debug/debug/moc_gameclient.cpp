/****************************************************************************
** Meta object code from reading C++ file 'gameclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../criminal_dance_online/server/gameclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameClient_t {
    QByteArrayData data[12];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameClient_t qt_meta_stringdata_GameClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameClient"
QT_MOC_LITERAL(1, 11, 9), // "connected"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "disconnected"
QT_MOC_LITERAL(4, 35, 11), // "receiveJson"
QT_MOC_LITERAL(5, 47, 4), // "json"
QT_MOC_LITERAL(6, 52, 15), // "connectToServer"
QT_MOC_LITERAL(7, 68, 12), // "QHostAddress"
QT_MOC_LITERAL(8, 81, 7), // "address"
QT_MOC_LITERAL(9, 89, 4), // "port"
QT_MOC_LITERAL(10, 94, 18), // "disconnectFromHost"
QT_MOC_LITERAL(11, 113, 11) // "onReadyRead"

    },
    "GameClient\0connected\0\0disconnected\0"
    "receiveJson\0json\0connectToServer\0"
    "QHostAddress\0address\0port\0disconnectFromHost\0"
    "onReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   49,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x0a /* Public */,
      11,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::UShort,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->receiveJson((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 3: _t->connectToServer((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 4: _t->disconnectFromHost(); break;
        case 5: _t->onReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameClient::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameClient::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameClient::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameClient::receiveJson)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GameClient.data,
    qt_meta_data_GameClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GameClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameClient::receiveJson(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
