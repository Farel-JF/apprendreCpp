/**
 *
 *
 * */
#include "zonearrosage.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructeur de la classe ZoneArrosage.
 * @details Initialise une zone d'arrosage spécifique avec sa vanne motorisée et son capteur d'humidité.
 *
 * @param _numZone          Identifiant unique de la zone d'arrosage.
 * @param _commandeVanne     Broche GPIO de commande (activation) de la vanne.
 * @param _senseAVanne       Broche GPIO pour le sens d'ouverture de la vanne.
 * @param _senseBVanne       Broche GPIO pour le sens de fermeture de la vanne.
 * @param _brocheHumidite    Broche analogique/numérique reliée au capteur d'humidité du sol.
 */
ZoneArrosage::ZoneArrosage(const int _numZone, const int _commandeVanne, const int _senseAVanne,
                           const int _senseBVanne, const int _brocheHumidite) :
    laVanne(_commandeVanne, _senseAVanne, _senseBVanne),
    numZone(_numZone),
    leCapteurHum(_brocheHumidite)
{
    cout << "Constructeur de ZoneArrosage" << std::endl;
}

/**
 * @brief Constructeur alternatif initialisant la zone à partir d'une chaîne de configuration.
 * @details Découpe une chaîne de caractères contenant les paramètres matériels séparés par des espaces
 *          pour configurer la zone, sa vanne et son capteur d'humidité.
 *
 * @param _initialisationZone Chaîne au format "numZone commandeVanne senseAVanne senseBVanne brocheHumidite"
 */
ZoneArrosage::ZoneArrosage(const string &_initialisationZone)
{
    int parametres[5]; // Tableau étendu à 5 pour inclure la broche d'humidité
    size_t prec = 0;
    size_t pos = 0;

    // Extraction des 5 valeurs numériques séparées par des espaces
    for (int indice = 0; indice < 5; indice++)
    {
        pos = _initialisationZone.find(' ', prec);
        parametres[indice] = std::atoi(_initialisationZone.substr(prec, pos - prec).c_str());
        prec = pos + 1;
    }

    // Affectation des attributs de la classe
    numZone        = parametres[0];
    laVanne        = Vanne(parametres[1], parametres[2], parametres[3]);
    leCapteurHum = parametres[4];
}

/**
 * @brief Destructeur de la classe ZoneArrosage.
 * @details Libère proprement la mémoire dynamique allouée pour la vanne de la zone
 *          afin d'éviter toute fuite de mémoire (Memory Leak).
 */
ZoneArrosage::~ZoneArrosage()
{
    delete laVanne;
}

