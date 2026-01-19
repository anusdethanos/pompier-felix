#include <iostream>
#include <math.h>

using namespace std;

int main() {
    d = 6371 * acos(
    cos(radians(lat1)) * cos(radians(lat2)) *
    cos(radians(lon2) - radians(lon1)) +
    sin(radians(lat1)) * sin(radians(lat2))
    );

    return 0;

}

/*
6371 = rayon de la Terre en km

lat1, lon1 = coordonnées du sinistre

lat2, lon2 = coordonnées des casernes
*/
