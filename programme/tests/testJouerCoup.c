#include<stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include "testJouerCoup.h"
#include "Couleur.h"
/* int init_suite_success(void) { 
    return 0; 
}

int clean_suite_success(void) { 
    return 0; 
} */

void TestJouerCoup(){
    void * plateauDeJeu = CreerPlateau();
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
            PLATEAU_JouerCoup(plateauDeJeu, coup);
        }
    }
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,2), NOIR);
    PLATEAU_JouerCoup(plateauDeJeu, coup);
    Couleur resultatAttendu = NOIR;
    Couleur resultatObtenu = COULEUR_ObtenirCouleurNeutre();
    resultatObtenu = PLATEAU_ObtenirCouleurAvecPosition(plateauDeJeu, POSITION_CreerPosition(1,2));
    CU_ASSERT(EstEgalCouleur(resultatAttendu, resultatObtenu))
}