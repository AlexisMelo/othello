#ifndef COLONNE_TYPE
#define COLONNE_TYPE

#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>

typedef enum {a, b, c, d, e, f, g, h} Colonne;

#define KEY_ERROR 1;


/**
 * @brief Construit une colonne correspondant au numéro passé en entrée
 *
 * Exemple : COLONNE_ObtenirColonneDepuisInt(2) => Colonne b
 *
 * @param int Numéro dont on veut retrouver la colonne
 *
 * @returns Enumeration colonne correspondant au numéro
*/
Colonne COLONNE_ObtenirColonneDepuisInt(int colNum);

/**
 * @brief Construit une colonne correspondant au caractère passé en paramètre
 *
 * Exemple : COLONNE_ObtenirColonneDepuisChar('d') = Colonne d
 *
 * @param char Caractère que l'on veut transformer en colonne
 *
 * @returns Enumeration Colonne correspond au caractère
*/
Colonne COLONNE_ObtenirColonneDepuisChar(char colChar);

/**
 * @brief Obtient le numero réel d'une colonne
 *
 * @param colonne Colonne
 *
 * @returns Numéro de la colonne
*/
int COLONNE_ObtenirNumeroColonne(Colonne colonne);

/**
 * @brief Retourne vrai si les Colonnes entrées sont identiques.
 *
 * @param colonne1 Colonne
 * @param colonne2 Colonne
 *
 * @returns booleen
*/
bool COLONNE_EstEgalColonne(Colonne colonne1, Colonne colonne2);

#endif
