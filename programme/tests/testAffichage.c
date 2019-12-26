#include"../include/AfficherPlateau.h"
#include"../include/Position.h"
#include"../include/Plateau.h"
#include"../include/Coup.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
Couleur *plateau;

void testAffichagePlateauAleatoire(){
    plateau = creerPlateau();
    Couleur couleur = CouleurNoir();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(plateau, coup);
            afficherPlateau(plateau);
        }
    }
    //afficherPlateau(plateau);
}

void testAffichagePlateauVide(){
    plateau = creerPlateau();
    Couleur couleur = CouleurNeutre();
    for (int i=1; i<= 8; i++){
        for (int j=1; j<= 8; j++){
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(plateau, coup);
        }
    }
    afficherPlateau(plateau);
}

int main(){
    testAffichagePlateauAleatoire();
    testAffichagePlateauVide();
    InitialiserAffichagePlateau();
}