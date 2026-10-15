#include <iostream>
#include "chaine.h"


int main()
{
    Chaine c1( "Bonjour" );
    Chaine c2( c1 );           // constructeur de copie
    Chaine c3;                 // constructeur par défaut
    c3 = c1;                   // opérateur =
    c1.Afficher();             // Bonjour
    c2.Afficher();             // Bonjour
    c3.Afficher();             // Bonjour

    return 0;
}