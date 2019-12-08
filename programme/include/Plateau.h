#include "Couleur.h"
#include "Position.h"
#include "Coup.h"
#include<stdbool.h>
typedef Couleur Plateau[8][8];


/** 
 *@brief Constructeur du type Plateau
 *@param plateau : Plateau actuel
 *@param position : Position à laquelle on regarde la couleur
 *@returns : Couleur
*/
Plateau * creerPlateau() ;


/**
 * @brief Joue un coup sur le plateau.
 * 
 *@param plateau : Plateau
 *@param coup : Coup à jouer
*/
void jouerCoup(Plateau * plateau, Coup coup) ;



/** 
 *@brief Retourne la couleur du Plateau à cette Position.
 *@param plateau : Plateau actuel
 *@param position : Position à laquelle on regarde la couleur
 *@returns : Couleur
*/
Couleur obtenirCouleurDepuisPlateau(Plateau plateau, Position position) ;

/** 
 *@brief Vérifie si la position donnée du plateau est vide.
 *@param plateau : Plateau actuel
 *@param position : Position que l'on veut vérifier
 *@returns : Booléen
*/
bool estPositionVide(Plateau plateau, Position position) ;

/** Fonction d'accès à la taille du plateau.
 * 
 *@param plateau : Plateau dont on veut la taille 
 *@returns : Taille dans un int
*/
int obtenirTaille(Plateau plateau) ;