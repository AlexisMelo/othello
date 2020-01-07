#include"../include/Affichage.h"
#include"Position.h"
#include"Plateau.h"
#include"Coup.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
Couleur *plateau;

void testAffichagePlateauAleatoire(){
    plateau = PLATEAU_CreerPlateau();
    Couleur couleur = COULEUR_ObtenirCouleurNoir();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            couleur = COULEUR_ObtenirCouleurOpposee(couleur);
            Coup coup = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i), COLONNE_ObtenirColonneDepuisInt(j)), couleur);
            PLATEAU_JouerCoup(plateau, coup);
            AFFICHAGE_AfficherPlateau(plateau);
        }
    }
}

void testAffichagePlateauVide(){
    plateau = PLATEAU_CreerPlateau();
    Couleur couleur = COULEUR_ObtenirCouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i), COLONNE_ObtenirColonneDepuisInt(j)), couleur);
            PLATEAU_JouerCoup(plateau, coup);
        }
    }
    AFFICHAGE_AfficherPlateau(plateau);
}

int main(){
    testAffichagePlateauAleatoire();
    testAffichagePlateauVide();
}