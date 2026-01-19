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

    QList<QMap<QString, QVariant>>  m_casernes;

    double          m_latitude   = 0.0;
    double          m_longitude  = 0.0;
    QString         m_codepostal = "00000";


private slots:
    void    creerFicheUrgence(double latitude, double longitude);
    void    getLonLatGeocoding(double lat, double lon, QString code_postal);

    void    getAdresse();
    void    recalculerDistance();
    void    calculerDistanceMin();

};
#endif // SUPERVISEUROPE_H

