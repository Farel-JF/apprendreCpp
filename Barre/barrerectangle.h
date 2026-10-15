#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"
class barreRectangle : public Barre
{
private:
    float largeur;
    float longueur;
public:
    barreRectangle(const float _largeur, const float _longueur,  const string &_reference,
                   const int _longeurBarre, const double _densite);

    ~barreRectangle();
    float CalculerSection();
    float CalculerMasse();
};

#endif // BARRERECTANGLE_H