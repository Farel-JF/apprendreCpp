#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#include "vanne.h"
#include "capteurhumidite.h"
#include "zonearrosage.h"
#include <iostream>
#define gpio_num_t int

using namespace std;

class ZoneArrosage
{
private:
    Vanne laVanne;
    CapteurHumidite leCapteurHum;
    int numZone;
public:
    ZoneArrosage(int _numZone,
                 const gpio_num_t _commandeVanne,
                 const gpio_num_t _senseAVanne,
                 const gpio_num_t _senseBVanne,
                 const gpio_num_t _brocheHumidite);
    ~ZoneArrosage();
    ZoneArrosage(const string &_initialisationZone);
    void Piloter();
};
#endif // ZONEARROSAGE_H