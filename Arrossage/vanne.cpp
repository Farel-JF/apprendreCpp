/**
 * @file    vanne.cpp
 * @author  Farrell
 * @date    22 Septembre 2026
 * @version 1.0
 * @brief   Implémentation de la classe Vanne pour le pilotage de vannes motorisées.
 *
 * @details Ce fichier contient les définitions des méthodes de la classe Vanne.
 *          Il permet d'initialiser les broches matérielles et de simuler ou
 *          commander l'ouverture et la fermeture d'une vanne via des impulsions GPIO.
 */
#include "vanne.h"
#include <iostream>

/**
 * @brief Constructeur de la classe Vanne.
 * @details Initialise les broches GPIO requises pour le pilotage d'une vanne motorisée.
 *
 * @param _brocheImpulsion Broche GPIO envoyant le signal de commande d'activation.
 * @param _sensA           Broche GPIO définissant le premier sens de rotation (Ouverture).
 * @param _sensB           Broche GPIO définissant le second sens de rotation (Fermeture).
 */
Vanne::Vanne(const gpio_num_t _brocheImpulsion, const gpio_num_t _sensA, const gpio_num_t _sensB) :
    impulsion(_brocheImpulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    std::cout << "Constructeur de la vanne initialisé." << std::endl;
}

/**
 * @brief Commande l'ouverture complète de la vanne.
 * @details Active le moteur de la vanne dans le sens défini par les broches GPIO pour libérer le passage de l'eau.
 */
void Vanne::Ouvrir()
{
    std::cout << "Ouverture de la vanne sur la broche " << impulsion << std::endl;
}

/**
 * @brief Commande la fermeture complète de la vanne.
 * @details Active le moteur de la vanne dans le sens inverse pour stopper le flux d'eau.
 */
void Vanne::Fermer()
{
    std::cout << "Fermeture de la vanne sur la broche " << impulsion << std::endl;
}
