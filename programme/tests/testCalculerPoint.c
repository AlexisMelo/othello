#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testCalculerPoint.h"
#include "../include/Couleur.h"

/* int init_suite_success(void){ 
    return 0; 
}

int clean_suite_success(void){ 
    return 0; 
} */

void TestCalculerPoint(void){
    void * plateauDeJeu = CreerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Ligne ligne = CreerLigne(1);
    Colonne colonne = CreerColonne(1);

for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = CreerCoup(CreerPosition(ligne + i - 1,colonne + j - 1), NEUTRE);
            PoserPion(plateauDeJeu, coup);
        }
    }


    coup = CreerCoup(CreerPosition(1,2), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(1,3), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(1,4), NEUTRE);
    PoserPion(plateauDeJeu, coup);



    coup = CreerCoup(CreerPosition(2,2), NOIR);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(2,3), NEUTRE);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(2,4), BLANC);
    PoserPion(plateauDeJeu, coup);



    coup = CreerCoup(CreerPosition(3,2), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(3,3), NOIR);
    PoserPion(plateauDeJeu, coup);
    coup = CreerCoup(CreerPosition(3,4), NOIR);
    PoserPion(plateauDeJeu, coup);


    

    CU_ASSERT(CalculerPoint(plateauDeJeu, NOIR) == 3);
    CU_ASSERT(CalculerPoint(plateauDeJeu, BLANC) == 4);
}
