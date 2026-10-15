#include <fstream>
#include <iostream>
#include <string>
#include "controleurdeserre.h"

using namespace std;

ControleurDeSerre::ControleurDeSerre()
{
    ifstream fichier("config.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string init;
        for (int indice = 0;indice < 4; indice++)
        {
            getline(fichier,init);
            if(fichier.good())
                zonesArrosage[indice] = new ZoneArrosage(init,&rtc);
        }
        fichier.close();
    }
}
ControleurDeSerre::~ControleurDeSerre()
{
    for (int indice = 0;indice < 4; indice++)
    {
        delete zonesArrosage[indice];
    }
}