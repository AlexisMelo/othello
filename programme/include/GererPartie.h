/**
 * \file GererPartie.h
 *
 * Fichier contenant la définition des fonctions permettant de gérer le déroulement d'une partie d'Othello.
*/

#ifndef __GERERPARTIE__
#define __GERERPARTIE__

#include "Couleur.h"
#include "Plateau.h"
#include "Joueur.h"
#include "Coups.h"
#include "RechercherCoup.h"

/**
 * Permet de lancer une partie. Cette fonction initialise le plateau de jeu et
 * lance le jeu.
 *
 * \example : PARTIE_FaireUnePartie(AfficherResultat,AfficherPlateau,j1,j2)
 *
 * \param AfficherResultat Pointeur de fonction pour afficher les resultats de la partie.
 * \param AfficherPlateau Pointeur de fonction pour afficher le plateau.
 * \param j1 Premier Joueur.
 * \param j2 Second Joueur.
*/
void PARTIE_FaireUnePartie(void (*AfficherResultat)(Couleur *, Joueur, Joueur),void (*AfficherPlateau)(Couleur *), void (*AfficherCoup)(Coup),Joueur j1, Joueur j2) ;
/**
 * Permet de gérer une partie cad alterner les tours, savoir si elle est finie, etc...
 *
 * \param AfficherResultat Pointeur de fonction pour afficher les résultats de fin de partie.
 * \param AfficherPlateau Pointeur de fonction pour afficher le plateau.
 * \param j1 Premier Joueur.
 * \param j2 Second Joueur.
 * \param plateau Plateau de jeu initialisé.
*/
void PARTIE_GererPartie(void (*AfficherResultat)(Couleur *, Joueur, Joueur),void (*AfficherPlateau)(Couleur *),void (*AfficherCoup)(Coup),Joueur j1 ,Joueur j2,Couleur * plateau) ;
/**
 * Initialise les valeurs des pointeurs premierJoueur et secondJoueur avec les valeurs de j1 et de j2, sachant que
 * c'est toujours le joueur de couleur noire qui doit commencer la partie.
 *
 * \param premierJoueur Joueur qui doit jouer en premier dans la partie.
 * \param secondJoueur Joueur qui doit jouer en second dans la partie.
 * \param j1 Joueur numéro 1, qui n'est pas forcément le premier à jouer.
 * \param j2 Joueur numéro 2.
*/
void PARTIE_SetOrdreJoueurs(Joueur* premierJoueur, Joueur* secondJoueur, Joueur j1, Joueur j2);

/**
 * Permet d'obtenir un coup de la part d'un joueur et de le jouer sur plateau.
 *
 * \param plateau Plateau de jeu.
 * \param joueur Joueur qui doit jouer pendant ce tour.
 * \param AfficherCoup Pointeur de fonction pour afficher le déroulement d'un Coup.
 */
void PARTIE_JouerUnTour(Couleur * plateau, Joueur joueur, void (*AfficherCoup)(Coup)) ;

#endif
