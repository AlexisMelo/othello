#include<stdio.h>
#include"../include/Couleur.h"
#include "testCouleur.h"
#include <CUnit/CUnit.h>
#include <string.h>
void testBlanc(){
    Couleur blanc = CouleurBlanc();
    Couleur res = obtenirCouleuropposee(obtenirCouleuropposee(blanc));
    CU_ASSERT(res.nom == blanc.nom);
    CU_ASSERT(strcmp(res.hexa, blanc.hexa) == 0);
    CU_ASSERT(res.symbole == blanc.symbole);
    }

void testNoir(){
    Couleur noir = CouleurNoir();
    Couleur res = obtenirCouleuropposee(obtenirCouleuropposee(noir));
    CU_ASSERT(res.nom == noir.nom);
    CU_ASSERT(strcmp(res.hexa, noir.hexa) == 0);
    CU_ASSERT(res.symbole == noir.symbole);
}