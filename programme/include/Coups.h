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

Coups creerCoups() ;

#endif