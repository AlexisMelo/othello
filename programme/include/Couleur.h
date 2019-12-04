#ifndef COULEUR_TYPE
#define COULEUR_TYPE
typedef struct 
{
    enum {Vide, Blanc, Noir}nom;
    char hexa[2];
    char symbole;
} Couleur;


Couleur obtenirCouleuropposee(Couleur couleur) ;
Couleur CouleurNoir() ;
Couleur CouleurBlanc() ;
Couleur CouleurNeutre() ;
#endif