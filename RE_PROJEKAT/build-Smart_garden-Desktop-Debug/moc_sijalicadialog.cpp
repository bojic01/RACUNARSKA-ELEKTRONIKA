/****************************************************************************
** Meta object code from reading C++ file 'sijalicadialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Smart_garden/sijalicadialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sijalicadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sijalicaDialog_t {
    QByteArrayData data[13];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sijalicaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sijalicaDialog_t qt_meta_stringdata_sijalicaDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "sijalicaDialog"
QT_MOC_LITERAL(1, 15, 21), // "on_sijalicaOn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "on_sijalicaOFF_clicked"
QT_MOC_LITERAL(4, 61, 26), // "on_pwmSlajder_valueChanged"
QT_MOC_LITERAL(5, 88, 5), // "value"
QT_MOC_LITERAL(6, 94, 28), // "on_timeStart_userTimeChanged"
QT_MOC_LITERAL(7, 123, 4), // "time"
QT_MOC_LITERAL(8, 128, 26), // "on_timeEnd_userTimeChanged"
QT_MOC_LITERAL(9, 155, 6), // "getPwm"
QT_MOC_LITERAL(10, 162, 12), // "getTurnONOFF"
QT_MOC_LITERAL(11, 175, 15), // "getPocetnoVreme"
QT_MOC_LITERAL(12, 191, 15) // "getKrajnjeVreme"

    },
    "sijalicaDialog\0on_sijalicaOn_clicked\0"
    "\0on_sijalicaOFF_clicked\0"
    "on_pwmSlajder_valueChanged\0value\0"
    "on_timeStart_userTimeChanged\0time\0"
    "on_timeEnd_userTimeChanged\0getPwm\0"
    "getTurnONOFF\0getPocetnoVreme\0"
    "getKrajnjeVreme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sijalicaDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QTime,    7,
    QMetaType::Void, QMetaType::QTime,    7,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::QTime,
    QMetaType::QTime,

       0        // eod
};

void sijalicaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sijalicaDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_sijalicaOn_clicked(); break;
        case 1: _t->on_sijalicaOFF_clicked(); break;
        case 2: _t->on_pwmSlajder_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_timeStart_userTimeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 4: _t->on_timeEnd_userTimeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 5: { int _r = _t->getPwm();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->getTurnONOFF();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QTime _r = _t->getPocetnoVreme();
            if (_a[0]) *reinterpret_cast< QTime*>(_a[0]) = std::move(_r); }  break;
        case 8: { QTime _r = _t->getKrajnjeVreme();
            if (_a[0]) *reinterpret_cast< QTime*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sijalicaDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_sijalicaDialog.data,
    qt_meta_data_sijalicaDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sijalicaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sijalicaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sijalicaDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sijalicaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
