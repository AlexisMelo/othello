#include<stdbool.h>
#ifndef LIGNE_TYPE
#define LIGNE_TYPE

typedef enum{Un, Deux, Trois, Quatre, Cinq, Six, Sept, Huit}Ligne;


int obtenirNumeroLigne(Ligne);
Ligne creerLigne(int);
bool estEgalLigne(Ligne ligne1, Ligne ligne2) ;
#endif