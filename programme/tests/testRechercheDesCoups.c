#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    Couleur * plateau = PLATEAU_CreerPlateau();
    Couleur NOIR = COULEUR_ObtenirCouleurNoir();
    Couleur BLANC = COULEUR_ObtenirCouleurBlanc();
    Coups lesCoups = COUPS_CreerCoups();
    Coups lesCoupsTrouves = COUPS_CreerCoups();

    /* Initialisation du plateau */
    //InitPlateau(plateau);
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
    printf("bug that");
    //test de COUPS_ObtenirCoup et AjouterCoup qui ont l'air toutes les deux fausses
    CU_ASSERT(COUP_SontEgauxCoups(coup1, coup2)); //passe// ca coince ici
    //ici la colonne et la ligne sont déjà modifiées / memory loss??

    CU_ASSERT(COUP_SontEgauxCoups(coup1, COUPS_ObtenirCoup(lesCoups2))); //ne passe pas ???

    CU_ASSERT(COUP_SontEgauxCoups(COUPS_ObtenirCoup(lesCoups2), COUPS_ObtenirCoup(lesCoups2)));
    COUPS_AjouterCoup(&lesCoups, COUP_CreerCoup(POSITION_CreerPosition(1,3), NOIR));
    COUPS_AjouterCoup(&lesCoups, COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR));
    CU_ASSERT(COUPS_EstPresent(lesCoups, COUP_CreerCoup(POSITION_CreerPosition(1,3), NOIR)) == true);
    CU_ASSERT(COUPS_EstPresent(lesCoups, COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR)) == true);


    lesCoupsTrouves = RECHERCHECOUP_RechercherTousLesCoups(plateau, NOIR);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(1,3), NOIR)) == true);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR)) == true);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(2,3), NOIR)) == false);
    CU_ASSERT(RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau,COUP_CreerCoup(POSITION_CreerPosition(1,1), NOIR)) == false);
    CU_ASSERT(COUPS_EstPresent(lesCoupsTrouves, COUP_CreerCoup(POSITION_CreerPosition(1,3), NOIR)) == true);
    CU_ASSERT(COUPS_EstPresent(lesCoupsTrouves, COUP_CreerCoup(POSITION_CreerPosition(3,3), NOIR)) == true);
    CU_ASSERT(COUPS_ObtenirNombreDeCoups(lesCoupsTrouves) == 2);

}
