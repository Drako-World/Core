/****************************************************************************
** Meta object code from reading C++ file 'bitcoin.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BitcoinCore_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinCore_t qt_meta_stringdata_BitcoinCore = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BitcoinCore"
QT_MOC_LITERAL(1, 12, 16), // "initializeResult"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "success"
QT_MOC_LITERAL(4, 38, 33), // "interfaces::BlockAndHeaderTip..."
QT_MOC_LITERAL(5, 72, 8), // "tip_info"
QT_MOC_LITERAL(6, 81, 14), // "shutdownResult"
QT_MOC_LITERAL(7, 96, 16), // "runawayException"
QT_MOC_LITERAL(8, 113, 7), // "message"
QT_MOC_LITERAL(9, 121, 10), // "initialize"
QT_MOC_LITERAL(10, 132, 8) // "shutdown"

    },
    "BitcoinCore\0initializeResult\0\0success\0"
    "interfaces::BlockAndHeaderTipInfo\0"
    "tip_info\0shutdownResult\0runawayException\0"
    "message\0initialize\0shutdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinCore *_t = static_cast<BitcoinCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initializeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< interfaces::BlockAndHeaderTipInfo(*)>(_a[2]))); break;
        case 1: _t->shutdownResult(); break;
        case 2: _t->runawayException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->initialize(); break;
        case 4: _t->shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BitcoinCore::*_t)(bool , interfaces::BlockAndHeaderTipInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinCore::initializeResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinCore::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinCore::shutdownResult)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BitcoinCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinCore::runawayException)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BitcoinCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BitcoinCore.data,
      qt_meta_data_BitcoinCore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitcoinCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinCore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BitcoinCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BitcoinCore::initializeResult(bool _t1, interfaces::BlockAndHeaderTipInfo _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinCore::shutdownResult()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BitcoinCore::runawayException(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_BitcoinApplication_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinApplication_t qt_meta_stringdata_BitcoinApplication = {
    {
QT_MOC_LITERAL(0, 0, 18), // "BitcoinApplication"
QT_MOC_LITERAL(1, 19, 19), // "requestedInitialize"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "requestedShutdown"
QT_MOC_LITERAL(4, 58, 14), // "splashFinished"
QT_MOC_LITERAL(5, 73, 11), // "windowShown"
QT_MOC_LITERAL(6, 85, 11), // "BitcoinGUI*"
QT_MOC_LITERAL(7, 97, 6), // "window"
QT_MOC_LITERAL(8, 104, 16), // "initializeResult"
QT_MOC_LITERAL(9, 121, 7), // "success"
QT_MOC_LITERAL(10, 129, 33), // "interfaces::BlockAndHeaderTip..."
QT_MOC_LITERAL(11, 163, 8), // "tip_info"
QT_MOC_LITERAL(12, 172, 14), // "shutdownResult"
QT_MOC_LITERAL(13, 187, 22), // "handleRunawayException"
QT_MOC_LITERAL(14, 210, 7) // "message"

    },
    "BitcoinApplication\0requestedInitialize\0"
    "\0requestedShutdown\0splashFinished\0"
    "windowShown\0BitcoinGUI*\0window\0"
    "initializeResult\0success\0"
    "interfaces::BlockAndHeaderTipInfo\0"
    "tip_info\0shutdownResult\0handleRunawayException\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   55,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void BitcoinApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinApplication *_t = static_cast<BitcoinApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestedInitialize(); break;
        case 1: _t->requestedShutdown(); break;
        case 2: _t->splashFinished(); break;
        case 3: _t->windowShown((*reinterpret_cast< BitcoinGUI*(*)>(_a[1]))); break;
        case 4: _t->initializeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< interfaces::BlockAndHeaderTipInfo(*)>(_a[2]))); break;
        case 5: _t->shutdownResult(); break;
        case 6: _t->handleRunawayException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BitcoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinApplication::requestedInitialize)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinApplication::requestedShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BitcoinApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinApplication::splashFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BitcoinApplication::*_t)(BitcoinGUI * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BitcoinApplication::windowShown)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BitcoinApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_BitcoinApplication.data,
      qt_meta_data_BitcoinApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BitcoinApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int BitcoinApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BitcoinApplication::requestedInitialize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BitcoinApplication::requestedShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BitcoinApplication::splashFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BitcoinApplication::windowShown(BitcoinGUI * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
