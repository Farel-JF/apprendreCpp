#include "chaine.h"
#include <string.h>
#include <iostream>
using namespace std;
//constructeur principal
Chaine::Chaine(const char *_texte)
{
    longueur = strlen(_texte);
    contenu = new char[longueur + 1];
    strcpy(contenu ,_texte);
}
//constructeur de copie
Chaine::Chaine( const Chaine & _src) :
    longueur(_src.longueur),
    contenu(new char[_src.longueur + 1])
{
    strcpy(contenu, _src.contenu);
}
Chaine::~Chaine()
{
    delete [] contenu;
}

Chaine & Chaine::operator=(const Chaine &_src)
{
    if(this != &_src) // verifie autoaffectation
    {
        delete[] contenu; //lebérer l'ancienne mémoire
        longueur = _src.longueur; //ajuster la taille du tableau
        contenu = new char[longueur + 1]; //réallouer
        strcpy(contenu, _src.contenu);
    }
    return *this; /*retourné l'obejt courant*/
}
void Chaine::Afficher()const {
    cout << "Affiche : " << contenu << endl;
}

char *Chaine::getContenu() const
{
    return contenu;
}

void Chaine::setContenu(char *_newContenu)
{
    contenu = _newContenu;
}

int Chaine::getLongueur() const
{
    return longueur;
}

void Chaine::setLongueur(int _newLongueur)
{
    longueur = _newLongueur;
}