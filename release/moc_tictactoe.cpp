/****************************************************************************
** Meta object code from reading C++ file 'tictactoe.h'
**
** Created: Sun 17. Apr 17:01:15 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TicTacToe/tictactoe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TicTacToe[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      27,   23,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TicTacToe[] = {
    "TicTacToe\0\0setButton()\0def\0reset(bool)\0"
};

const QMetaObject TicTacToe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TicTacToe,
      qt_meta_data_TicTacToe, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TicTacToe::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TicTacToe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToe))
        return static_cast<void*>(const_cast< TicTacToe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TicTacToe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setButton(); break;
        case 1: reset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
