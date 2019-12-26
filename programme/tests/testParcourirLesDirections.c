#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirLesDirections.h"

void testParcourirLesDirections() {
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
            coup = creerCoup(creerPosition(ligne + i - 1,colonne + j - 1), NEUTRE);
            jouerCoup(plateau, coup);
        }
    }
    /* Creation d'un plateau de test pour la direction 'D' */
    /* Ligne n° 2 */
    coup = creerCoup(creerPosition(2,3), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(2,4), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(2,5), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(2,6), BLANC);
    jouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = creerCoup(creerPosition(3,3), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(3,4), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(3,5), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(3,5), BLANC);
    jouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = creerCoup(creerPosition(4,3), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,4), NEUTRE);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,5), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(4,6), NEUTRE);
    jouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = creerCoup(creerPosition(5,2), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,3), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,4), BLANC);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,5), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(5,6), BLANC);
    jouerCoup(plateau, coup);

    /* Ligne n° 6 */
    coup = creerCoup(creerPosition(6,5), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(6,6), NOIR);
    jouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(parcourirLesDirections(plateau, creerPosition(4,4), NOIR) == false);
    CU_ASSERT(parcourirLesDirections(plateau, creerPosition(4,6), NOIR) == true);
}