#ifndef MENU
#define MENU

#define COULEUR1 "noir"
#define COULEUR2 "blanc"

#define JOUEURVSJOUEUR "pvp"
#define JOUEURVSIA "standard"
#define IAVSIA "tournois"

#define PROFONDEUR_DEFAUT_IA 5
#define PRONDEUR_MAX_IA 100 //nombre à partir duquel l'IA prend plus de 10 secondes à répondre

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "Aide.h"

/**
 * @fn int obtenirProfondeurIA (int nbArguments, char ** arguments)
 * @brief Obtient la profondeur de l'IA passée en paramètre ou bien une profondeur par défaut
 *
 * @param nbArguments : nombre d'arguments en entrée du programme
 * @param arguments : les arguments en entrée du programme
 *
 * @returns Retourne la profondeur de l'IA pendant le jeu
 */
int ObtenirProfondeurIA(int nbArguments, char ** arguments);

/**
 * @fn int saisieInteger (int min, int max)
 * @brief Obtient un int entre deux bornes comprises à partir d'une saisie utilisateur
 *
 * @param min : borne minimale
 * @param max : borne maximale
 *
 * @returns int saisi par l'utiliateur
 */
int SaisieInteger(int min, int max);

#endif
