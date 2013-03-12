/****************************************************************************
** Meta object code from reading C++ file 'http_handler.h'
**
** Created: Mon Mar 11 21:10:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "http_handler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_http_handler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   31,   13,   13, 0x0a,
      69,   31,   13,   13, 0x0a,
     114,  102,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_http_handler[] = {
    "http_handler\0\0uri\0get(QString)\0socket\0"
    "socket_connection(QTcpSocket*)\0"
    "socket_disconnected(QTcpSocket*)\0"
    "socket,data\0socket_data(QTcpSocket*,QByteArray)\0"
};

void http_handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        http_handler *_t = static_cast<http_handler *>(_o);
        switch (_id) {
        case 0: _t->get((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->socket_connection((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->socket_disconnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->socket_data((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData http_handler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject http_handler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_http_handler,
      qt_meta_data_http_handler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &http_handler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *http_handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *http_handler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_http_handler))
        return static_cast<void*>(const_cast< http_handler*>(this));
    return QObject::qt_metacast(_clname);
}

int http_handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void http_handler::get(QString const & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
