#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#include "vanne.h"
class DS3231;
class ZoneArrosage
{
private:
    const DS3231 *ptrRTC;
    int numZone;
public:
    ZoneArrosage(const string _initialisationZone,const DS3231 * _ptrRTC);
    void Piloter();
};
#endif // ZONEARROSAGE_H