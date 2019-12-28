#ifndef MENU
#define MENU

#define PROFONDEUR_DEFAUT_IA 5

#include <stdlib.h>
#include <Aide.h>

/**
 * @fn int obtenirProfondeurIA (int nbArguments, char ** arguments)
 * @brief Obtient la profondeur de l'IA passée en paramètre ou bien une profondeur par défaut
 *
 * @param nbArguments : nombre d'arguments en entrée du programme
 * @param arguments : les arguments en entrée du programme
 *
 * @returns Retourne la profondeur de l'IA pendant le jeu
 */
int obtenirProfondeurIA(int nbArguments, char ** arguments);

#endif
