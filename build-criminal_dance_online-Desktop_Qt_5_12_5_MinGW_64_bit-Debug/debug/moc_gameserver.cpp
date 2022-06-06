/****************************************************************************
** Meta object code from reading C++ file 'gameserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../criminal_dance_online/server/gameserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameServer_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameServer_t qt_meta_stringdata_GameServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GameServer"
QT_MOC_LITERAL(1, 11, 11), // "receiveJson"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "GameServerInterface*"
QT_MOC_LITERAL(4, 45, 6), // "sender"
QT_MOC_LITERAL(5, 52, 4), // "json"
QT_MOC_LITERAL(6, 57, 10), // "stopServer"
QT_MOC_LITERAL(7, 68, 18), // "startGameBroadcast"
QT_MOC_LITERAL(8, 87, 9), // "broadcast"
QT_MOC_LITERAL(9, 97, 7), // "exclude"
QT_MOC_LITERAL(10, 105, 12), // "jsonReceived"
QT_MOC_LITERAL(11, 118, 16) // "userDisconnected"

    },
    "GameServer\0receiveJson\0\0GameServerInterface*\0"
    "sender\0json\0stopServer\0startGameBroadcast\0"
    "broadcast\0exclude\0jsonReceived\0"
    "userDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    2,   56,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x2a /* Public | MethodCloned */,
      10,    2,   64,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QJsonObject,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 3,    5,    9,
    QMetaType::Void, QMetaType::QJsonObject,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QJsonObject,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void GameServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveJson((*reinterpret_cast< GameServerInterface*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 1: _t->stopServer(); break;
        case 2: _t->startGameBroadcast(); break;
        case 3: _t->broadcast((*reinterpret_cast< const QJsonObject(*)>(_a[1])),(*reinterpret_cast< GameServerInterface*(*)>(_a[2]))); break;
        case 4: _t->broadcast((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 5: _t->jsonReceived((*reinterpret_cast< GameServerInterface*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 6: _t->userDisconnected((*reinterpret_cast< GameServerInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameServerInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameServerInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameServerInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameServerInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameServer::*)(GameServerInterface * , const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameServer::receiveJson)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameServer::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_GameServer.data,
    qt_meta_data_GameServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int GameServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GameServer::receiveJson(GameServerInterface * _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
