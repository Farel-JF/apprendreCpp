#ifndef COMPTEUR_H
#define COMPTEUR_H

#include <iostream>

using namespace std;
class Compteur
{
public:
    Compteur(int _valeurInit = 0, int _pas = 1 );
    ~Compteur();
    void Incrementer();
    void Decrementer();
    void Reinitialiser();
    // int getValeur() const;
    // void setValeur(int _v) ;
    // int getPas() const;
    // void setPas(int _p);
    Compteur operator+(const Compteur&_autre);
    bool operator==(const Compteur& _autre)   ;
    friend ostream& operator<<(std::ostream &_flux, const Compteur &_cpt);


    int getValeur() const;
    void setValeur(const int _newValeur);
    int getPas() const;
    void setPas(const int _newPas);

private:
    int valeur;
    int pas;
};
#endif // COMPTEUR_H
