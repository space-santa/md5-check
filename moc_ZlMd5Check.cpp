/****************************************************************************
** Meta object code from reading C++ file 'ZlMd5Check.h'
**
** Created: Fri Dec 11 20:30:26 2009
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "header/ZlMd5Check.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZlMd5Check.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ZlMd5Check[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     151,   11,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ZlMd5Check[] = {
    "ZlMd5Check\0\0on_pushButton_Open_clicked()\0"
    "on_pushButton_Open2_clicked()\0"
    "on_pushButton_Calc_clicked()\0"
    "on_actionNew_activated()\0"
    "on_actionSave_activated()\0"
    "on_actionInfo_activated()\0"
    "on_actionQuit_activated()\0"
};

const QMetaObject ZlMd5Check::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZlMd5Check,
      qt_meta_data_ZlMd5Check, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ZlMd5Check::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ZlMd5Check::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ZlMd5Check::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZlMd5Check))
        return static_cast<void*>(const_cast< ZlMd5Check*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ZlMd5Check::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Open_clicked(); break;
        case 1: on_pushButton_Open2_clicked(); break;
        case 2: on_pushButton_Calc_clicked(); break;
        case 3: on_actionNew_activated(); break;
        case 4: on_actionSave_activated(); break;
        case 5: on_actionInfo_activated(); break;
        case 6: on_actionQuit_activated(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
