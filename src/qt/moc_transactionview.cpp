/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[34];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionView"
QT_MOC_LITERAL(1, 16, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 5), // "title"
QT_MOC_LITERAL(5, 45, 5), // "style"
QT_MOC_LITERAL(6, 51, 9), // "bumpedFee"
QT_MOC_LITERAL(7, 61, 7), // "uint256"
QT_MOC_LITERAL(8, 69, 4), // "txid"
QT_MOC_LITERAL(9, 74, 14), // "contextualMenu"
QT_MOC_LITERAL(10, 89, 16), // "dateRangeChanged"
QT_MOC_LITERAL(11, 106, 11), // "showDetails"
QT_MOC_LITERAL(12, 118, 11), // "copyAddress"
QT_MOC_LITERAL(13, 130, 9), // "editLabel"
QT_MOC_LITERAL(14, 140, 9), // "copyLabel"
QT_MOC_LITERAL(15, 150, 10), // "copyAmount"
QT_MOC_LITERAL(16, 161, 8), // "copyTxID"
QT_MOC_LITERAL(17, 170, 9), // "copyTxHex"
QT_MOC_LITERAL(18, 180, 15), // "copyTxPlainText"
QT_MOC_LITERAL(19, 196, 19), // "openThirdPartyTxUrl"
QT_MOC_LITERAL(20, 216, 3), // "url"
QT_MOC_LITERAL(21, 220, 21), // "updateWatchOnlyColumn"
QT_MOC_LITERAL(22, 242, 14), // "fHaveWatchOnly"
QT_MOC_LITERAL(23, 257, 9), // "abandonTx"
QT_MOC_LITERAL(24, 267, 7), // "bumpFee"
QT_MOC_LITERAL(25, 275, 13), // "rebroadcastTx"
QT_MOC_LITERAL(26, 289, 10), // "chooseDate"
QT_MOC_LITERAL(27, 300, 3), // "idx"
QT_MOC_LITERAL(28, 304, 10), // "chooseType"
QT_MOC_LITERAL(29, 315, 15), // "chooseWatchonly"
QT_MOC_LITERAL(30, 331, 13), // "changedAmount"
QT_MOC_LITERAL(31, 345, 13), // "changedSearch"
QT_MOC_LITERAL(32, 359, 13), // "exportClicked"
QT_MOC_LITERAL(33, 373, 16) // "focusTransaction"

    },
    "TransactionView\0doubleClicked\0\0message\0"
    "title\0style\0bumpedFee\0uint256\0txid\0"
    "contextualMenu\0dateRangeChanged\0"
    "showDetails\0copyAddress\0editLabel\0"
    "copyLabel\0copyAmount\0copyTxID\0copyTxHex\0"
    "copyTxPlainText\0openThirdPartyTxUrl\0"
    "url\0updateWatchOnlyColumn\0fHaveWatchOnly\0"
    "abandonTx\0bumpFee\0rebroadcastTx\0"
    "chooseDate\0idx\0chooseType\0chooseWatchonly\0"
    "changedAmount\0changedSearch\0exportClicked\0"
    "focusTransaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       3,    3,  147,    2, 0x06 /* Public */,
       6,    1,  154,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  157,    2, 0x08 /* Private */,
      10,    0,  160,    2, 0x08 /* Private */,
      11,    0,  161,    2, 0x08 /* Private */,
      12,    0,  162,    2, 0x08 /* Private */,
      13,    0,  163,    2, 0x08 /* Private */,
      14,    0,  164,    2, 0x08 /* Private */,
      15,    0,  165,    2, 0x08 /* Private */,
      16,    0,  166,    2, 0x08 /* Private */,
      17,    0,  167,    2, 0x08 /* Private */,
      18,    0,  168,    2, 0x08 /* Private */,
      19,    1,  169,    2, 0x08 /* Private */,
      21,    1,  172,    2, 0x08 /* Private */,
      23,    0,  175,    2, 0x08 /* Private */,
      24,    0,  176,    2, 0x08 /* Private */,
      25,    0,  177,    2, 0x08 /* Private */,
      26,    1,  178,    2, 0x0a /* Public */,
      28,    1,  181,    2, 0x0a /* Public */,
      29,    1,  184,    2, 0x0a /* Public */,
      30,    0,  187,    2, 0x0a /* Public */,
      31,    0,  188,    2, 0x0a /* Public */,
      32,    0,  189,    2, 0x0a /* Public */,
      33,    1,  190,    2, 0x0a /* Public */,
      33,    1,  193,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionView *_t = static_cast<TransactionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->bumpedFee((*reinterpret_cast< const uint256(*)>(_a[1]))); break;
        case 3: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->dateRangeChanged(); break;
        case 5: _t->showDetails(); break;
        case 6: _t->copyAddress(); break;
        case 7: _t->editLabel(); break;
        case 8: _t->copyLabel(); break;
        case 9: _t->copyAmount(); break;
        case 10: _t->copyTxID(); break;
        case 11: _t->copyTxHex(); break;
        case 12: _t->copyTxPlainText(); break;
        case 13: _t->openThirdPartyTxUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->updateWatchOnlyColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->abandonTx(); break;
        case 16: _t->bumpFee(); break;
        case 17: _t->rebroadcastTx(); break;
        case 18: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->chooseWatchonly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->changedAmount(); break;
        case 22: _t->changedSearch(); break;
        case 23: _t->exportClicked(); break;
        case 24: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->focusTransaction((*reinterpret_cast< const uint256(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransactionView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TransactionView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::message)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TransactionView::*_t)(const uint256 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::bumpedFee)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionView.data,
      qt_meta_data_TransactionView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransactionView::bumpedFee(const uint256 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
