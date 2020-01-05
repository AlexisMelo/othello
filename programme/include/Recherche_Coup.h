#ifndef RECHERCHE_COUP
#define RECHERCHE_COUP

#include "Coups.h"
#include "Joueur.h"
#include "Plateau.h"

/**
 * Retourne tous les coups possibles pour un Joueur
 *
 *\param plateauDeJeu : C'est le plateau de jeu
 *
 *\param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *\return Coups
*/
Coups RECHERCHECOUP_RechercherTousLesCoups(Couleur * plateau, Couleur couleurJoueurActuel);

/**
 * Retourne un booléen pour savoir si un coup est possible ou pas
 *
 *\param plateauDeJeu : C'est le plateau de jeu
 *
 *\param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *\param positionDuCoup : Position du coup qu'on souhaite évaluer
 *
 *\return booléen
*/
bool RECHERCHECOUP_EstCoupValide(Couleur * plateau, Coup coup);

/**
 * Retourne un coup valide entree par un IA/Joueur
 *
 *\param JoueurActuel : Joueur qui joue son tour, il est représenté par une couleur
 *
 *\param plateauDeJeu : C'est le plateau de jeu
 *
 *\param obtenirCoup : fonction qui recupere un coup, IA ou Joueur
 *
 *\return Coup (un coup valide)
*/
Coup RECHERCHECOUP_ObtenirCoupValide (Couleur * plateau, Joueur joueur);

#endif
