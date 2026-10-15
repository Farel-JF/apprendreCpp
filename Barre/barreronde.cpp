#include "barreronde.h"
#include "math.h"

using namespace std;

BarreRonde::BarreRonde(const float _diametre, const string &_reference, const int _longeurBarre,
                       const double _densite) :
    Barre(_reference, _longeurBarre, _densite),
    diametre(_diametre)
{}

BarreRonde::~BarreRonde()
{
}
float BarreRonde::CalculerSection()
{
    return (M_PI * pow(diametre, 2))/4;

}
float BarreRonde::CalculerMasse()
{
    float section = CalculerSection();
    return longueurBarre * section * densite;
}


