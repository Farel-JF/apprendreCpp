#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"
#include "math.h"

class BarreRonde : public Barre
{
private:
    float diametre;
public:
    BarreRonde(const float _diametre, const string &_reference, const int _longeurBarre,
               const double _densite);
    ~BarreRonde();
    float CalculerSection();
    float CalculerMasse();
};

#endif // BARRERONDE_H