# include "Colonne.h";
#include<stdbool.h>


Colonne creerColonne(int numero){
    switch (numero)
    {
    case 1:
        return A;
    case 2:
        return B;
    case 3:
        return C;
    case 4:
        return D;
    case 5:
        return E;
    case 6:
        return F;
    case 7:
        return G;
    case 8:
        return H;
    default:
        __raise KEY_ERROR;
    }

}


int ObtenirNumeroColonne(Colonne colonne) {
    return colonne + 1;
}

bool estEgalColonne(Colonne colonne1, Colonne colonne2) {
    return colonne1 == colonne2;
}