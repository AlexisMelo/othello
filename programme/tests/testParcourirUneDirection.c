#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirUneDirection.h"

void testParcourirUneDirection() {
    Couleur * plateau = PLATEAU_CreerPlateau();
    Couleur NOIR = COULEUR_ObtenirCouleurNoir();
    Couleur BLANC = COULEUR_ObtenirCouleurBlanc();
    Couleur NEUTRE = COULEUR_ObtenirCouleurNeutre();
    Coup coup;

    /* Initialisation du plateau */
    for (int i = 1; i < TAILLE + 1; i++)
    {
        for (int j = 1; j < TAILLE + 1; j++)
        {
            coup = COUP_CreerCoup(POSITION_CreerPosition(i - 1,j - 1), NEUTRE);
            PLATEAU_JouerCoup(plateau, coup);
        }
    }
    /* Creation d'un plateau de test pour la direction 'D' */
    /* Ligne n° 1 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,2), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,3), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(1,4), NOIR);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 2 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,2), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,3), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,4), NOIR);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,2), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,3), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,4), NOIR);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,2), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,3), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,4), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,2), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,3), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
   
    /* Ligne n° 6 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(6,2), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(6,3), NOIR);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 7 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,2), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,3), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,4), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,5), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,6), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,7), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(7,8), BLANC);
    PLATEAU_JouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(1,1),NOIR), D) == true);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(2,1),NOIR), D) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(3,1),NOIR), D) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(4,1),NOIR), D) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(5,1),NOIR), D) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(6,1),NOIR), D) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansDirection(plateau, COUP_CreerCoup(POSITION_CreerPosition(7,1),NOIR), D) == false);
}