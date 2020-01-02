#ifndef COUP_TYPE
#define COUP_TYPE

#include"Position.h"
#include"Couleur.h"

typedef struct
{
    Position position;
    Couleur couleur;
}Coup;

Coup * creerCoupVide() ;


/**
 * @brief Retourne un coup à partir d'une position et d'une couleur
 *
 * @returns coup : Coup
*/
Coup CreerCoup(Position position, Couleur couleur) ;

/**
 * @brief Permet d'accéder à la Couleur d'un Coup
 *
 * @param coup : Coup
 * 
 * @returns Couleur du coup passé en entrée
*/
Couleur ObtenirCouleur(Coup coup) ;


/**
 * @brief Permet d'accéder à la Position d'un Coup
 *
 * @param coup : Coup
 * 
 * @returns Position du coup passé en entrée
*/
Position ObtenirPosition(Coup coup) ;



/**
 * @brief Détermine si un coup est valide
 * 
 * Retourne vrai seulement si la position est dans les limites du plateau, et que la
 * Couleur n'est pas neutre
 *
 * @param coup : Coup
 * 
 * @returns estCoupValide : bool
*/
bool EstCoupValide(Coup coup) ;



/**
 * @brief Détermine si deux coups sont identiques
 * 
 * @param coup1 : Coup
 * 
 * @param coup2 : Coup
 * 
 * @returns estEgal : bool
*/
bool EstEgalCoup(Coup coup1, Coup coup2) ;
#endif