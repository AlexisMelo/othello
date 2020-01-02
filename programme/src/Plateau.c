#include "../include/Couleur.h"
#include "../include/Position.h"
#include "../include/Coup.h"
#include "../include/Colonne.h"
#include "../include/Ligne.h"
#include "../include/Plateau.h"
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>


Couleur * CreerPlateau() {
    return(Couleur*)malloc(TAILLE*TAILLE*sizeof(Couleur*));
}
        

Couleur * PoserPion(Couleur * plateau, Coup coup) {
    Position positionDuCoup = ObtenirPosition(coup);
    int ligneDuCoup = ObtenirNumeroLigne(ObtenirLigne(positionDuCoup));
    int colonneDuCoup = ObtenirNumeroColonne(ObtenirColonne(positionDuCoup));
    Couleur coul = ObtenirCouleur(coup);
    //printf("%d  %d\n", ligneDuCoup, colonneDuCoup);
    plateau[(ligneDuCoup-1)*TAILLE + (colonneDuCoup-1)] = coul;
    return plateau;
    }


Couleur ObtenirCouleurDepuisPlateau(Couleur * plateau, Position position) {
    int ligneDeLaPosition = ObtenirNumeroColonne(ObtenirLigne(position));
    int colonneDeLaPosition = ObtenirNumeroColonne(ObtenirColonne(position));
    return plateau[(ligneDeLaPosition-1)*TAILLE + (colonneDeLaPosition-1)];//plateau[colonneDeLaPosition][ligneDeLaPosition];
}  


bool EstPositionVide(Couleur * plateau, Position position) {
    Couleur couleurDeLaCase = ObtenirCouleurDepuisPlateau(plateau, position);
    return couleurDeLaCase.nom == Vide;
}



int ObtenirTaille(Couleur * plateau) {
    return TAILLE;
}