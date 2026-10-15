#include <iostream>
#include "compteur.h"
using namespace std ;
int main()
{
    cout << Compteur::NombreInstances() << endl; // affiche 0
    Compteur c1;
    Compteur c2;
    cout << Compteur::NombreInstances() << endl; // affiche 2
    {
        Compteur c3;
        cout << Compteur::NombreInstances() << endl; // affiche 3
    } // c3 est détruit ici
    cout << Compteur::NombreInstances() << endl; // affiche 2
    return 0;
}