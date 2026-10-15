#include <iostream>
#include "zonearrosage2.h"

using namespace std;

ZoneArrosage::ZoneArrosage(const string _initialisation,const DS3231 * _ptrRTC):
    ptrRTC(_ptrRTC)
{
    int parametres[4];
    size_t prec = 0;
    size_t pos = 0;
    for (int indice = 0;indice < 4;indice++)
    {
        pos = _initialisation.find(' ',prec);
        parametres[indice] = atoi(_initialisation.substr(prec,pos).c_str());
        prec = pos + 1; // on incrémente pos pour le tour d'après.
    }
    numZone = parametres[0];
    cout << "Zone " << numZone << " ";
    laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);
}