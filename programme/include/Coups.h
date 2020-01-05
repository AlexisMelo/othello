/**
 * \file Coups.h
 *
 * Fichier contenant la définition du type Coups et de ses fonctions associées.
 *
 * \author Léo Pacary
 * \author Alexis Melo Da Silva
*/

#ifndef __COUPS_TYPE__
#define __COUPS_TYPE__

#include <stdbool.h>
#include <stdio.h>

#include "Coup.h"

/**
 * Le type Coups permet de stocker plusieurs Coup. Sa manipulation s'apparente
 * à celle d'une pile LIFO.
 */
typedef struct Coups{
  Coup lesCoups[64]; /*!< Tableau de Coup. */
  unsigned int nbCoups; /*! < Nombre d'élements significatifs dans lesCoups. */
}Coups;

/**
 * Crée une pile de Coup.
 *
 * \return Instance de Coups.
 */
Coups COUPS_CreerCoups();

/**
 * Détermine si Coups est vide, c'est à dire qu'il ne possède aucun Coup.
 *
 * \param coups Pile Coups dont on souhaite tester le contenu.
 *
 * \return true si Coups est vide, false sinon.
 */
bool COUPS_EstVide(Coups coups);

/**
 * Ajoute un Coup à une instance de Coups. Le Coup est ajouté en tête de pile.
 *
 * \param pCoups Pointeur vers l'instance de Coups à laquelle on souhaite ajouter un Coup.
 * \param coup Coup que l'on souhaite ajouter.
 */
void COUPS_AjouterCoup(Coups *pCoups, Coup coup);

/**
 * Supprime un Coup d'une instance de Coups. Le coup supprimé est celui en tête de pile.
 *
 * \param pCoups Pointeur vers l'instance de Coups à laquelle on souhaite retirer un coup.
 */
void COUPS_RetirerCoup(Coups *pCoups);

/**
 * Permet d'obtenir un Coup. Obtient le coup en tête de pile.

 * \param coups Pile Coups dans laquelle on souhaite obtenir un Coup.
 *
 * \return Instance de Coup obtenue.
 */
Coup COUPS_ObtenirCoup(Coups coups);

/**
 * Permet de connaitre le nombre de Coup présents dans une pile Coups.
 *
 * \param coups Pile Coups dont on souhaite connaitre le nombre de Coup.
 *
 * \return Nombre de Coup.
 */
unsigned int COUPS_ObtenirNombreDeCoups(Coups coups);

/**
 * Détermine si un Coup est présent dans une Pile Coups.
 *
 * \param coups Pile Coups dont on souhaite vérifier le contenu.
 * \param coup Coup que l'on recherche.
 *
 * \return true si le coup est présent, false sinon.
 */
bool COUPS_EstPresent(Coups coups, Coup coup);

#endif
