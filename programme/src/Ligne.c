#include "Ligne.h"
#include<stdbool.h>

int obtenirNumeroLigne(Ligne ligne) {
    return ligne;
}

bool estEgalLigne(Ligne ligne1, Ligne ligne2) {
    return ligne1 == ligne2;
}

Ligne creerLigne(int numero) {
    switch (numero)
    {
    case 1:
        return Un;
    case 2:
        return Deux;
    case 3:
        return Trois;
    case 4:
        return Quatre;
    case 5:
        return Cinq;
    case 6:
        return Six;
    case 7:
        return Sept;
    case 8:
        return Huit;
    }

}


bool estEgalLigne(Ligne ligne1, Ligne ligne2) {
    return ligne1 == ligne2;
}