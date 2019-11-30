#ifndef POSITION_TYPE
#define POSITIONN_TYPE
#include "Ligne.h";
#include "Colonne.h";

typedef struct  
{
    Ligne ligne;
    Colonne colonne;
} Position;

Position creerPosition(Ligne ligne, Colonne colonne);
Ligne obtenirLigne(Position position);
Colonne obtenirColonne(Position position);

#endif