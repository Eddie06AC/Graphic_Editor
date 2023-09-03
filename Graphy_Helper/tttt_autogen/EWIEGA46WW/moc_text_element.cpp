/****************************************************************************
** Meta object code from reading C++ file 'text_element.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tttt/text_element.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'text_element.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_text_element_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[6];
    char stringdata5[18];
    char stringdata6[22];
    char stringdata7[14];
    char stringdata8[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_text_element_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_text_element_t qt_meta_stringdata_text_element = {
    {
        QT_MOC_LITERAL(0, 12),  // "text_element"
        QT_MOC_LITERAL(13, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 25),  // "QGraphicsSceneMouseEvent*"
        QT_MOC_LITERAL(56, 5),  // "event"
        QT_MOC_LITERAL(62, 17),  // "mouseReleaseEvent"
        QT_MOC_LITERAL(80, 21),  // "mouseDoubleClickEvent"
        QT_MOC_LITERAL(102, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(116, 10)   // "QKeyEvent*"
    },
    "text_element",
    "mousePressEvent",
    "",
    "QGraphicsSceneMouseEvent*",
    "event",
    "mouseReleaseEvent",
    "mouseDoubleClickEvent",
    "keyPressEvent",
    "QKeyEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_text_element[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    1,   41,    2, 0x08,    3 /* Private */,
       6,    1,   44,    2, 0x08,    5 /* Private */,
       7,    1,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

void text_element::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<text_element *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 1: _t->mouseReleaseEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 3: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject text_element::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_meta_stringdata_text_element.offsetsAndSizes,
    qt_meta_data_text_element,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_text_element_t
, QtPrivate::TypeAndForceComplete<text_element, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *text_element::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *text_element::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_text_element.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int text_element::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
