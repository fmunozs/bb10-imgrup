/****************************************************************************
** Meta object code from reading C++ file 'upload.hpp'
**
** Created: Sun Jan 20 00:11:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/upload.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upload.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Upload[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    8,    7,    7, 0x05,
      43,   32,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   63,    7,    7, 0x0a,
     103,   92,    7,    7, 0x0a,

 // methods: signature, parameters, type, tag, flags
     140,  131,    7,    7, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Upload[] = {
    "Upload\0\0data\0resulturl(QString)\0"
    "percentage\0resultprogress(int)\0reply\0"
    "parser(QNetworkReply*)\0sent,total\0"
    "progresscalc(qint64,qint64)\0filename\0"
    "upload_request(QString)\0"
};

void Upload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Upload *_t = static_cast<Upload *>(_o);
        switch (_id) {
        case 0: _t->resulturl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->resultprogress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->parser((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->progresscalc((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->upload_request((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Upload::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Upload::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Upload,
      qt_meta_data_Upload, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Upload::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Upload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Upload::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Upload))
        return static_cast<void*>(const_cast< Upload*>(this));
    return QObject::qt_metacast(_clname);
}

int Upload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Upload::resulturl(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Upload::resultprogress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
