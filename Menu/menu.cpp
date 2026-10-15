/**
 *
 *
 * */
#include "menu.h"
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
/**
 * @brief Menu::Menu
 * @param _nom
 */
Menu::Menu(const string &_nom):
    nom(_nom),
    options(nullptr),
    nbOptions(0),
    longueurMax(0)

{
    // ouvrir le fichier
    ifstream leFichierAlire(nom); // c_str() transforme string en char*
    //Si il y a une erreur
    if(!leFichierAlire.is_open())
    {
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
        nbOptions = 0;
    }
    else
    {
        // calculer nbOptions, le nombre d’options dans le fichier
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(leFichierAlire),istreambuf_iterator<char>(),'\n'));
        leFichierAlire.seekg(0,ios::beg);
        // allouer dynamiquement le tableau options en fonction de nbOptions
        int longueur;
        string items;
        options = new string[nbOptions];
        // Pour chaque option dans le fichier
        for(int i = 0; i < nbOptions; i++)
        {
            // Lire l’option et l’affecter dans le tableau options
            getline(leFichierAlire, items);
            longueur =static_cast<int>(items.length());

            if(longueur > longueurMax)
            {
                longueurMax = longueur; // alors longueurMax reçoit la taille de l’option
            }
            if(longueur > 0)
            {
                options[i] = items;
            }else{
                nbOptions--;
                i--;
            }
        }
        }

    leFichierAlire.close();
}

Menu::~Menu()
{

}

/**
 * @brief Affiche le menu textuel, dessine le tableau et gère la saisie de l'utilisateur.
 *
 * Cette fonction valide également la saisie pour éviter les plantages en cas
 * d'entrée invalide (lettres, symboles, etc.).
 *
 * @return int Le choix de l'utilisateur (index de 1 à nbOptions), ou -1 si le menu est vide.
 */
int Menu::Afficher() {
    int choix;

    /* Vérifie si le menu contient des options à afficher */
    if (nbOptions == 0) {
        choix = -1;
    } else {

        // Bordure supérieure du tableau
        cout << "+" << setfill('-') << setw(6) << "+" << setw(longueurMax + 3) <<
            "+"  << endl;

        // Affichage de chaque option alignée à gauche
        for (int nb = 0; nb < nbOptions; nb++) {
            cout << "|  " << left << setfill(' ') << setw(3) << nb + 1 << "| "
                 << setw(longueurMax +1) << options[nb] << "|" << endl;
        }

        // Bordure inférieure du tableau (version corrigée)
        cout << "+" << right << setfill('-') << setw(6) << "+" << setw(longueurMax + 3) <<
            "+" << endl;

        do {
            cout << "Votre choix (1-" << nbOptions << ") svp : ";

            /* Tente de lire un entier ; si l'entrée échoue (ex: l'utilisateur tape une lettre) */
            if (!(cin >> choix)) {
                cin.clear(); // Réinitialise l'état du flux cin
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Vide le tampon de saisie
                choix = -1; // Force une valeur invalide pour relancer la boucle
            }
        } while (choix < 1 || choix > nbOptions);
        ///@}
    }

    return choix;
}

/**
 * @brief Menu::AttendreAppuiTouche
 */
void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    cout << "\033[2J\033[1;1H";
    //system("clear");
}