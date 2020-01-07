#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirLesDirections.h"

void testParcourirLesDirections() {
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
    /* Creation d'un plateau de test des Directions */
    /* Ligne n° 2 */
    coup = CreerCoup(CreerPosition(2,3), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(2,4), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(2,5), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(2,6), BLANC);
    JouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = CreerCoup(CreerPosition(3,3), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(3,4), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(3,5), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(3,5), BLANC);
    JouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = CreerCoup(CreerPosition(4,3), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(4,4), NEUTRE);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(4,5), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(4,6), NEUTRE);
    JouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = CreerCoup(CreerPosition(5,2), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(5,3), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(5,4), BLANC);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(5,5), NOIR);
    JouerCoup(plateau, coup);   
    coup = CreerCoup(CreerPosition(5,6), BLANC);
    JouerCoup(plateau, coup);

    /* Ligne n° 6 */
    coup = CreerCoup(CreerPosition(6,5), NOIR);
    JouerCoup(plateau, coup);
    coup = CreerCoup(CreerPosition(6,6), NOIR);
    JouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(ParcourirLesDirections(plateau, CreerPosition(4,4), NOIR) == false);
    CU_ASSERT(ParcourirLesDirections(plateau, CreerPosition(4,6), NOIR) == true);
}