#include "../include/Ligne.h"
#include<stdbool.h>
#include<stdlib.h>

int ObtenirNumeroLigne(Ligne ligne) {
    return ligne + 1;
}

bool EstEgalLigne(Ligne ligne1, Ligne ligne2) {
    return ObtenirNumeroLigne(ligne1) == ObtenirNumeroLigne(ligne2);
}


Ligne CreerLigne(int numero) {
    Ligne* plig;
    plig = (Ligne*)malloc(sizeof(Ligne));
    *plig = Un;
    switch (numero)
    {
    case 1:
        *plig = Un;
        return *plig;
    case 2:
        *plig = Deux;
        return *plig;
    case 3:
        *plig = Trois;
        return *plig;
    case 4:
        *plig = Quatre;
        return *plig;
    case 5:
        *plig = Cinq;
        return *plig;
    case 6:
        *plig = Six;
        return *plig;
    case 7:
        *plig = Sept;
        return *plig;
    case 8:
        *plig = Huit;
        return *plig;
    }
}
