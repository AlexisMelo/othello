#ifndef OBTENIR_COUP_VALIDE
#define OBTENIR_COUP_VALIDE

#include<stdbool.h>
#include"Plateau.h"
#include"Couleur.h"
#include"Coups.h"
#include"obtenirCoup.h"

/**
 *@brief Retourne un coup valide entree par un IA/Joueur
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@param plateauDeJeu : C'est le plateau de jeu
 * 
 *@param obtenirCoup : fonction qui recupere un coup, IA ou Joueur
 *
 *@returns Coup (un coup valide)
*/
Coup obtenirCoupValide (Couleur joueurActuel, Plateau plateauDeJeu, Coup *(obtenirCoup)(Couleur joueurActuel));

#endif