#ifndef MENU_H
#define MENU_H
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

class Menu
{
private:
    string nom; //Nom du fichier
    string* options; // Tableau de chaînes de caractères implémentée
    int nbOptions; // Nmbre d’options du Menu
    int longueurMax; // Taille de la plus grande chaîne contenue dans le tableau

public:
    Menu(const string &_nom);
   ~Menu(); //libere automatiquement
    int Afficher();
    static void AttendreAppuiTouche() ;
};

#endif // MENU_H
