/****************************************************************************
** Meta object code from reading C++ file 'paint_pen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tttt/paint_pen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paint_pen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_paintScene_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[26];
    char stringdata6[6];
    char stringdata7[18];
    char stringdata8[15];
    char stringdata9[14];
    char stringdata10[11];
    char stringdata11[2];
    char stringdata12[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_paintScene_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_paintScene_t qt_meta_stringdata_paintScene = {
    {
        QT_MOC_LITERAL(0, 10),  // "paintScene"
        QT_MOC_LITERAL(11, 16),  // "set_previous_pos"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 8),  // "prev_pos"
        QT_MOC_LITERAL(38, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(54, 25),  // "QGraphicsSceneMouseEvent*"
        QT_MOC_LITERAL(80, 5),  // "event"
        QT_MOC_LITERAL(86, 17),  // "mouseReleaseEvent"
        QT_MOC_LITERAL(104, 14),  // "mouseMoveEvent"
        QT_MOC_LITERAL(119, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(133, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(144, 1),  // "e"
        QT_MOC_LITERAL(146, 15)   // "keyReleaseEvent"
    },
    "paintScene",
    "set_previous_pos",
    "",
    "prev_pos",
    "mousePressEvent",
    "QGraphicsSceneMouseEvent*",
    "event",
    "mouseReleaseEvent",
    "mouseMoveEvent",
    "keyPressEvent",
    "QKeyEvent*",
    "e",
    "keyReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_paintScene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    1,   53,    2, 0x08,    3 /* Private */,
       7,    1,   56,    2, 0x08,    5 /* Private */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
       9,    1,   62,    2, 0x08,    9 /* Private */,
      12,    1,   65,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void paintScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<paintScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_previous_pos((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 2: _t->mouseReleaseEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1]))); break;
        case 4: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 5: _t->keyReleaseEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject paintScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_paintScene.offsetsAndSizes,
    qt_meta_data_paintScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_paintScene_t
, QtPrivate::TypeAndForceComplete<paintScene, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPointF, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGraphicsSceneMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *paintScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *paintScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_paintScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int paintScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
