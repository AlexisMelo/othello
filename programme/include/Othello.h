/**
 * \file Othello.h
 *
 * Fichier contenant la définition du main du programme. Il permet de lancer le
 * jeu Othello.
*/

#ifndef __OTHELLO__
#define __OTHELLO__

#include <stdio.h>

#include "MenuGraphique.h"
#include "MenuLigneCommande.h"

/**
 * Entrée du programme. Elle permet de lancer le jeu Othello.
 *
 * \param nbArguments Nombre d'arguments en entrée du programme.
 * \param arguments Les arguments en entrée du programme.
 *
 * \return EXIT_SUCCESS - Arrêt normal du programme.
 */
int main(int nbArguments, char ** arguments);

#endif
