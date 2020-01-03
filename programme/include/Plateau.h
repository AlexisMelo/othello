#include "Couleur.h"
#include "Position.h"
#include "Coup.h"
#include<stdbool.h>




#define TAILLE 8



//typedef Couleur Plateau[TAILLE][TAILLE];


/** 
 *@brief Constructeur du Plateau
 *@returns : Couleur *
*/
Couleur ** CreerPlateau() ;

void InitPlateau(Couleur (*pPlateau)[64]);  

/**
 * @brief Pose un pion sur le plateau.
 * 
 *@param plateau : Couleur *
 *@param coup : Coup à jouer
 *@returns plateau mis à Jour : Couleur*
 */
void PoserPion(Couleur (*plateau)[64], Coup coup) ;



/** 
 *@brief Retourne la couleur du Plateau à cette Position.
 *@param plateau : Plateau actuel
 *@param position : Position à laquelle on regarde la couleur
 *@returns : Couleur
*/
Couleur ObtenirCouleurDepuisPlateau(Couleur (*plateau)[64], Position position) ;
/** 
 *@brief Vérifie si la position donnée du plateau est vide.
 *@param plateau : Plateau actuel
 *@param position : Position que l'on veut vérifier
 *@returns : Booléen
*/
bool EstPositionVide(Couleur (*pPlateau)[64], Position position) ;

/** Fonction d'accès à la taille du plateau.
 * 
 *@param plateau : Plateau dont on veut la taille 
 *@returns : Taille dans un int
*/
int ObtenirTaille(Couleur (*plateau)[64]) ;