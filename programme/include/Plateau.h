#ifndef __PLATEAU__
#define __PLATEAU__

#include <stdbool.h>

#include "Position.h"
#include "Coup.h"
#include "Parcourir_Direction.h"

#define TAILLE 8

//typedef Couleur Plateau[TAILLE][TAILLE];

/**
 *  Initialiser un plateau de jeu avec 4 cases du centre remplies et les autres neutres
 *
 * Exemple : PLATEAU_InitialiserPlateau(p)
 *
 * \param plateau Plateau de jeu
*/
void PLATEAU_InitialiserPlateau(Couleur * plateau);

/**
 *  Constructeur du Plateau
 *
 * \return : Couleur * Pointeur de plateau avec allocation dynamique
*/
Couleur * PLATEAU_CreerPlateau() ;

/**
 *  Joue un coup sur le plateau.
 *
 * \param plateau Plateau de jeu
 * \param coup Coup à jouer
 *
 * \return Plateau mis à jour avec le nouveau coup
 */
void PLATEAU_JouerCoup(Couleur * plateau, Coup coup);

/**
 * Retourne la couleur du Plateau à cette position
 *
 *\param plateau Plateau de jeu
 *\param position Position de la case du plateau dont on veut la couleur
 *
 *\return Couleur à la position donnée
*/
Couleur PLATEAU_ObtenirCouleurAvecPosition(Couleur * plateau, Position position) ;

/**
 *  Vérifie si la position donnée du plateau est libre, équivalent à savoir si la couleur est neutre
 *
 * \param plateau Plateau de jeu
 * \param position Position que l'on veut vérifier
 *
 * \return true si la position est libre, false sinon
*/
bool PLATEAU_EstPositionLibre(Couleur * plateau, Position position) ;

/**
 *  Retourne la taille du plateau (sa largeur ou bien sa longueur car les deux sont égales)
 *
 * \param plateau Couleur * representant le plateau de jeu et dont on veut la taille
 *
 * \return Integer donnant la taille du plateau
*/
int PLATEAU_ObtenirTaille(Couleur * plateau) ;

/**
 *  Permet de savoir si le plateau est rempli
 *
 * \param plateau Plateau de jeu
 *
 * \return true si le plateau est rempli, false sinon
*/
bool PLATEAU_EstRempli(Couleur * plateau);

/**
 * Retourne le nombre de points d'une couleur sur un plateau donné
 *
 *\param p Plateau de jeu
 *\param couleur Couleur dont on souhaite connaitre le nombre de points
 *
 *\return Nombre de point de la couleur donnée
*/
int PLATEAU_CalculerPoints(Couleur * p, Couleur couleur);

/**
 *  Vérifie si la position passée en entrée est valide par rapport à un plateau, cad qu'elle existe sur le dit plateau
 *
 * \param plateau Couleur * correspondant au plateau de jeu
 * \param position Position que l'on souhaite tester
 *
 * \return vraie si la position existe sur le plateau
*/
bool PLATEAU_EstPositionValide(Couleur * plateau, Position position) ;

void PLATEAU_CapturerPions(Couleur * plateau, Coup coup);

void PLATEAU_CapturerPionsDansDirection(Couleur * plateau, Coup coup, Direction direction);
#endif
