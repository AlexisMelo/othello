#include"Colonne.h"
#include <CUnit/CUnit.h>
#include "testColonne.h"
#include<stdio.h>


void TestColonne(){
    for (int i = 1; i<=TAILLE; i++) {
        CU_ASSERT(COLONNE_ObtenirNumeroColonne(COLONNE_ObtenirColonneDepuisInt(i)) == i);
    }
}
