/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Sat 6. Jun 20:51:49 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      43,   11,   11,   11, 0x08,
      74,   11,   11,   11, 0x08,
     106,   11,   11,   11, 0x08,
     134,   11,   11,   11, 0x08,
     155,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     205,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_vitrinitaColorBtn_clicked()\0"
    "on_liptinitaColorBtn_clicked()\0"
    "on_inertinitaColorBtn_clicked()\0"
    "on_piritaColorBtn_clicked()\0"
    "on_exitBtn_clicked()\0on_executeBtn_clicked()\0"
    "on_browseOutBtn_clicked()\0"
    "on_browseInBtn_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_vitrinitaColorBtn_clicked(); break;
        case 1: on_liptinitaColorBtn_clicked(); break;
        case 2: on_inertinitaColorBtn_clicked(); break;
        case 3: on_piritaColorBtn_clicked(); break;
        case 4: on_exitBtn_clicked(); break;
        case 5: on_executeBtn_clicked(); break;
        case 6: on_browseOutBtn_clicked(); break;
        case 7: on_browseInBtn_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
