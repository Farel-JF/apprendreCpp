#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"

class BarreCarre: public Barre
{
private :
    float cotee;
public:

    BarreCarre(const float _cotee, const string &_reference, const float _longueurBarre,
               const double _densite);
    ~BarreCarre();
    float CalculerSection();
    float CalculerMasse();
};

#endif // BARRECARRE_H