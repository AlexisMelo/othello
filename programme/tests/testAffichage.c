#include"../include/AfficherPlateau.h"
#include"../include/Position.h"
#include"../include/Plateau.h"
#include"../include/Coup.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
Couleur *plateau;

void testAffichagePlateauAleatoire(){
    plateau = *CreerPlateau();
    Couleur couleur = CouleurNoir();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            couleur = ObtenirCouleuropposee(couleur);
            Coup coup = CreerCoup(CreerPosition(i, j), couleur);
            JouerCoup(plateau, coup);
            AfficherPlateau(plateau);
        }
    }
    //afficherPlateau(plateau);
}

void testAffichagePlateauVide(){
    plateau = CreerPlateau();
    Couleur couleur = CouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = CreerCoup(CreerPosition(i, j), couleur);
            JouerCoup(plateau, coup);
        }
    }
    AfficherPlateau(plateau);
}

int main(){
    testAffichagePlateauAleatoire();
    testAffichagePlateauVide();
    InitialiserAffichagePlateau();
}