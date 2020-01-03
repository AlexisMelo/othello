#ifndef COUP_TYPE
#define COUP_TYPE

#include "Position.h"
#include "Couleur.h"
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct{
    Position position;
    Couleur couleur;
}Coup;

/**
 * @brief Crée un coup à partir d'une position et d'une couleur
 *
 * @params position Position où le coup doit être joué
 * @params couleur Couleur du joueur qui joue le coup
 *
 * @returns Coup à jouer
*/
Coup COUP_CreerCoup(Position position, Couleur couleur) ;

/**
 * @brief Détermine si deux coups sont identiques
 *
 * @param coup1 Coup
 * @param coup2 Coup
 *
 * @returns true si les coups sont égaux, false sinon
*/
bool COUP_EstEgalCoup(Coup coup1, Coup coup2) ;

/**
 * @brief Permet d'accéder à la Couleur d'un Coup
 *
 * @param coup : Coup
 *
 * @returns Couleur du coup passé en entrée
*/
Couleur COUP_ObtenirCouleur(Coup coup) ;

/**
 * @brief Permet d'accéder à la Position d'un Coup
 *
 * @param coup : Coup
 *
 * @returns Position du coup passé en entrée
*/
Position COUP_ObtenirPosition(Coup coup) ;

/**
 * @brief Détermine si un coup est valide
 *
 * Retourne vrai seulement si la position est dans les limites du plateau, et que la
 * Couleur n'est pas neutre
 *
 * @param plateau Couleur * plateau de jeu
 * @param coup Coup
 *
 * @returns estCoupValide bool
*/
bool COUP_EstCoupValide(Couleur * plateau, Coup coup) ;

#endif
