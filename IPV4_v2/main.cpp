#include <iostream>
#include "ipv4.h"

using namespace std;
void AfficherTableau(const unsigned char *tab);

void AfficherTableau(const unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)
    {
        cout << static_cast<int> (tab[indice]);
        if(indice < 3)
            cout << "." ;
    }
    cout << endl;
}

int main()
{
    unsigned char adresse[4]= {192,168,1,15};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiere[4];
    unsigned char derniere[4];

    IPv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    cout << "Premiere adresse : ";
    uneAdresse.ObtenirPremiereAddress(premiere);
    AfficherTableau(premiere);
    cout << "Dernière adresse : ";
    uneAdresse.ObtenirDerniereAddress(derniere);
    AfficherTableau(derniere);
    return 0;
}
