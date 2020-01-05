#ifndef COLONNE_TYPE
#define COLONNE_TYPE

#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>

typedef enum {a, b, c, d, e, f, g, h} Colonne;

#define KEY_ERROR 1;


/**
 *  Construit une colonne correspondant au numéro passé en entrée
 *
 * Exemple : COLONNE_ObtenirColonneDepuisInt(2) => Colonne b
 *
 * \param int Numéro dont on veut retrouver la colonne
 *
 * \return Enumeration colonne correspondant au numéro
*/
Colonne COLONNE_ObtenirColonneDepuisInt(int colNum);

/**
 *  Construit une colonne correspondant au caractère passé en paramètre
 *
 * Exemple : COLONNE_ObtenirColonneDepuisChar('d') = Colonne d
 *
 * \param char Caractère que l'on veut transformer en colonne
 *
 * \return Enumeration Colonne correspond au caractère
*/
Colonne COLONNE_ObtenirColonneDepuisChar(char colChar);

/**
 *  Obtient le numero réel d'une colonne
 *
 * \param colonne Colonne
 *
 * \return Numéro de la colonne
*/
int COLONNE_ObtenirNumeroColonne(Colonne colonne);

/**
 *  Retourne vrai si les Colonnes entrées sont identiques.
 *
 * \param colonne1 Colonne
 * \param colonne2 Colonne
 *
 * \return booleen
*/
bool COLONNE_EstEgalColonne(Colonne colonne1, Colonne colonne2);

#endif
