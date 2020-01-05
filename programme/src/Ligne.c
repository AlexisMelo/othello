#include "../include/Ligne.h"

Ligne LIGNE_ObtenirLigneDepuisInt(int ligNum) {
  switch (ligNum)
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
    default:
        return -1;
  }
}

int LIGNE_ObtenirNumeroLigne(Ligne ligne) {
    return ligne + 1;
}

bool LIGNE_SontEgalesLignes(Ligne ligne1, Ligne ligne2) {
    return ligne1 == ligne2;
}
