#ifndef LIGNE_TYPE
#define LIGNE_TYPE

#include<stdbool.h>

typedef enum {Un, Deux, Trois, Quatre, Cinq, Six, Sept, Huit} Ligne;

/**
 * @brief Construit une ligne correspondant au numéro passé en entrée
 *
 * Exemple : LIGNE_ObtenirLigneDepuisInt(2) => ligne 3
 *
 * @param int Numéro dont on veut retrouver la ligne
 *
 * @returns Enumeration ligne correspondant au numéro
*/
Ligne LIGNE_ObtenirLigneDepuisInt(int ligNum);

/**
 * @brief Obtient le numero réel d'une ligne
 *
 * @param ligne Ligne
 *
 * @returns Numéro de la ligne
*/
int LIGNE_ObtenirNumeroLigne(Ligne ligne);

/**
 * @brief Retourne vrai si les Lignes entrées sont identiques.
 *
 * @param ligne1 Ligne
 * @param ligne2 Ligne
 *
 * @returns booléen
*/
bool LIGNE_EstEgalLigne(Ligne ligne1, Ligne ligne2);

#endif
