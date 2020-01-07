#include<stdio.h>
#include"Couleur.h"
#include "testCouleur.h"
#include <CUnit/CUnit.h>
#include <string.h>
void testBlanc(){
    Couleur blanc = CouleurBlanc();
    Couleur res = ObtenirCouleuropposee(ObtenirCouleuropposee(blanc));
    CU_ASSERT(res.nom == blanc.nom);
    CU_ASSERT(res.symbole == blanc.symbole);
    }

void testNoir(){
    Couleur noir = CouleurNoir();
    Couleur res = ObtenirCouleuropposee(ObtenirCouleuropposee(noir));
    CU_ASSERT(res.nom == noir.nom);
    CU_ASSERT(res.symbole == noir.symbole);
}