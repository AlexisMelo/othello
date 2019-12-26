#include <CUnit/CUnit.h>
#include <stdio.h>
#include "testRechercheDesCoups.h"

void testRechercheDesCoups() {
    void * plateau = creerPlateau();
    Couleur NOIR = CouleurNoir();
    Couleur BLANC = CouleurBlanc();
    Couleur NEUTRE = CouleurNeutre();
    Coup coup;
    Coups lesCoups = CreerCoups();
    Coups lesCoupsTrouves = CreerCoups();
    Ligne ligne = creerLigne(1);
    Colonne colonne = creerColonne(1);

    coup = creerCoup(creerPosition(1,3), NOIR);
    AjouterCoup(&lesCoups, coup);

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
    coup = creerCoup(creerPosition(1,1), NOIR);
    jouerCoup(plateau, coup);
    coup = creerCoup(creerPosition(1,2), BLANC);
    jouerCoup(plateau, coup);

    /* Tests */
    lesCoupsTrouves = rechercherTousLesCoups(plateau, NOIR);
    CU_ASSERT(&lesCoupsTrouves == &lesCoups);
}