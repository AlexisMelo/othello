#include "../include/Ligne.h"
#include<stdbool.h>
#include<stdlib.h>

int ObtenirNumeroLigne(Ligne ligne) {
    return ligne + 1;
}

<<<<<<< HEAD
bool estEgalLigne(Ligne ligne1, Ligne ligne2) {
    return obtenirNumeroLigne(ligne1) == obtenirNumeroLigne(ligne2);
}


Ligne creerLigne(int numero) {
    Ligne* plig;
    plig = (Ligne*)malloc(sizeof(Ligne));
    *plig = Un;
=======
bool EstEgalLigne(Ligne ligne1, Ligne ligne2) {
    return ligne1 == ligne2;
}


Ligne CreerLigne(int numero) {
    Ligne* lig;
    lig = (Ligne*)malloc(sizeof(Ligne));
    *lig = Un;
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
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
