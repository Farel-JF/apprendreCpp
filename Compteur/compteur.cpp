#include "compteur.h"
using namespace std;

Compteur::Compteur(int _valeurInit, int _pas)
{
    valeur = _valeurInit;
    pas = _pas;
}
Compteur::~Compteur(){}
void Compteur::Incrementer(){
     valeur += pas;
}
void Compteur::Decrementer(){
    valeur -= pas;
}

void Compteur::Reinitialiser()
{
    valeur = 0;
}

// int Compteur::getValeur() const{
//     return valeur;
// }
// int Compteur::setValeur(const int _v){
//     valeur = _v;
// }
// int Compteur::getPas() const{
//     return pas;
// }
// int Compteur::setPas(const int _p){
//     pas = _p;
// }
Compteur Compteur::operator+(const Compteur& _autre)
{
    return Compteur(valeur + _autre.valeur, pas + _autre.pas) ;
}
bool Compteur::operator==(const Compteur& _autre)
{
    bool retour = false;
    if(valeur == _autre.valeur && pas == _autre.pas)
        retour = true;
    return retour;
}
ostream& operator<<(std::ostream& _flux, const Compteur& _cpt){
     cout << "Compteur(valeur=" << _cpt.valeur << ", pas=" << _cpt.pas << ")";
     return _flux;
}

int Compteur::getValeur() const
{
    return valeur;
}

void Compteur::setValeur(const int _newValeur)
{
    valeur = _newValeur;
}

int Compteur::getPas() const
{
    return pas;
}

void Compteur::setPas(const int _newPas)
{
    pas = _newPas;
}
