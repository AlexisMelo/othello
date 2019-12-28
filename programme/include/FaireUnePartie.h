#ifndef __FAIREUNEPARTIE__
#define __FAIREUNEPARTIE__
#include "GererPartie.h"
#include "InitialiserPlateau.h"
#include"Couleur.h"
#include"Plateau.h"
/**
 *@brief Permet de faire une partie
 *
 * Exemple : FaireUnePartie(Couleur noir,AfficherResultat,AfficherPlateau,ObtenirCoupJ1,ObtenirCoupJ2)
 *
 *@param Couleur : Couleur du premier joueur qui joue
 *
 *@param AfficherResultat : pointeur de fonction pour afficher le resultat
 *
 *@param AfficherPlateau : pointeur de fonction pour afficher le plateau
 *
 *@param ObtenirCoupJ1 : pointeur de fonction pour obtenir le coup du premier joueur
 *
 *@param ObtenirCoupJ2 : pointeur de fonction pour obtenir le coup du deuxième joueur
*/
void FaireUnePartie(Couleur,void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *),Coup (*ObtenirCoupJ1)(Couleur,Couleur *),void (*ObtenirCoupJ2)(Couleur,Couleur *));
#endif
