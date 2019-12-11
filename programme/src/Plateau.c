#include "Couleur.h"
#include "Position.h"
#include "Coup.h"
#include "Colonne.h"
#include "Ligne.h"
#include "Plateau.h"
#include<stdbool.h>


Plateau * creerPlateau() {
    Plateau * resultat = (Plateau*)malloc(sizeof(Plateau));
    return resultat;
};
        

void jouerCoup(Plateau * plateau, Coup coup) {
    Position positionDuCoup;
    Ligne ligneDuCoup = ObtenirNumeroColonne(obtenirLigne(positionDuCoup));
    Colonne colonneDuCoup = ObtenirNumeroColonne(obtenirColonne(positionDuCoup));
    *plateau[ligneDuCoup][colonneDuCoup] = obtenirCouleur(coup);
};


Couleur obtenirCouleurDepuisPlateau(Plateau plateau, Position position) {
    Ligne ligneDeLaPosition = ObtenirNumeroColonne(obtenirLigne(position));
    Colonne colonneDeLaPosition = ObtenirNumeroColonne(obtenirColonne(position));
    return plateau[colonneDeLaPosition][ligneDeLaPosition];
;}  


bool estPositionVide(Plateau plateau, Position position) {
    Couleur couleurDeLaCase = obtenirCouleurDepuisPlateau(plateau, position);
    return couleurDeLaCase.nom == Vide;
};