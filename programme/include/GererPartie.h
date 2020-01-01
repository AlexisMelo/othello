#ifndef __GERERPARTIE__
#define __GERERPARTIE__
#include"Couleur.h"
#include"Plateau.h"
#include"JouerCoup.h"
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

/**
 *@brief permet de gerer une partie
 *
 *@param Couleur : Couleur du premier joueur qui joue
 *
 *@param Couleur * : plateau initialisé
 *
 *@param AfficherResultat : pointeur de fonction pour afficher le resultat
 *
 *@param AfficherPlateau : pointeur de fonction pour afficher le plateau
 *
 *@param ObtenirCoupJ1 : pointeur de fonction pour obtenir le coup du premier joueur
 *
 *@param ObtenirCoupJ2 : pointeur de fonction pour obtenir le coup du deuxième joueur
 *
 *@returns booléen
*/
void GererPartie(Couleur,Couleur *,void (*AfficherResultat)(Plateau),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(Couleur,Plateau),void (*ObtenirCoupJ2)(Couleur,Plateau));

#endif
