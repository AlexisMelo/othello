#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include "testPlateau.h"
#include "../include/Couleur.h"
#include "../include/AfficherPlateau.h"
void TestPlateau()
{
    Couleur (*pPlateau)[64] = CreerPlateau();
    InitPlateau(pPlateau);
    Couleur couleur = CouleurNoir();
    Ligne ligne = CreerLigne(1);
    Colonne colonne = CreerColonne(1);
    AfficherPlateau(*pPlateau);
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            couleur = ObtenirCouleuropposee(couleur);
            Coup coup = CreerCoup(CreerPosition(ligne + i - 1,colonne + j - 1), couleur);
            JouerCoup(*pPlateau, coup);
            Couleur res = ObtenirCouleurDepuisPlateau(*pPlateau, CreerPosition(ligne + i - 1,colonne + j - 1));
            CU_ASSERT(EstEgalCouleur(res, couleur));
            /* printf("%d        %d      ", res.nom, couleur.nom);
            printf("%s        %s      ", res.hexa, couleur.hexa);
            printf("%c        %c      ", res.symbole, couleur.symbole); 
            printf("\n"); */
        }
    }
}
