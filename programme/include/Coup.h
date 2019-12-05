#ifndef COUP_TYPE
#define COUP_TYPE

#include"Position.h"
#include"Couleur.h"

typedef struct
{
    Position position;
    Couleur couleur;
}Coup;



Coup creerCoup(Position position, Couleur couleur) ;
Couleur obtenirCouleur(Coup coup) ;
Position obtenirPosition(Coup coup) ;
bool estCoupValide(Coup coup) ;
#endif