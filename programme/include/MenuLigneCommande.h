/**
 * \file MenuLigneCommande.h
 *
 * Fichier contenant la définition de fonctions permettant d'avoir un menu graphique pour lancer le jeu.
*/

#ifndef __MENU_LIGNE_COMMANDE__
#define __MENU_LIGNE_COMMANDE__

#include "Menu.h"
#include "Joueur.h"
#include "Affichage.h"
#include "GererPartie.h"

/**
 * Traite les arguments en entrée du programme. A partir de ces arguments la
 * fonction va extraire les paramètres utiles au lancement d'une partie ou d'autres
 * fonctionnalités comme l'affichage de l'aide. Pour lancer la partie il faut
 * lancer le programme avec le mode de jeu souhaité (standard, pvp, tournois),
 * puis la couleur du premier Joueur, et finalement (optionnellement) un integer
 * correspondant à la profondeur de l'IA.
 *
 * \param nbArguments Nombre d'arguments en entrée du programme.
 * \param arguments Arguments en entrée du programme.
 */
void MENU_LC_MenuLigneCommande(int nbArguments, char ** arguments);

#endif
