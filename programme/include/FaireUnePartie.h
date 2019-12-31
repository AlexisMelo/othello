#ifndef __FAIREUNEPARTIE__
#define __FAIREUNEPARTIE__

#include "GererPartie.h"
#include"Couleur.h"
#include"Plateau.h"

/**
 * @brief Permet de lancer une partie
 *
 * Exemple : PARTIE_FaireUnePartie(AfficherResultat,AfficherPlateau,j1,j2)
 * *
 * @param AfficherResultat : pointeur de fonction pour afficher les resultats de la partie
 *
 * @param AfficherPlateau : pointeur de fonction pour afficher le plateau
 *
 * @param JoueurJ1 : Joueur qui joue en premier
 *
 * @param JoueurJ2 : Second joueur
*/
void PARTIE_FaireUnePartie(void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *), Joueur j1, Joueur j2);

#endif
