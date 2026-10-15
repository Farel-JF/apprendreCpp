#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string nomDuFichier1;
    string nomDuFichier2;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier1;
    cout << "Entrer le nom du fichier à écrire : ";
    cin >> nomDuFichier2;
    //Création du flux en lecture sur le fichier
    ifstream leFichierAlire(nomDuFichier1.c_str()); // c_str() transforme string en char*
    ofstream leFichierAEcrire(nomDuFichier2.c_str());
    if (!leFichierAlire.is_open() && leFichierAEcrire.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau

        leFichierAEcrire << "+" << setw(18) << setfill('-') << "+";
        for (int nb = 0; nb < 3; ++nb)
        {
            leFichierAEcrire << setw(9) << "+";
        }
        leFichierAEcrire << endl;
        leFichierAEcrire << setfill(' ');

        do
        {
            //récupération des valeurs
            leFichierAlire >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichierAlire.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                leFichierAEcrire << "| " << left << setw(16) << pays << "|"
                     << right << setw(7) << nbOr << " |"
                     << right << setw(7) << nbArgent << " |"
                     << right << setw(7) << nbBronze << " |"
                     << endl;

            }
        } while (!leFichierAlire.eof());

        // cout << "+" << setfill('-') << setw(18) << "+" << setfill(' ') << endl;
        // A compléter, affichage de la dernière ligne du tableau.
        leFichierAEcrire << "+" << setw(18) << setfill('-') << "+";
        for (int nb = 0; nb < 3; nb++)
        {
            leFichierAEcrire << setw(9) << "+";
        }
        leFichierAEcrire << endl;
        leFichierAEcrire << setfill(' ');


    }
    leFichierAlire.close();
    leFichierAEcrire.close();
    return 0;
}

/*
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        // A compléter, affichage de la première ligne du tableau

        cout << "+" << setw(18) << setfill('-') << "+";
            for (int nb = 0; nb < 3; nb++)
        {
            cout << setw(9) << "+";
        }
            cout << endl;
        cout<< setfill(' ');

        do
        {
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                // A compléter, affichage de chaque ligne du tableau
                cout << "| " << left << setw(16) << pays << "|"
                     << right << setw(7) << nbOr << " |"
                     << right << setw(7) << nbArgent << " |"
                     << right << setw(7) << nbBronze << " |"
                     << endl;

            }
        } while (!leFichier.eof());

       // cout << "+" << setfill('-') << setw(18) << "+" << setfill(' ') << endl;
        // A compléter, affichage de la dernière ligne du tableau.
        cout << "+" << setw(18) << setfill('-') << "+";
        for (int nb = 0; nb < 3; nb++)
        {
            cout << setw(9) << "+";
        }
            cout << endl;
        cout << setfill(' ');


    }
    leFichier.close();
    return 0;
}*/