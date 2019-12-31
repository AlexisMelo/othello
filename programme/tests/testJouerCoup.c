#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testJouerCoup.h"
#include "../include/Couleur.h"
/* int init_suite_success(void) { 
    return 0; 
}

int clean_suite_success(void) { 
    return 0; 
} */

void TestJouerCoup(){
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
            JouerCoup(plateauDeJeu, coup);
        }
    }
    coup = CreerCoup(CreerPosition(1,2), NOIR);
    JouerCoup(plateauDeJeu, coup);
    Couleur resultatAttendu = NOIR;
    Couleur resultatObtenu = CouleurNeutre();
    resultatObtenu = ObtenirCouleurDepuisPlateau(plateauDeJeu, CreerPosition(1,2));
    CU_ASSERT(EstEgalCouleur(resultatAttendu, resultatObtenu))
}