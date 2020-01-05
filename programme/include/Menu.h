/**
 * \file Menu.h
 *
 * Fichier contenant la définition les fonctions utilisées par les fichiers MenuGraphique et MenuLigneCommande.
*/

#ifndef __MENU__
#define __MENU__

#define COULEUR_NOIRE "noir"
#define COULEUR_BLANCHE "blanc"

#define JOUEURVSJOUEUR "pvp"
#define JOUEURVSIA "standard"
#define IAVSIA "tournois"

#define PROFONDEUR_DEFAUT_IA 5
#define PRONDEUR_MAX_IA 100 //nombre à partir duquel l'IA prend plus de 10 secondes à répondre

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "Couleur.h"

/**
 *  Obtient la profondeur de l'IA passée en paramètre ou bien une profondeur par défaut.
 *
 * \param nbArguments Nombre d'arguments en entrée du programme.
 * \param arguments Arguments en entrée du programme.
 *
 * \return Profondeur de l'IA obtenue en paramètre.
 */
int MENU_ObtenirProfondeurIADepuisArguments(int nbArguments, char ** arguments);

/**
 *  Obtient un integer entre deux bornes comprises à partir d'une saisie utilisateur.
 *
 * \param min Borne minimale.
 * \param max Borne maximale.
 *
 * \return Integer saisi par l'utilisateur.
 */
int MENU_SaisieInteger(int min, int max);

/**
 * Obtient depuis la liste des arguments du main le String correspondant à la couleur du premier Joueur.
 *
 * \param arguments Arguments en entrée du programme.
 *
 * \return String correspondant au nom d'une couleur.
 */
char * MENU_ObtenirStringCouleurPremierJoueurDepuisArguments(char ** arguments);

#endif
