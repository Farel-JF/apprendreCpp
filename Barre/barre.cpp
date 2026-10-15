#include "barre.h"
#include <iostream>
using namespace std;

Barre::Barre(const string &_reference, const int _longueurBarre, const double _densite) :
    reference(_reference),
    longueurBarre(_longueurBarre),
    densite(_densite)
{}
Barre::~Barre(){

}
void Barre::AfficherCaractéristiques()
{

    cout << "reference : " << reference << endl;
    cout << "longueur de la barre : " << longueurBarre << endl;
    cout << "densite : " << densite << endl;
}
