#ifndef MENU
#define MENU

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

#include "Aide.h"
#include "Couleur.h"

/**
 * @fn int ObtenirProfondeurIADepuisArguments (int nbArguments, char ** arguments)
 * @brief Obtient la profondeur de l'IA passée en paramètre ou bien une profondeur par défaut
 *
 * @param nbArguments : nombre d'arguments en entrée du programme
 * @param arguments : Arguments en entrée du programme
 *
 * @returns Retourne la profondeur de l'IA pendant le jeu
 */
int ObtenirProfondeurIADepuisArguments(int nbArguments, char ** arguments);

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

/**
 * @fn int ObtenirStringCouleurPremierJoueurDepuisArguments(char ** arguments)
 * @brief Obtenir depuis la liste des arguments du main le string correspondant à la couleur du premier joueur
 *
 * @param arguments Arguments en entrée du programme
 *
 * @returns char* String correspond au nom d'une couleur
 */
char * ObtenirStringCouleurPremierJoueurDepuisArguments(char ** arguments);

/**
 * @fn int ObtenirCouleurDepuisString(char * couleur)
 * @brief Obtenir depuis une structure Couleur depuis un string correspond à son nom
 *
 * @param char* String correspond au nom de la couleur
 *
 * @returns Couleur Structure Couleur
 */
Couleur ObtenirCouleurDepuisString(char * couleur);

#endif
