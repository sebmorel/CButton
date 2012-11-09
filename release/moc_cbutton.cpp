/****************************************************************************
** Meta object code from reading C++ file 'cbutton.h'
**
** Created: Tue 6. Nov 09:13:19 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLockButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLockButton[] = {
    "CLockButton\0\0checked\0_clicked(bool)\0"
};

void CLockButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CLockButton *_t = static_cast<CLockButton *>(_o);
        switch (_id) {
        case 0: _t->_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CLockButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CLockButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CLockButton,
      qt_meta_data_CLockButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CLockButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CLockButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CLockButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLockButton))
        return static_cast<void*>(const_cast< CLockButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CLockButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CIconButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CIconButton[] = {
    "CIconButton\0"
};

void CIconButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CIconButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CIconButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_CIconButton,
      qt_meta_data_CIconButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CIconButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CIconButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CIconButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CIconButton))
        return static_cast<void*>(const_cast< CIconButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int CIconButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CNotification[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CNotification[] = {
    "CNotification\0"
};

void CNotification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CNotification::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CNotification::staticMetaObject = {
    { &CIconButton::staticMetaObject, qt_meta_stringdata_CNotification,
      qt_meta_data_CNotification, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CNotification::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CNotification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CNotification::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CNotification))
        return static_cast<void*>(const_cast< CNotification*>(this));
    return CIconButton::qt_metacast(_clname);
}

int CNotification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIconButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CBulleChat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CBulleChat[] = {
    "CBulleChat\0"
};

void CBulleChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CBulleChat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CBulleChat::staticMetaObject = {
    { &CIconButton::staticMetaObject, qt_meta_stringdata_CBulleChat,
      qt_meta_data_CBulleChat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CBulleChat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CBulleChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CBulleChat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CBulleChat))
        return static_cast<void*>(const_cast< CBulleChat*>(this));
    return CIconButton::qt_metacast(_clname);
}

int CBulleChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CIconButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
