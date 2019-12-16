#include "../include/Couleur.h"
#include "../include/Position.h"
#include "../include/Coup.h"
#include "../include/Colonne.h"
#include "../include/Ligne.h"
#include "../include/Plateau.h"
#include<stdbool.h>
#include<stdlib.h>


Plateau * creerPlateau() {
    Plateau * resultat = (Plateau*)malloc(TAILLE*TAILLE*sizeof(Couleur));
    memset(resultat, 0, sizeof(*resultat)*8);
    return resultat;
}
        

void jouerCoup(Plateau * plateau, Coup coup) {
    Position positionDuCoup;
    int ligneDuCoup = obtenirNumeroLigne(obtenirLigne(positionDuCoup));
    int colonneDuCoup = ObtenirNumeroColonne(obtenirColonne(positionDuCoup));
    *(*(*(plateau) + ligneDuCoup*sizeof(Couleur)) + colonneDuCoup*sizeof(Couleur)) = obtenirCouleur(coup);
    //*plateau[ligneDuCoup][colonneDuCoup] = obtenirCouleur(coup); // Seg Fault here
    }


Couleur obtenirCouleurDepuisPlateau(Plateau plateau, Position position) {
    Ligne ligneDeLaPosition = ObtenirNumeroColonne(obtenirLigne(position));
    Colonne colonneDeLaPosition = ObtenirNumeroColonne(obtenirColonne(position));
    return plateau[colonneDeLaPosition][ligneDeLaPosition];
}  


bool estPositionVide(Plateau plateau, Position position) {
    Couleur couleurDeLaCase = obtenirCouleurDepuisPlateau(plateau, position);
    return couleurDeLaCase.nom == Vide;
}



int obtenirTaille(Plateau plateau) {
    return TAILLE;
}