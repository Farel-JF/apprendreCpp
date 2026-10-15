#include "compteur.h"

int Compteur::nbInstances = 0; // définition obligatoire hors classe
Compteur::Compteur() : valeur(0)
{
    nbInstances++;
}
Compteur::~Compteur()
{
    nbInstances--;
}
void Compteur::Incrementer()
{
    valeur++;
}
int Compteur::Valeur() const
{
    return valeur;
}
int Compteur::NombreInstances()
{
    return nbInstances;
}
