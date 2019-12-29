#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    void * plateau = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coups lesCoups = *CreerCoups();
    Coups lesCoupsTrouves = *CreerCoups();
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);
    Coup unCoup = creerCoup(creerPosition(ligne, colonne),NEUTRE);

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
    Coup coup1 = creerCoup(creerPosition(creerLigne(1),creerColonne(3)), NOIR);
    Coup coup2 = creerCoup(creerPosition(creerLigne(1),creerColonne(3)), NOIR);
    Coups * plesCoups2 = CreerCoups();
    Coups * plesCoups3 = CreerCoups();
    AjouterCoup(plesCoups2, coup2);
    AjouterCoup(plesCoups3, coup2);
    printf("bug that");
    /*printf("\n");
    printf("%d|avant:nom|", (plesCoups2->coups->element->couleur.nom));
    printf("%s|avant:hexa|", (plesCoups2->coups->element->couleur.hexa));
    printf("%c|avant:symb|", (plesCoups2->coups->element->couleur.symbole));
    printf("%d|avant:colonne|", ObtenirNumeroColonne(plesCoups2->coups->element->position.colonne));
    printf("%d|avant:ligne |", obtenirNumeroLigne(plesCoups2->coups->element->position.ligne)); */
    //test de COUPS_ObtenirCoup et AjouterCoup qui ont l'air toutes les deux fausses
    CU_ASSERT(estEgalCoup(coup1, coup2)); //passe// ca coince ici
    printf("bug that2");
    //ici la colonne et la ligne sont déjà modifiées / memory loss??
    /* printf("%d|milieu:nom|", (plesCoups2->coups->element->couleur.nom));
    printf("%s|milieu:hexa|", (plesCoups2->coups->element->couleur.hexa));
    printf("%c|milieu:symb|", (plesCoups2->coups->element->couleur.symbole));
    printf("%d|milieu:colonne|", ObtenirNumeroColonne(plesCoups2->coups->element->position.colonne));
    printf("%d|milieu:ligne |", obtenirNumeroLigne(plesCoups2->coups->element->position.ligne)); */
    CU_ASSERT(estEgalCoup(coup1, COUPS_ObtenirCoup(*plesCoups2))); //ne passe pas ???
    printf("bug that3");
    //CU_ASSERT(&lesCoups2 == &lesCoups3);  //ne passe pas ???
/*     printf("\n");
    printf("%d|fin:nom|", (plesCoups2->coups->element->couleur.nom));
    printf("%s|fin:hexa|", (plesCoups2->coups->element->couleur.hexa));
    printf("%c|fin:symb|", (plesCoups2->coups->element->couleur.symbole));
    printf("%d|fin:colonne|", ObtenirNumeroColonne(plesCoups2->coups->element->position.colonne));
    printf("%d|fin:ligne|", obtenirNumeroLigne(plesCoups2->coups->element->position.ligne)); */
    CU_ASSERT(estEgalCoup(COUPS_ObtenirCoup(*plesCoups2), COUPS_ObtenirCoup(*plesCoups2))); //passe ???


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