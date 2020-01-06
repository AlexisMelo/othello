/**
 * \file Plateau.h
 *
 * Fichier contenant la définition des fonctions permettant d'intéragir avec le plateau de jeu.
*/

#ifndef __PLATEAU__
#define __PLATEAU__

#include <stdbool.h>

#include "Position.h"
#include "Coup.h"
#include "ParcourirDirection.h"

#define TAILLE 8 // taille d'un plateau

/**
 * Initialise un plateau de jeu avec 4 cases du centre remplies et les autres neutres.
 *
 * \example PLATEAU_InitialiserPlateau(p) = le plateau p initialisé
 *
 * \param plateau Plateau de jeu
*/
void PLATEAU_InitialiserPlateau(Couleur * plateau);

/**
 *  Crée un plateau.
 *
 * \return : Pointeur vers un tableau de Couleur, alloué dynamiquement.
*/
Couleur * PLATEAU_CreerPlateau() ;

/**
 *  Joue un coup sur le plateau. C'est à dire que la Couleur du Coup est posée à
 * la bonne Position, cependant il n'y a pas de capture des pions adverses sur le plateau.
 *
 * \param plateau Plateau de jeu.
 * \param coup Coup que l'on souhaite jouer sur le plateau.
 */
void PLATEAU_JouerCoup(Couleur * plateau, Coup coup);

/**
 * Permet d'obtenir la Couleur présente sur le plateau grâce à une Position.
 *
 * \param plateau Plateau de jeu.
 * \param position Position de la case du plateau dont on souhaite obtenir la Couleur.
 *
 * \return Couleur à la Position donnée.
*/
Couleur PLATEAU_ObtenirCouleurAvecPosition(Couleur * plateau, Position position) ;

/**
 * Détermine si la Position est libre à la Position donnée. On considère qu'une
 * Position est libre quand la Couleur à cet emplacement est neutre.
 *
 * \param plateau Plateau de jeu.
 * \param position Position dont on souhaite vérifier la liberté.
 *
 * \return true si la Position est libre, false sinon.
*/
bool PLATEAU_EstPositionLibre(Couleur * plateau, Position position) ;

/**
 * Permet d'obtenir la taille d'un plateau.
 *
 * \param plateau Plateau de jeu dont on souhaite connaitre la taille.
 *
 * \return Integer donnant la taille du plateau.
*/
int PLATEAU_ObtenirTaille(Couleur * plateau) ;

/**
 * Détermine si le plateau est entièrement rempli. On appelle un plateau rempli
 * un plateau dont toutes les Position renvoient une Couleur qui n'est pas neutre,
 * donc qui ne comporte pas de case "libre".
 *
 * \param plateau Plateau de jeu.
 *
 * \return true si le plateau est rempli, false sinon.
*/
bool PLATEAU_EstRempli(Couleur * plateau);

/**
 * Calcule le nombre de points d'une Couleur. Un point équivaut à un pion présent
 * sur le plateau de la couleur donnée.
 *
 * \param plateau Plateau de jeu.
 * \param couleur Couleur dont on souhaite calculer le nombre de points.
 *
 * \return Integer donnant le nombre de points de la Couleur donnée.
*/
int PLATEAU_CalculerPoints(Couleur * plateau, Couleur couleur);

/**
 * Détermine si une Position est valide. On considère une Position valide par rapport
 * à un plateau donné, c'est à dire que l'on vérifie si cette Position n'est pas
 * en dehors des limites du plateau.
 *
 * \param plateau Plateau de jeu.
 * \param position Position que l'on souhaite tester.
 *
 * \return true si la Positon est valide, false sinon.
*/
bool PLATEAU_EstPositionValide(Couleur * plateau, Position position) ;

/**
 * Capture les pions adverses depuis la Position d'un Coup donné. On entend par capture
 * le fait de remplacer la Couleur des pions qui ne sont pas de la Couleur du Coup
 * joué par la Couleur de ce dernier. Il est possible de capturer dans les 8 Direction
 * différentes. La capture s'arrête dans une Direction quand on rencontre une case
 * avec la même Couleur que celle du Coup.
 *
 * \param plateau Plateau de jeu.
 * \param coup Coup qui engendre la capture.
 */
void PLATEAU_CapturerPions(Couleur * plateau, Coup coup);

/**
 * Capture les pions adverses depuis la Position d'un Coup donné dans une certaine Direction.
 * cf PLATEAU_CapturerPions pour avoir des informations sur la capture.
 *
 * \param plateau Plateau de jeu.
 * \param coup Coup qui egendre la capture.
 */
void PLATEAU_CapturerPionsDansDirection(Couleur * plateau, Coup coup, Direction direction);
#endif
