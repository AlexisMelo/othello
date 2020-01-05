/**
 * \file Recherche_Coup.h
 *
 * Fichier contenant la définition des fonctions pour rechercher des Coup possibles.
*/

#ifndef __RECHERCHE_COUP__
#define __RECHERCHE_COUP__

#include "Coups.h"
#include "Joueur.h"
#include "Plateau.h"

/**
 * Crée une instance de Coups avec tous les Coup possibles pour une Couleur donnée.
 *
 * \param plateau Plateau de jeu.
 * \param couleur Couleur du Joueur dont on souhaite trouver les Coups.
 *
 * \return Instance de Coups.
*/
Coups RECHERCHECOUP_RechercherTousLesCoups(Couleur * plateau, Couleur couleur);

/**
 * Détermine si un Coup est valide. On admet un Coup valide un Coup dont la Position est valide,
 * dont la Position est libre, et qui permet de capturer au moins 1 pion.
 *
 * \param plateau Plateau de jeu.
 * \param coup Coup dont on souhaite déterminer la validité.
 *
 * \return true si le Coup est valide, false sinon.
*/
bool RECHERCHECOUP_EstCoupValide(Couleur * plateau, Coup coup);

/**
 * Permet d'obtenir un Coup forcément valide de la part d'un Joueur.
 *
 * \param plateau Plateau de jeu.
 * \param joueur Joueur dont on souhaite obtenir le Coup.
 *
 * \return Instance de Coup obtenue par la saisie.
 */
Coup RECHERCHECOUP_ObtenirCoupValide (Couleur * plateau, Joueur joueur);

#endif
