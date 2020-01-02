#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include "testPlateau.h"
#include "../include/Couleur.h"
void TestPlateau()
{
<<<<<<< HEAD
    Couleur * plateau = creerPlateau();
=======
    void * plateau = CreerPlateau();
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
    Couleur couleur = CouleurNoir();
    Ligne ligne = CreerLigne(1);
    Colonne colonne = CreerColonne(1);
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
<<<<<<< HEAD
            couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(ligne + i - 1,colonne + j - 1), couleur);
            jouerCoup(plateau, coup);
            Couleur res = obtenirCouleurDepuisPlateau(plateau, creerPosition(ligne + i - 1,colonne + j - 1));
            CU_ASSERT(estEgalCouleur(res, couleur));
            /* printf("%d        %d      ", res.nom, couleur.nom);
            printf("%s        %s      ", res.hexa, couleur.hexa);
            printf("%c        %c      ", res.symbole, couleur.symbole); 
            printf("\n"); */
        }
=======
            couleur = ObtenirCouleuropposee(couleur);
            Coup coup = CreerCoup(CreerPosition(ligne + i - 1,colonne + j - 1), couleur);
            JouerCoup(plateau, coup);
            Couleur res = ObtenirCouleurDepuisPlateau(plateau, CreerPosition(ligne + i - 1,colonne + j - 1));
            CU_ASSERT(EstEgalCouleur(res, couleur));
            }
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
    }
    printf("%s",plateau[7*TAILLE + 2].hexa);
}
