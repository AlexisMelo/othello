#include<stdio.h>
#include"Couleur.h"
#include "testCouleur.h"
#include <CUnit/CUnit.h>
#include <string.h>
void testBlanc(){
    Couleur blanc = COULEUR_ObtenirCouleurBlanc();
    Couleur res = COULEUR_ObtenirCouleurOpposee(COULEUR_ObtenirCouleurOpposee(blanc));
    CU_ASSERT(res.nom == blanc.nom);
    CU_ASSERT(res.symbole == blanc.symbole);
    }

void testNoir(){
    Couleur noir = COULEUR_ObtenirCouleurNoir();
    Couleur res = COULEUR_ObtenirCouleurOpposee(COULEUR_ObtenirCouleurOpposee(noir));
    CU_ASSERT(res.nom == noir.nom);
    CU_ASSERT(res.symbole == noir.symbole);
}