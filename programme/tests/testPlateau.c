#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>
#include"testPlateau.h"


void TestPlateau() {
    Plateau * pPlateau = creerPlateau();
    for (int i = 0; i < TAILLE; i++){
        for (int j = 0; j < TAILLE; j++) {
            Couleur couleur = obtenirCouleuropposee(couleur);
            Coup coup = creerCoup(creerPosition(i, j), couleur);
            jouerCoup(pPlateau, coup);
            Couleur res = obtenirCouleurDepuisPlateau(*pPlateau, creerPosition(creerLigne(i), creerColonne(j)));
            CU_ASSERT(estEgalCouleur(res, couleur));
        }   
    }
}
