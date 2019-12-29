#include "../include/Ligne.h"
#include<stdbool.h>
#include<stdlib.h>

int ObtenirNumeroLigne(Ligne ligne) {
    return ligne + 1;
}

bool EstEgalLigne(Ligne ligne1, Ligne ligne2) {
    return ligne1 == ligne2;
}


Ligne CreerLigne(int numero) {
    Ligne* lig;
    lig = (Ligne*)malloc(sizeof(Ligne));
    *lig = Un;
    switch (numero)
    {
    case 1:
        *lig = Un;
        return *lig;
    case 2:
        *lig = Deux;
        return *lig;
    case 3:
        *lig = Trois;
        return *lig;
    case 4:
        *lig = Quatre;
        return *lig;
    case 5:
        *lig = Cinq;
        return *lig;
    case 6:
        *lig = Six;
        return *lig;
    case 7:
        *lig = Sept;
        return *lig;
    case 8:
        *lig = Huit;
        return *lig;
    }

}
