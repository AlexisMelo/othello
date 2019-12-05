#ifndef POSITION_TYPE
#define POSITION_TYPE

#include "Ligne.h"
#include "Direction.h"
#include "Colonne.h"
#include<stdbool.h>

typedef struct 
{
    Ligne ligne;
    Colonne colonne;
}Position;

Position creerPosition(Ligne ligne, Colonne colonne) ;
Ligne obtenirLigne(Position position) ;
Colonne obtenirColonne(Position position) ;
bool estPositionValide(Position position) ;
Position FixerLigne(Position position, Ligne ligne) ;
Position FixerColonne(Position position, Colonne colonne) ;
Position appliquerDirection(Position position, Direction direction) ;





#endif