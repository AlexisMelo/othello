#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include "testPlateau.h"
#include "../include/Couleur.h"
void TestPlateau()
{
    void * plateau = CreerPlateau();
    Couleur couleur = CouleurNoir();
    Ligne ligne = CreerLigne(1);
    Colonne colonne = CreerColonne(1);
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            couleur = ObtenirCouleuropposee(couleur);
            Coup coup = CreerCoup(CreerPosition(ligne + i - 1,colonne + j - 1), couleur);
            JouerCoup(plateau, coup);
            Couleur res = ObtenirCouleurDepuisPlateau(plateau, CreerPosition(ligne + i - 1,colonne + j - 1));
            CU_ASSERT(EstEgalCouleur(res, couleur));
        }
    }
}
