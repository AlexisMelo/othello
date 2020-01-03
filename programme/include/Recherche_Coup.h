#ifndef RECHERCHE_COUP
#define RECHERCHE_COUP

#include<stdbool.h>
#include"Plateau.h"
#include"Couleur.h"
#include"Coups.h"
#include"Position.h"
#include"Parcourir_Direction.h"

/**
 *@brief Retourne tous les coups possibles pour un Joueur
 *
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@returns Coups
*/
Coups RECHERCHECOUP_RechercherTousLesCoups(Couleur * plateau, Couleur couleurJoueurActuel);

/**
 *@brief Retourne un booléen pour savoir si un coup est possible ou pas
 *
 *@param plateauDeJeu : C'est le plateau de jeu
 *
 *@param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *@param positionDuCoup : Position du coup qu'on souhaite évaluer
 *
 *@returns booléen
*/
bool RECHERCHECOUP_EstCoupValide(Couleur * plateau, Coup coup);

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
Coup RECHERCHECOUP_ObtenirCoupValide (Joueur joueur, Couleur * plateau);

#endif
