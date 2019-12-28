#ifndef LIGNE_TYPE
#define LIGNE_TYPE
#include<stdbool.h>

typedef enum{Un, Deux, Trois, Quatre, Cinq, Six, Sept, Huit}Ligne;


/**
 *@brief Retourne le nombre correspondant à la Ligne passée en entrée.
 *
 * Exemple : ObtenirNumeroLigne(Ligne D) = 4
 * 
 *@param ligne : Ligne dont on veut le numéro
 *
 *@returns numéro : int
*/
int obtenirNumeroLigne(Ligne);


/**
 * @brief Construit une Ligne correspondant au numéro passée en entrée.
 * 
 * Exemple : creerLigne(2) => Ligne B
 * 
 * @param nb : int
 * 
 * @returns Ligne
*/
Ligne creerLigne(int);


/**
 *@brief Retourne vrai si les Lignes entrées sont identiques.
 *
 * @param ligne1 : Ligne
 *
 *@param ligne2: Ligne
 *
 * @returns booléen
*/
bool EstEgalLigne(Ligne ligne1, Ligne ligne2) ;
#endif