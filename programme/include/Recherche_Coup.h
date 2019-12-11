#ifndef RECHERCHE_COUP
#define RECHERCHE_COUP

#include<stdbool.h>
#include"Plateau.h"
#include"Couleur.h"
#include"Coups.h"
#include"Position.h"

/**
 *@brief Retourne tous les coups possibles pour un Joueur
 * 
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@returns Coups 
*/
Coups rechercherTousLesCoups (Plateau plateauDeJeu, Couleur joueurActuel);

/**
 *@brief Retourne un booléen pour savoir si un coup est possible ou pas
 * 
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@param positionDuCoup : Position du coup qu'on souhaite évaluer
 *
 *@returns Coups 
*/
bool rechercherUnCoup (Plateau plateauDeJeu, Couleur joueurActuel, Position positionDuCoup);
#endif