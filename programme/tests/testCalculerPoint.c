#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testCalculerPoint.h"
#include "Couleur.h"

/* int init_suite_success(vCreerPositionoid){
    return 0;
}

int clean_suite_success(void){
    return 0;
} */

void TestCalculerPoint(void){
    Couleur * plateauDeJeu = PLATEAU_CreerPlateau();
    Couleur NOIR = COULEUR_ObtenirCouleurNoir();
    Couleur BLANC = COULEUR_ObtenirCouleurBlanc();
    Couleur NEUTRE = COULEUR_ObtenirCouleurNeutre();
    Coup coup;
    Ligne ligne = LIGNE_ObtenirLigneDepuisInt(1);
    Colonne colonne = COLONNE_ObtenirColonneDepuisInt(1);

for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = COUP_CreerCoup(POSITION_CreerPosition(ligne + i - 1,colonne + j - 1), NEUTRE);
            PoserPion(plateauDeJeu, coup);
        }
    }


    coup = COUP_CreerCoup(POSITION_CreerPosition(1,2), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,3), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,4), NEUTRE);
    PoserPion(plateauDeJeu, coup);



    coup = COUP_CreerCoup(POSITION_CreerPosition(2,2), NOIR);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,3), NEUTRE);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,4), BLANC);
    PoserPion(plateauDeJeu, coup);



    coup = COUP_CreerCoup(POSITION_CreerPosition(3,2), BLANC);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR);
    PoserPion(plateauDeJeu, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,4), NOIR);
    PoserPion(plateauDeJeu, coup);




    CU_ASSERT(PLATEAU_CalculerPoints(plateauDeJeu, NOIR) == 3);
    CU_ASSERT(PLATEAU_CalculerPoints(plateauDeJeu, BLANC) == 4);
}
