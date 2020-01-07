#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    Couleur (*pPlateau)[64] = CreerPlateau();
    InitPlateau(pPlateau);
    Couleur Noir = CouleurNoir();
    Couleur Blanc = CouleurBlanc();
    Coups lesCoups = *CreerCoups();
    Coups lesCoupsTrouves = *CreerCoups();

    /* Initialisation du plateau */
    //InitPlateau(plateau);
    /* Creation d'un plateau de test */
    Coup unCoup = CreerCoup(CreerPosition(1,1), Noir);
    JouerCoup(pPlateau, unCoup);
    unCoup = CreerCoup(CreerPosition(1,2), Blanc);
    JouerCoup(pPlateau, unCoup);
    unCoup = CreerCoup(CreerPosition(2,2), Blanc);
    JouerCoup(pPlateau, unCoup);

    /* Tests */
    Coup coup1 = CreerCoup(CreerPosition(CreerLigne(1),CreerColonne(3)), Noir);
    Coup coup2 = CreerCoup(CreerPosition(CreerLigne(1),CreerColonne(3)), Noir);
    Coups lesCoups2 = *CreerCoups();
    Coups lesCoups3 = *CreerCoups();
    AjouterCoup(&lesCoups2, coup2);
    AjouterCoup(&lesCoups3, coup2);
    printf("bug that");
    //test de COUPS_ObtenirCoup et AjouterCoup qui ont l'air toutes les deux fausses
    CU_ASSERT(EstEgalCoup(coup1, coup2)); //passe// ca coince ici
    //ici la colonne et la ligne sont déjà modifiées / memory loss??

    CU_ASSERT(EstEgalCoup(coup1, COUPS_ObtenirCoup(lesCoups2))); //ne passe pas ???
    printf("bug that3");
    //CU_ASSERT(&lesCoups2 == &lesCoups3);  //ne passe pas ???

    CU_ASSERT(EstEgalCoup(COUPS_ObtenirCoup(lesCoups2), COUPS_ObtenirCoup(lesCoups2))); //passe ???
    printf("bug that4");

    // la suite des tests devrait etre resolu en resolvant le pb au dessus

    // AjouterCoup(&lesCoups, CreerCoup(CreerPosition(1,3), NOIR));
    // AjouterCoup(&lesCoups, CreerCoup(CreerPosition(3,3), NOIR));
    // CU_ASSERT(EstPresent(lesCoups, CreerCoup(CreerPosition(1,3), NOIR)) == true); //ne passe pas
    // CU_ASSERT(EstPresent(lesCoups, CreerCoup(CreerPosition(3,3), NOIR)) == true); //ne passe pas


    // lesCoupsTrouves = rechercherTousLesCoups(plateau, NOIR);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, CreerPosition(1,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, CreerPosition(3,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, CreerPosition(2,3)) == false);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, CreerPosition(1,1)) == false);
    // CU_ASSERT(EstPresent(lesCoupsTrouves, CreerCoup(CreerPosition(1,3), NOIR)) == true); //ne passe pas
    // CU_ASSERT(EstPresent(lesCoupsTrouves, CreerCoup(CreerPosition(3,3), NOIR)) == true); //ne passe pas
    // CU_ASSERT(ObtenirnombreDeCoups(lesCoupsTrouves) == 2);

}
