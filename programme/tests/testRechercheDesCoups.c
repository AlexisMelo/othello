#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    Couleur * plateau = PLATEAU_CreerPlateau();
    Couleur NOIR = COULEUR_ObtenirCouleurNoir();
    Couleur BLANC = COULEUR_ObtenirCouleurBlanc();

    /* Initialisation du plateau */
    /* Creation d'un plateau de test */
    Coup unCoup = COUP_CreerCoup(POSITION_CreerPosition(1,1), NOIR);
    PLATEAU_JouerCoup(plateau, unCoup);
    unCoup = COUP_CreerCoup(POSITION_CreerPosition(1,2), BLANC);
    PLATEAU_JouerCoup(plateau, unCoup);
    unCoup = COUP_CreerCoup(POSITION_CreerPosition(2,2), BLANC);
    PLATEAU_JouerCoup(plateau, unCoup);

    /* Tests */
    Coup coup1 = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(1),COLONNE_ObtenirColonneDepuisInt(3)), NOIR);
    Coup coup2 = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(1),COLONNE_ObtenirColonneDepuisInt(3)), NOIR);
    Coups lesCoups2 = COUPS_CreerCoups();
    Coups lesCoups3 = COUPS_CreerCoups();
    COUPS_AjouterCoup(&lesCoups2, coup2);
    COUPS_AjouterCoup(&lesCoups3, coup2);
    CU_ASSERT(COUP_SontEgauxCoups(coup1, coup2));
    CU_ASSERT(COUP_SontEgauxCoups(coup1, COUPS_ObtenirCoup(lesCoups2)));

    CU_ASSERT(COUP_SontEgauxCoups(COUPS_ObtenirCoup(lesCoups2), COUPS_ObtenirCoup(lesCoups2)));


    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(1,3), NOIR)) == true);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR)) == true);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(2,3), NOIR)) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(1,1), NOIR)) == false);

}
