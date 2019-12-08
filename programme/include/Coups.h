#ifndef COUPS_TYPE
#define COUPS_TYPE
#include "Coup.h"
#include<stdbool.h>
#include "ListeChainee.h"


typedef struct
{
    ListeChainee coups;
    int nbDeCoups;
} Coups;



/**
 * @brief crée un ensemble de coups vide
 * 
 * @returns coups : Coups
*/
Coups creerCoups() ;

#endif