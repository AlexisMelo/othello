#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include "testPlateau.h"
#include "../include/Couleur.h"
void TestPlateau(){
    void * plateau = creerPlateau();
    Couleur couleur = CouleurNoir();
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(ligne + i - 1,colonne + j - 1), couleur);
            jouerCoup(plateau, coup);
            Couleur res = obtenirCouleurDepuisPlateau(plateau, creerPosition(ligne + i - 1,colonne + j - 1));
            CU_ASSERT(estEgalCouleur(res, couleur));
        }
    }
}
