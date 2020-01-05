# include "Colonne.h"

//amélioration : essayer de voir si polymorphisme existe en C car creerColonneDepuisInt et depuis char = même fonction

Colonne COLONNE_ObtenirColonneDepuisInt(int colNum){
    switch (colNum)
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

Colonne COLONNE_ObtenirColonneDepuisChar(char colChar){
    switch (colChar)
    {
    case 'a':
        return a;
    case 'b':
        return b;
    case 'c':
        return c;
    case 'd':
        return d;
    case 'e':
        return e;
    case 'f':
        return f;
    case 'g':
        return g;
    case 'h':
        return h;
    default:
        return -1;
    }
}

int COLONNE_ObtenirNumeroColonne(Colonne colonne) {
    return colonne + 1;
}

bool COLONNE_SontEgalesColonnes(Colonne colonne1, Colonne colonne2) {
    return colonne1 == colonne2;
}
