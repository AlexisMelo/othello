#ifndef MENU_LIGNE_COMMANDE
#define MENU_LIGNE_COMMANDE

#include "Menu.h"
#include "Joueur.h"
#include "Affichage.h"
#include "GererPartie.h"

/**
 * @fn void menuLigneCommande (int nbArguments, char ** arguments)
 *  Traitement de l'entrée du programme quand il est lancé avec des arguments.
 *
 * \param nbArguments : nombre d'arguments en entrée du programme
 * \param arguments : les arguments en entrée du programme
 */
void MenuLigneCommande(int nbArguments, char ** arguments);

#endif
