#ifndef PARCOURIR_DIRECTION
#define PARCOURIR_DIRECTION

#include<stdbool.h>

#include "Couleur.h"
#include "Coup.h"

/**
 *@brief Retourne un booléen pour savoir si au moins une direction est valide
 *
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param positionDuCoup : Position du coup qu'on souhaite évaluer
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@returns booléen
*/
bool RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(Couleur * plateau, Coup coup);

/**
 *@brief Retourne un booléen pour savoir si la direction est valide, i.e il y a capture de pion(s)
 *
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param positionDuCoup : Position du coup qu'on souhaite évaluer
 *
 *@param uneDirection : Direction dans laquelle on parcourt le plateau
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@returns booléen
*/
bool RECHERCHEDIRECTIONS_CoupPossibleDansDirection(Couleur * plateau, Coup coup, Direction direction);

#endif