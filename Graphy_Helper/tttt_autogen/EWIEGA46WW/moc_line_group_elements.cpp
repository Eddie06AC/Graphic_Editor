/****************************************************************************
** Meta object code from reading C++ file 'line_group_elements.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tttt/line_group_elements.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'line_group_elements.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Line_group_elements_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[16];
    char stringdata5[26];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Line_group_elements_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Line_group_elements_t qt_meta_stringdata_Line_group_elements = {
    {
        QT_MOC_LITERAL(0, 19),  // "Line_group_elements"
        QT_MOC_LITERAL(20, 12),  // "pointChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 10),  // "updateRomb"
        QT_MOC_LITERAL(45, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(61, 25),  // "QGraphicsSceneMouseEvent*"
        QT_MOC_LITERAL(87, 5),  // "event"
        QT_MOC_LITERAL(93, 17),  // "mouseReleaseEvent"
        QT_MOC_LITERAL(111, 10),  // "startPoint"
        QT_MOC_LITERAL(122, 8)   // "endPoint"
    },
    "Line_group_elements",
    "pointChanged",
    "",
    "updateRomb",
    "mousePressEvent",
    "QGraphicsSceneMouseEvent*",
    "event",
    "mouseReleaseEvent",
    "startPoint",
    "endPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Line_group_elements[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x0a,    4 /* Public */,
       4,    1,   40,    2, 0x0a,    5 /* Public */,
       7,    1,   43,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       8, QMetaType::QPointF, 0x00015103, uint(0), 0,
       9, QMetaType::QPointF, 0x00015103, uint(0), 0,

       0        // eod
};

void Line_group_elements::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Line_group_elements *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pointChanged(); break;
        case 1: _t->updateRomb(); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 3: _t->mouseReleaseEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Line_group_elements::*)();
            if (_t _q_method = &Line_group_elements::pointChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Line_group_elements *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->startPoint(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->endPoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Line_group_elements *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setEndPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Line_group_elements::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Line_group_elements.offsetsAndSizes,
    qt_meta_data_Line_group_elements,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Line_group_elements_t
, QtPrivate::TypeAndForceComplete<QPointF, std::true_type>, QtPrivate::TypeAndForceComplete<QPointF, std::true_type>, QtPrivate::TypeAndForceComplete<Line_group_elements, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Line_group_elements::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Line_group_elements::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Line_group_elements.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Line_group_elements::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Line_group_elements::pointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
