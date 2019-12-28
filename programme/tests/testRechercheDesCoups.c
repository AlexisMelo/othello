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
    unCoup = creerCoup(creerPosition(2,2), BLANC);
    jouerCoup(plateau, unCoup);

    /* Tests */
    Coup coup1 = creerCoup(creerPosition(1,3), NOIR);
    Coup coup2 = creerCoup(creerPosition(1,3), NOIR);
    Coups lesCoups2 = CreerCoups();
    Coups lesCoups3 = CreerCoups();
    AjouterCoup(&lesCoups2, coup2);
    AjouterCoup(&lesCoups3, coup2);
    
    //test de COUPS_ObtenirCoup et AjouterCoup qui ont l'air toutes les deux fausses
    CU_ASSERT(estEgalCoup(coup1, coup2)); //passe
    CU_ASSERT(estEgalCoup(coup1, COUPS_ObtenirCoup(lesCoups2))); //ne passe pas ???
    CU_ASSERT(&lesCoups2 == &lesCoups3);  //ne passe pas ???
    CU_ASSERT(estEgalCoup(COUPS_ObtenirCoup(lesCoups2), COUPS_ObtenirCoup(lesCoups2))); //ne passe pas ???




    // la suite des tests devrait etre resolu en resolvant le pb au dessus

    // AjouterCoup(&lesCoups, creerCoup(creerPosition(1,3), NOIR));
    // AjouterCoup(&lesCoups, creerCoup(creerPosition(3,3), NOIR));
    // CU_ASSERT(EstPresent(lesCoups, creerCoup(creerPosition(1,3), NOIR)) == true); //ne passe pas 
    // CU_ASSERT(EstPresent(lesCoups, creerCoup(creerPosition(3,3), NOIR)) == true); //ne passe pas 


    // lesCoupsTrouves = rechercherTousLesCoups(plateau, NOIR);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(1,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(3,3)) == true);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(2,3)) == false);
    // CU_ASSERT(rechercherUnCoup (plateau,NOIR, creerPosition(1,1)) == false);
    // CU_ASSERT(EstPresent(lesCoupsTrouves, creerCoup(creerPosition(1,3), NOIR)) == true); //ne passe pas 
    // CU_ASSERT(EstPresent(lesCoupsTrouves, creerCoup(creerPosition(3,3), NOIR)) == true); //ne passe pas 
    // CU_ASSERT(ObtenirnombreDeCoups(lesCoupsTrouves) == 2);

}