#include <iostream>
#include "barre.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "barrecarre.h"

using namespace std;
int main()
{
    cout << "Barre Carré : " << endl;
    BarreCarre maBarreCarre(10.5f, "Carré", 12.5f, 45.3f);
    maBarreCarre.AfficherCaractéristiques();
    cout << "Section : " << maBarreCarre.CalculerSection()<< endl;
    cout << "Masse : " << maBarreCarre.CalculerMasse() << endl;

    cout << endl;

    cout << "barre Rectangle : " << endl;
    barreRectangle mabarreRectangle(41.5f, 35.3f, "Rectengle", 13.2f, 222.3f);
    mabarreRectangle.AfficherCaractéristiques();
    cout << "Section : "<< mabarreRectangle.CalculerSection() << endl;
    cout << "Masse : " << mabarreRectangle.CalculerMasse() << endl;

    cout << endl;

    cout << "Barre Ronde : " << endl;
    BarreRonde maBarreRonde(10.6f, "Ronde", 2.2f, 23.5f);
    maBarreRonde.AfficherCaractéristiques();
    cout << "Section : " << maBarreRonde.CalculerSection() << endl;
    cout << "Masse : " << maBarreRonde.CalculerMasse() << endl;
    return 0;


}