#include "barrecarre.h"

using namespace std;

BarreCarre::BarreCarre(const float _cotee, const string &_reference, const float _longueurBarre,
                       const double _densite) :
    Barre(_reference, _longueurBarre, _densite),
    cotee(_cotee)
{}
BarreCarre::~BarreCarre()
{
}

float BarreCarre::CalculerSection()
{
    return cotee * cotee;
}

float BarreCarre::CalculerMasse()
{
    float section = CalculerSection();
    return longueurBarre * section * densite;
}