#ifndef COUPS_TYPE
#define COUPS_TYPE

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "Coup.h"
#include "CoupCollection.h"
#include "ListeChainee.h"

typedef struct
{
    ListeChainee coups;
    int nbDeCoups;
} Coups;

/**
 * @brief Crée une liste de coups vide
 *
 * @returns Structure coups vide
*/
Coups * COUPS_CreerCoups();

/**
 * @brief Ajoute un coup en tête de la liste de coups
 *
 * @param coups Coups auxquels on veut ajouter un coup
 * @param coup Coup à ajouter
 *
 * @returns Liste de coups avec le coup ajouter
 *
*/
void COUPS_AjouterCoup(Coups* coups, Coup coup);

/**
 * @brief Obtient le coup en tête de la liste chaînée de coups
 *
 * @param coups Coups dont on veut obtenir le premier coup
 *
 * @returns Coup en tête de liste
 */
Coup COUPS_ObtenirCoup(Coups coups);

/**
 * @brief Supprime coup en tête de la liste chaînée de coups
 *
 * @param coups Coups dont on veut supprimer un Coup
 *
 * @returns Liste de coups sans le coup supprimé
*/
void COUPS_SupprimerCoupEnTete(Coups * coups);

/**
 * @brief Donne le nombre de coups dans la liste de Coups
 *
 * @param coups Liste de coups dont on veut obtenir le nombre de coups
 *
 * @returns Nombre total de coups
*/
int COUPS_ObtenirNombreDeCoups(Coups coups);

/**
 * @brief Vérifie si un Coup est présent dans une liste de Coups
 *
 * @param coups Ensemble de coups à vérifier
 * @param coup Coup à rechercher
 *
 * @returns True si le coup est présent dans la liste, false sinon
*/
bool COUPS_EstPresent(Coups coups, Coup coup);

/**
 * @brief Supprime un coup dans une liste de coups en supposant qu'il est présent
 *
 * @param coups Liste de coups dans laquelle on veut retirer un coup
 * @param coup Coup que l'on souhaite retirer de la liste
*/
void COUPS_RetirerCoup(Coups* coups, Coup coup);

#endif
