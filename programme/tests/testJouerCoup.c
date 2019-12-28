#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testJouerCoup.h"
#include "../include/Couleur.h"
int init_suite_success(void) { 
    return 0; 
}

int clean_suite_success(void) { 
    return 0; 
}

void TestJouerCoup(void){
    void * plateauDeJeu = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);

   for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = creerCoup(creerPosition(ligne + i - 1,colonne + j - 1), NEUTRE);
            jouerCoup(plateauDeJeu, coup);
        }
    }


    coup = creerCoup(creerPosition(1,2), NOIR);
    jouerCoup(plateauDeJeu, coup);
    


    Couleur resultatAttendu = NOIR;
    Couleur resultatObtenu = obtenirCouleurDepuisPlateau(plateauDeJeu, creerPosition(1,2));
    CU_ASSERT_EQUAL(resultatAttendu, resultatObtenu);


}
    

