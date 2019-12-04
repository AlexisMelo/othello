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
bool estPositionValide(Position position) ;
Position FixerLigne(Position position, Ligne ligne) ;
Position FixerColonne(Position position, Colonne colonne) ;
Position appliquerDirection(Position position, Direction direction) ;
#endif