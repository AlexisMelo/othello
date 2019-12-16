# include "../include/Colonne.h"
#include<stdbool.h>


Colonne creerColonne(int numero){
    switch (numero)
    {
    case 1:
        return a;
    case 2:
        return b;
    case 3:
        return c;
    case 4:
        return d;
    case 5:
        return e;
    case 6:
        return f;
    case 7:
        return g;
    case 8:
        return h;
    default:
        return -1;
    }

}


int ObtenirNumeroColonne(Colonne colonne) {
    return colonne + 1;
}

bool estEgalColonne(Colonne colonne1, Colonne colonne2) {
    return colonne1 == colonne2;
}