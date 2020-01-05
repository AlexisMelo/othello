/**
 * \file MenuGraphique.h
 *
 * Fichier contenant la définition de fonctions permettant d'avoir un menu graphique pour lancer le jeu.
*/

#ifndef __MENU_GRAPHIQUE__
#define __MENU_GRAPHIQUE__

#include "Menu.h"
#include "MenuLigneCommande.h"

/**
 * Lance un enchainement de commandes pour lancer les fonctionnalités du jeu.
 * Il est possible d'afficher l'aide du jeu ou bien de lancer une partie.
 * Dans le cas où une partie est lancée, le Menu graphique
 * demande d'abord dans quel mode de jeu souhaite jouer l'utilisateur (PVP, standard, tournois)..
 * Il demande ensuite la profondeur de l'IA si il y en a une, et la Couleur du
 * premier Joueur.
 */
void MENU_G_MenuGraphique();

#endif
