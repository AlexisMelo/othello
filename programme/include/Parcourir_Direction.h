/**
 * \file Parcourir_Direction.h
 *
 * Fichier contenant la définition de fonctions pour parcourir un plateau dans
 * des directions données et voir si un coup est possible.
*/

#ifndef __PARCOURIR_DIRECTION__
#define __PARCOURIR_DIRECTION__

#include <stdbool.h>

#include "Couleur.h"
#include "Coup.h"

/**
 * Détermine si un Coup permet de capturer des pions dans au moins une Direction.
 *
 *\param plateauDeJeu Plateau de jeu.
 *\param coup Coup dont on souhaite déterminer l'influence sur le plateau.
 *
 *\return true si le Coup permet la capture de pions, false sinon.
*/
bool RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(Couleur * plateau, Coup coup);

/**
 * Détermine si un Coup permet de capturer des pions dans une Direction donnée.
 *
 * \param plateauDeJeu Plateau de jeu.
 * \param coup Coup dont on souhaite déterminer l'influence sur le plateau.
 * \param direction Direction dans laquelle on recherche la capture potentielle de pions.
 *
 * \return true si le Coup permet la capture de pions, false sinon.
*/
bool RECHERCHEDIRECTIONS_CoupPossibleDansDirection(Couleur * plateau, Coup coup, Direction direction);

#endif
