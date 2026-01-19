/****************************************************************************
** Meta object code from reading C++ file 'superviseurope.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../superviseurope.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'superviseurope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14SuperviseurOPEE_t {};
} // unnamed namespace

template <> constexpr inline auto SuperviseurOPE::qt_create_metaobjectdata<qt_meta_tag_ZN14SuperviseurOPEE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SuperviseurOPE",
        "creerFicheUrgence",
        "",
        "latitude",
        "longitude",
        "getLonLatGeocoding",
        "lat",
        "lon",
        "code_postal",
        "getAdresse",
        "recalculerDistance",
        "calculerDistanceMin"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'creerFicheUrgence'
        QtMocHelpers::SlotData<void(double, double)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 3 }, { QMetaType::Double, 4 },
        }}),
        // Slot 'getLonLatGeocoding'
        QtMocHelpers::SlotData<void(double, double, QString)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 6 }, { QMetaType::Double, 7 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'getAdresse'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'recalculerDistance'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'calculerDistanceMin'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SuperviseurOPE, qt_meta_tag_ZN14SuperviseurOPEE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SuperviseurOPE::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SuperviseurOPEE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SuperviseurOPEE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SuperviseurOPEE_t>.metaTypes,
    nullptr
} };

void SuperviseurOPE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SuperviseurOPE *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->creerFicheUrgence((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->getLonLatGeocoding((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->getAdresse(); break;
        case 3: _t->recalculerDistance(); break;
        case 4: _t->calculerDistanceMin(); break;
        default: ;
        }
    }
}

const QMetaObject *SuperviseurOPE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SuperviseurOPE::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SuperviseurOPEE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SuperviseurOPE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
