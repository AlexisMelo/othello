#ifndef ObtenirCoupJoueur_h
#define ObtenirCoupJoueur_h
#include <stdio.h>
#include"Couleur.h"
#include"Colonne.h"
#include"Ligne.h"
#include"Coup.h"
/**
 *@brief Retourne un coup d'un joueur à partir d'une saisie de coordonnées et d'une couleur.
 *
 * @param c : Couleur
 *
 * @returns Coup
*/

Coup ObtenirCoupJoueur(Couleur c);

#endif
