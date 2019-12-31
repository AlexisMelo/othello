#ifndef __PLATEAU__
#define __PLATEAU__

#include <stdbool.h>

#include "Position.h"
#include "Coup.h"

#define TAILLE 8

//typedef Couleur Plateau[TAILLE][TAILLE];

/**
 * @brief Initialiser un plateau de jeu avec 4 cases du centre remplies et les autres neutres
 *
 * Exemple : PLATEAU_InitialiserPlateau(p)
 *
 * @param plateau Couleur * plateau de jeu
*/
void PLATEAU_InitialiserPlateau(Couleur * plateau);

/**
 * @brief Constructeur du Plateau
 *
 * @returns : Couleur * Pointeur de plateau avec allocation dynamique
*/
Couleur * PLATEAU_CreerPlateau() ;

/**
 * @brief Joue un coup sur le plateau.
 *
 * @param plateau Couleur * plateau de jeu
 * @param coup Coup à jouer
 *
 * @returns Plateau mis à jour avec le nouveau coup
 */
Couleur * PLATEAU_JouerCoup(Couleur * plateau, Coup coup) ;

/**
 *@brief Retourne la couleur du Plateau à cette position
 *
 *@param plateau Couleur * plateau de jeu
 *@param position Position de la case du plateau dont on veut la couleur
 *
 *@returns Couleur à la position donnée
*/
Couleur PLATEAU_ObtenirCouleurAvecPosition(Couleur * plateau, Position position) ;

/**
 * @brief Vérifie si la position donnée du plateau est libre, équivalent à savoir si la couleur est neutre
 *
 * @param plateau Couleur * plateau de jeu
 * @param position Position que l'on veut vérifier
 *
 * @returns true si la position est libre, false sinon
*/
bool PLATEAU_EstPositionLibre(Couleur * plateau, Position position) ;

/**
 * @brief Retourne la taille du plateau (sa largeur ou bien sa longueur car les deux sont égales)
 *
 * @param plateau Couleur * representant le plateau de jeu et dont on veut la taille
 *
 * @returns Integer donnant la taille du plateau
*/
int PLATEAU_ObtenirTaille(Couleur * plateau) ;

#endif
