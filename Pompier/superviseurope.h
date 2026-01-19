#ifndef SUPERVISEUROPE_H
#define SUPERVISEUROPE_H

#include <QMainWindow>

#include "ficheurgence.h"
#include "geocoding.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SuperviseurOPE;
}
QT_END_NAMESPACE

class SuperviseurOPE : public QMainWindow
{
    Q_OBJECT

public:
    SuperviseurOPE(QWidget *parent = nullptr);
    ~SuperviseurOPE();

private:
    Ui::SuperviseurOPE   *ui;
    FicheUrgence         *ficheUrgence = nullptr;
    Geocoding            *geocoding    = nullptr;


    double          m_latitude  = 0.0;
    double          m_longitude = 0.0;


private slots:
    void    creerFicheUrgence(double latitude, double longitude);
    void    getLonLatGeocoding(double lat, double lon);

    void    getAdresse();
    void    recalculerDistance();

};
#endif // SUPERVISEUROPE_H
