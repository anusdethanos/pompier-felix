#include "ficheurgence.h"

FicheUrgence::FicheUrgence(QObject *parent)
    : QObject(parent)
{

}

void FicheUrgence::connecterBDD()
{
    base.setDatabaseName("/home/felix/Documents/projet/CasernesBZH.db");
    if (!base.open()) {
        qDebug() << "Impossible d'ouvrir la base de données!";
    } else {
        qDebug() << "Base de données ouverte avec succès.";
    }
}

void FicheUrgence::deconnecterBDD()
{
    if (base.isOpen())
        base.close();

    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
}

double FicheUrgence::calculerHaversine(double longitude_s, double latitude_s, double longitude_t, double latitude_t)
{
    // Conversion degrés to radians
    double lat1 = latitude_s * M_PI / 180.0;
    double lon1 = longitude_s * M_PI / 180.0;
    double lat2 = latitude_t * M_PI / 180.0;
    double lon2 = longitude_t * M_PI / 180.0;

    double d = _R * acos(
                   cos(lat1) * cos(lat2) * cos(lon2 - lon1) +
                   sin(lat1) * sin(lat2)
                   );

    return d; // return la distance entre la caserne et le sinistre
}
