/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created: Mon Mar 11 17:16:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pwned__tcp_server[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   19,   18,   18, 0x05,
      69,   57,   18,   18, 0x05,
     105,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   18,   18,   18, 0x08,
     162,   18,   18,   18, 0x08,
     180,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pwned__tcp_server[] = {
    "pwned::tcp_server\0\0socket\0"
    "socket_connection(QTcpSocket*)\0"
    "socket,data\0socket_data(QTcpSocket*,QByteArray)\0"
    "socket_disconnected(QTcpSocket*)\0"
    "handle_new_connection()\0handle_new_data()\0"
    "handle_disconnect()\0"
};

void pwned::tcp_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tcp_server *_t = static_cast<tcp_server *>(_o);
        switch (_id) {
        case 0: _t->socket_connection((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 1: _t->socket_data((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->socket_disconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->handle_new_connection(); break;
        case 4: _t->handle_new_data(); break;
        case 5: _t->handle_disconnect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pwned::tcp_server::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pwned::tcp_server::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_pwned__tcp_server,
      qt_meta_data_pwned__tcp_server, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pwned::tcp_server::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pwned::tcp_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pwned::tcp_server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pwned__tcp_server))
        return static_cast<void*>(const_cast< tcp_server*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int pwned::tcp_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void pwned::tcp_server::socket_connection(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pwned::tcp_server::socket_data(QTcpSocket * _t1, QByteArray const & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void pwned::tcp_server::socket_disconnected(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
