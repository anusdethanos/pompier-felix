#ifndef FICHEURGENCE_H
#define FICHEURGENCE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <cmath>
#include <QObject>

class FicheUrgence : public QObject
{
    Q_OBJECT

public:
    explicit FicheUrgence(QObject *parent = nullptr);


private:
    QSqlDatabase base;

    const double     _R =  6371.0;


public:
    FicheUrgence();

    void       connecterBDD();
    void       deconnecterBDD();

    double     calculerHaversine(double longitude_s, double lattitude_s, double longitude_t, double lattitude_t);

};

#endif // FICHEURGENCE_H
