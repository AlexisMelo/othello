#ifndef COULEUR_TYPE
#define COULEUR_TYPE

#include<stdbool.h>


typedef struct 
{
    enum {Vide, Blanc, Noir}nom;
    char hexa[2];
    char symbole;
    Couleur couleurOpposee;
} Couleur;


Couleur CouleurNoir() ;
Couleur CouleurBlanc() ;
Couleur CouleurNeutre() ;
Couleur obtenirCouleuropposee(Couleur couleur) ;
bool estNeutre(Couleur couleur) ;
bool estEgalCouleur(Couleur couleur1, Couleur couleur2) ;
#endif