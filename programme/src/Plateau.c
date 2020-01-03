#include "../include/Couleur.h"
#include "../include/Position.h"
#include "../include/Coup.h"
#include "../include/Colonne.h"
#include "../include/Ligne.h"
#include "../include/Plateau.h"
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>


Couleur ** CreerPlateau() {
    Couleur (*plateau)[TAILLE*TAILLE]= (Couleur **)malloc(TAILLE*TAILLE*sizeof(Couleur));
    return plateau;
    //return(Couleur(*)[64])malloc(TAILLE*TAILLE*sizeof(Couleur));
}


void InitPlateau(Couleur (*pPlateau)[64]){
    Couleur Plateau[64] = {{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},{0,'.'},};
    memcpy(pPlateau, &Plateau,TAILLE*TAILLE*sizeof(Couleur));
}
        

void PoserPion(Couleur (*pPlateau)[64], Coup coup) {
    Position positionDuCoup = ObtenirPosition(coup);
    Couleur * ptr;
    int ligneDuCoup = ObtenirNumeroLigne(ObtenirLigne(positionDuCoup));
    int colonneDuCoup = ObtenirNumeroColonne(ObtenirColonne(positionDuCoup));
    Couleur coul = ObtenirCouleur(coup);
//    (*pPlateau)[(ligneDuCoup-1)*TAILLE + (colonneDuCoup-1)] = coul;
    (*pPlateau)[((ligneDuCoup-1)*TAILLE + colonneDuCoup-1)] = coul;//*sizeof(Couleur);
    printf("hi");
    }


Couleur ObtenirCouleurDepuisPlateau(Couleur (*plateau)[64], Position position) {
    int ligneDeLaPosition = ObtenirNumeroColonne(ObtenirLigne(position));
    int colonneDeLaPosition = ObtenirNumeroColonne(ObtenirColonne(position));
    return *plateau[(ligneDeLaPosition-1)*TAILLE + (colonneDeLaPosition-1)];//plateau[colonneDeLaPosition][ligneDeLaPosition];
}  


bool EstPositionVide(Couleur (*pPlateau)[64], Position position) {
    Couleur couleurDeLaCase = ObtenirCouleurDepuisPlateau(pPlateau, position);
    return couleurDeLaCase.nom == Vide;
}



int ObtenirTaille(Couleur (*plateau)[64]) {
    return TAILLE;
}