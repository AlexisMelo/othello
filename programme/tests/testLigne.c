#include"Ligne.h"
#include<CUnit/CUnit.h>
#include"testLigne.h"

void TestLigne(){
    for (int i = 1; i<=TAILLE; i++) {
        CU_ASSERT(LIGNE_ObtenirNumeroLigne(LIGNE_ObtenirLigneDepuisInt(i)) == i);
    }
}