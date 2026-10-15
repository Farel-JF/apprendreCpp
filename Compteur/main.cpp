#include <iostream>
#include "compteur.h"
using namespace std;

int main()
{
    Compteur c1;           // valeur=0, pas=1
    Compteur c2(10, 2);    // valeur=10, pas=2

    c1.Incrementer();      // valeur=1
    c1.Incrementer();      // valeur=2
    c1.Decrementer();      // valeur=1

    cout << c1 << endl;    // Compteur (valeur=1, pas=1)
    cout << c2 << endl;    // Compteur (valeur=10, pas=2)

    Compteur c3 = c1 + c2; // valeur=11, pas=1
    cout << c3 << endl;    // Compteur (valeur=11, pas=1)

    if(c1 == c2)
        cout << "egaux" << endl;
    else
        cout << "differents" << endl; // attendu

    c2.Reinitialiser();
    cout << c2 << endl;    // Compteur (valeur=0, pas=2)

    return 0;
}