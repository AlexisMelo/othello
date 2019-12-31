#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirUneDirection.h"

void testParcourirUneDirection() {
    void * plateau = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);

    /* Initialisation du plateau */
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = creerCoup(creerPosition(i - 1,j - 1), NEUTRE);
            jouerCoup(plateau, coup);
        }
    }
    /* Creation d'un plateau de test pour la direction 'D' */
    /* Ligne n° 1 */
    coup = creerCoup(creerPosition(1,2), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(1,3), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(1,4), NOIR);
    jouerCoup(plateau, coup);

    /* Ligne n° 2 */
    coup = creerCoup(creerPosition(2,2), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(2,3), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(2,4), NOIR);
    jouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = creerCoup(creerPosition(3,2), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(3,3), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(3,4), NOIR);
    jouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = creerCoup(creerPosition(4,2), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,3), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,4), NOIR);
    jouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = creerCoup(creerPosition(5,2), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,3), NOIR);
    jouerCoup(plateau, coup);
   
    /* Ligne n° 6 */
    coup = creerCoup(creerPosition(6,2), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(6,3), NOIR);
    jouerCoup(plateau, coup);

    /* Ligne n° 7 */
    coup = creerCoup(creerPosition(7,2), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,3), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,4), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,5), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,6), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,7), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(7,8), BLANC);
    jouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(1,1), D, NOIR) == true);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(2,1), D, NOIR) == false);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(3,1), D, NOIR) == false);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(4,1), D, NOIR) == false);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(5,1), D, NOIR) == false);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(6,1), D, NOIR) == false);
    CU_ASSERT(parcourirUneDirection(plateau, creerPosition(7,1), D, NOIR) == false);
}