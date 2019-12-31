#ifndef COLONNE_TYPE
#define COLONNE_TYPE


#include<stdbool.h>
typedef enum {a, b, c, d, e, f, g, h}Colonne;

#define KEY_ERROR 1;

/**
 *@brief Retourne le nombre correspondant à la Colonne passée en entrée.
 *
 * Exemple : ObtenirNumeroColonne(colonne D) = 4
 * 
 *@param colonne : Colonne dont on veut le numéro
 *
 *@returns numéro : int
*/
int ObtenirNumeroColonne(Colonne colonne);


/**
 * @brief Construit une colonne correspondant au numéro passée en entrée.
 * 
 * Exemple : creerColonne(2) => Colonne B
 * 
 * @param nb : int
 * 
 * @returns Colonne
*/
Colonne CreerColonne(int nb);


/**
 *@brief Retourne vrai si les Colonnes entrées sont identiques.
 *
 * @param colonne1 : Colonne
 *
 *@param colonne2: Colonne
 *
 * @returns booléen
*/
bool estEgalColonne(Colonne colonne1, Colonne colonne2);



Colonne ObtenirColonneDepuisChar(char colChar);


#endif