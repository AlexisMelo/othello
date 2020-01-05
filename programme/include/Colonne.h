/**
 * \file Colonne.h
 *
 * Fichier contenant la définition de l'enum Colonne et de ses fonctions associées.
*/

#ifndef __COLONNE_TYPE__
#define __COLONNE_TYPE__

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * \enum Colonne
 *
 * L'énumeration permet de travailler avec les Colonne comme des caractères.
*/
typedef enum {a, b, c, d, e, f, g, h} Colonne;

#define KEY_ERROR 1;

/**
 * Obtient la Colonne correspondante à un integer.
 *
 * \example COLONNE_ObtenirColonneDepuisInt(2) => Colonne b
 *
 * \param int Numéro dont on souhaite retrouver la Colonne.
 *
 * \return Enumeration Colonne correspondant au numéro.
*/
Colonne COLONNE_ObtenirColonneDepuisInt(int colNum);

/**
 * Obtient la Colonne correspondante à un caractère.
 *
 * \example COLONNE_ObtenirColonneDepuisChar('d') = Colonne d
 *
 * \param char Caractère dont on souhaite retrouver la Colonne.
 *
 * \return Enumeration Colonne correspond au caractère.
*/
Colonne COLONNE_ObtenirColonneDepuisChar(char colChar);


char COLONNE_ObtenirCharDepuisColonne(Colonne c) ;
/**
 * Obtient le numero réel d'une Colonne. L'énumeration en C commence à 0 alors
 * que nous travaillons avec des ligne et des Colonne dont les indices commencent à 1.
 *
 * \example COLONNE_ObtenirNumeroColonne(a) = 1
 *
 * \param colonne Colonne dont on souhaite obtenir le numéro.
 *
 * \return Numéro de la Colonne.
*/
int COLONNE_ObtenirNumeroColonne(Colonne colonne);

/**
 *  Détermine si deux Colonne sont égales.
 *
 * \param colonne1 Première Colonne à comparer.
 * \param colonne2 Deuxième Colonne à comparer.
 *
 * \return true si les Colonne sont égales, false sinon.
*/
bool COLONNE_SontEgalesColonnes(Colonne colonne1, Colonne colonne2);

#endif
