#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testParcourirLesDirections.h"

void testParcourirLesDirections() {
    void * plateau = PLATEAU_CreerPlateau();
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
    /* Creation d'un plateau de test des Directions */
    /* Ligne n° 2 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,3), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,4), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,5), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(2,6), BLANC);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 3 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,4), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,5), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(3,5), BLANC);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 4 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,3), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,4), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,5), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(4,6), NEUTRE);
    PLATEAU_JouerCoup(plateau, coup);
   
    /* Ligne n° 5 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,2), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,3), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,4), BLANC);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,5), NOIR);
    PLATEAU_JouerCoup(plateau, coup);   
    coup = COUP_CreerCoup(POSITION_CreerPosition(5,6), BLANC);
    PLATEAU_JouerCoup(plateau, coup);

    /* Ligne n° 6 */
    coup = COUP_CreerCoup(POSITION_CreerPosition(6,5), NOIR);
    PLATEAU_JouerCoup(plateau, coup);
    coup = COUP_CreerCoup(POSITION_CreerPosition(6,6), NOIR);
    PLATEAU_JouerCoup(plateau, coup);

    /* Tests */
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau, COUP_CreerCoup(POSITION_CreerPosition(4,4), NOIR)) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau, COUP_CreerCoup(POSITION_CreerPosition(4,6), NOIR)) == true);
}