#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testCalculerPoint.h"
#include "../include/Couleur.h"

int init_suite_success(void){ 
    return 0; 
}

int clean_suite_success(void){ 
    return 0; 
}

void TestCalculerPoint(void){
    void * plateauDeJeu = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);


    coup = creerCoup(creerPosition(1,2), BLANC);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(1,3), BLANC);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(1,4), NEUTRE);
    jouerCoup(plateauDeJeu, coup);



    coup = creerCoup(creerPosition(2,2), NOIR);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(2,3), NEUTRE);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(2,4), BLANC);
    jouerCoup(plateauDeJeu, coup);



    coup = creerCoup(creerPosition(3,2), BLANC);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(3,3), NOIR);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(3,4), NOIR);
    jouerCoup(plateauDeJeu, coup);


    coup = creerCoup(creerPosition(1,2), NOIR);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(1,3), BLANC);
    jouerCoup(plateauDeJeu, coup);
    coup = creerCoup(creerPosition(1,4), NEUTRE);
    jouerCoup(plateauDeJeu, coup);


    CU_ASSERT(CalculerPoint(plateauDeJeu, NOIR) == 4);
    CU_ASSERT(CalculerPoint(plateauDeJeu, BLANC) == 5);
}
