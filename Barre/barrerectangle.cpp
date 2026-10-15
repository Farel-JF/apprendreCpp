#include "barrerectangle.h"

using namespace std;

barreRectangle::barreRectangle(const float _largeur, const float _longueur, const string &_reference,
                               const int _longeurBarre, const double _densite) :
    Barre(_reference, _longeurBarre, _densite),
    largeur(_largeur),
    longueur(_longueur)
{}

barreRectangle::~barreRectangle()
{
}

float barreRectangle::CalculerSection()
{
    return longueur * largeur;
}

float barreRectangle::CalculerMasse()
{
    float section = CalculerSection();
    return longueurBarre * section * densite;
}

