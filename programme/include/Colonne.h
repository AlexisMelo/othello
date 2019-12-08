#include<stdbool.h>
#ifndef COLONNE_TYPE
#define COLONNE_TYPE

typedef enum {A, B, C, D, E, F, G, H}Colonne;

#define KEY_ERROR 1;
int ObtenirNumeroColonne(Colonne);
Colonne creerColonne(int);
bool estEgalColonne(Colonne colonne1, Colonne colonne2) ;
#endif