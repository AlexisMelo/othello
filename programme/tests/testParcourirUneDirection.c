#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirUneDirection.h"

void testParcourirUneDirection() {
    void * plateau = CreerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Ligne ligne = CreerLigne(1);
    Colonne colonne = CreerColonne(1);

    /* Initialisation du plateau */
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = CreerCoup(CreerPosition(i - 1,j - 1), NEUTRE);
            JouerCoup(plateau, coup);
        }
    }
    /* Creation d'un plateau de test pour la direction 'D' */
    /* Ligne n° 1 */
    coup = CreerCoup(CreerPosition(1,2), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(1,3), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(1,4), NOIR);
    JouerCoup(plateau, coup);

    /* Ligne n° 2 */
    coup = CreerCoup(CreerPosition(2,2), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(2,3), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(2,4), NOIR);
    JouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = CreerCoup(CreerPosition(3,2), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(3,3), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(3,4), NOIR);
    JouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = CreerCoup(CreerPosition(4,2), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(4,3), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(4,4), NOIR);
    JouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = CreerCoup(CreerPosition(5,2), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(5,3), NOIR);
    JouerCoup(plateau, coup);
   
    /* Ligne n° 6 */
    coup = CreerCoup(CreerPosition(6,2), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(6,3), NOIR);
    JouerCoup(plateau, coup);

    /* Ligne n° 7 */
    coup = CreerCoup(CreerPosition(7,2), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,3), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,4), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,5), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,6), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,7), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(7,8), BLANC);
    JouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(1,1), D, NOIR) == true);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(2,1), D, NOIR) == false);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(3,1), D, NOIR) == false);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(4,1), D, NOIR) == false);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(5,1), D, NOIR) == false);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(6,1), D, NOIR) == false);
    CU_ASSERT(ParcourirUneDirection(plateau, CreerPosition(7,1), D, NOIR) == false);
}