# include "../include/Colonne.h"
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>


Colonne creerColonne(int numero){
    Colonne * col;
    col = (Colonne*)malloc(sizeof(Colonne));
    *col = a;
    switch (numero)
    {
    case 1:
        *col = a;
        return *col;
    case 2:
        *col = b;
        return *col;
    case 3:
        *col = c;
        return *col;
    case 4:
        *col = d;
        return *col;
    case 5:
        *col = e;
        return *col;
    case 6:
        *col = f;
        return *col;
    case 7:
        *col = g;
        return *col;
    case 8:
        *col = h;
        return *col;
    }

}


Colonne ObtenirColonneDepuisChar(char colChar){
    switch (colChar)
    {
    case 'a':
        return 0;
    case 'b':
        return 1;
    case 'c':
        return 2;
    case 'd':
        return 3;
    case 'e':
        return 4;
    case 'f':
        return 5;
    case 'g':
        return 6;
    case 'h':
        return 7;
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