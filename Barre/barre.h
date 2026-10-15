#ifndef BARRE_H
#define BARRE_H
#include <string>
using namespace std;
class Barre
{
protected:
    string reference;
    int longueur;
    float densite;
public:
    Barre(const string _reference, const int _longueur,const float _densite);
    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() {return 0;}
};
#endif // BARRE_H
