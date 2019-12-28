#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    void * plateau = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup unCoup;
    Coups lesCoups = CreerCoups();
    Coups lesCoupsTrouves = CreerCoups();
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);

    unCoup = creerCoup(creerPosition(1,3), NOIR);
    AjouterCoup(&lesCoups, unCoup);

    /* Initialisation du plateau */
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            unCoup = creerCoup(creerPosition(ligne + i - 1,colonne + j - 1), NEUTRE);
            jouerCoup(plateau, unCoup);
        }
    }
    /* Creation d'un plateau de test */
    unCoup = creerCoup(creerPosition(1,1), NOIR);
    jouerCoup(plateau, unCoup);
    unCoup = creerCoup(creerPosition(1,2), BLANC);
    jouerCoup(plateau, unCoup);
    // coup = creerCoup(creerPosition(2,2), BLANC);
    // jouerCoup(plateau, coup);

    /* Tests */
    lesCoupsTrouves = rechercherTousLesCoups(plateau, NOIR);
    CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(1,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(3,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(2,3)) == false);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(1,1)) == false);
    unCoup = creerCoup(creerPosition(1,3), NOIR);
    CU_ASSERT(EstPresent(lesCoupsTrouves, unCoup) == true);

}