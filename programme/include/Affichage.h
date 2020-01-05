/**
 * \file Affichage.h
 *
 * Fichier contenant les fonctions d'affichage.
*/
#ifndef __AFFICHAGE__
#define __AFFICHAGE__

#include "Couleur.h"
#include "Plateau.h"
#include "Joueur.h"

/**
 * Affiche le plateau de jeu. Le plateau est affiché sur la sortie standard (terminal).
 * Les lettres du dessus correspondent aux colonnes du jeu et les chiffres sur le côté
 * sont les lignes. A l'intersection d'une ligne et d'une colonne se trouve un symbole
 * significatif de la couleur présente sur la case.
 *
 * \param plateau Plateau de jeu.
 */
void AFFICHAGE_AfficherPlateau(Couleur * plateau) ;

/**
 * Affiche le plateau de jeu pour une partie en mode tournois. Pour l'instant il n'est pas
 * nécessaire d'afficher le plateau quand la partie est jouée en mode tournois, donc la fonction
 * n'affiche rien.
 *
 * \param plateau Plateau de jeu.
 */
void AFFICHAGE_AfficherPlateauTournois(Couleur * plateau);

/**
 * Affiche les résultats de fin de partie. Affiche le score total de chaque joueur (
 * c'est à dire le nombre de cases portant sa couleur présentes sur le plateau ) ainsi
 * que le vainqueur de la partie. Affiche égalité en cas d'égalité.
 *
 * \param plateau Plateau de jeu.
 */
void AFFICHAGE_AfficherResultatsPartie(Couleur * plateau, Joueur j1, Joueur j2);

/**
 * Affiche les résultats de fin de partie en mode tournois. Pour l'instant il
 * n'est pas nécessaire d'afficher les résultats quand la partie est en mode tournois,
 * donc la fonction n'affiche rien.
 *
 * \param plateau Plateau de jeu
 */
void AFFICHAGE_AfficherResultatsPartieTournois(Couleur * plateau, Joueur j1, Joueur j2);

void AFFICHAGE_MessageAide();

#endif
