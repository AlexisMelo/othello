#include "../include/Couleur.h"
#include "../include/Position.h"
#include "../include/Coup.h"
#include "../include/Colonne.h"
#include "../include/Ligne.h"
#include "../include/Plateau.h"
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>


Couleur * creerPlateau() {
    return(Couleur*)malloc(TAILLE*TAILLE*sizeof(Couleur*));
}
        

Couleur * jouerCoup(Couleur * plateau, Coup coup) {
    Position positionDuCoup = obtenirPosition(coup);
    int ligneDuCoup = obtenirNumeroLigne(obtenirLigne(positionDuCoup));
    int colonneDuCoup = ObtenirNumeroColonne(obtenirColonne(positionDuCoup));
    Couleur coul = obtenirCouleur(coup);
    plateau[(ligneDuCoup-1)*TAILLE + (colonneDuCoup-1)] = coul;
    return plateau;
    }


Couleur obtenirCouleurDepuisPlateau(Couleur * plateau, Position position) {
    int ligneDeLaPosition = ObtenirNumeroColonne(obtenirLigne(position));
    int colonneDeLaPosition = ObtenirNumeroColonne(obtenirColonne(position));
    return plateau[(ligneDeLaPosition-1)*TAILLE + (colonneDeLaPosition-1)];//plateau[colonneDeLaPosition][ligneDeLaPosition];
}  


bool estPositionVide(Couleur * plateau, Position position) {
    Couleur couleurDeLaCase = obtenirCouleurDepuisPlateau(plateau, position);
    return couleurDeLaCase.nom == Vide;
}



int obtenirTaille(Couleur * plateau) {
    return TAILLE;
}