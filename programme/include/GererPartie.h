#ifndef __GERERPARTIE__
#define __GERERPARTIE__
#include "AfficherResultat.h"
#include "AfficherPlateau.h"
#include "ObtenirCoupJ1.h"
#include "ObtenirCoupJ2.h"
#include "EtatDeLaPartie.h"
#include "JouerUnTour.h"

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
