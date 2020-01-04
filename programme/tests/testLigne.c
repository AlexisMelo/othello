#include"../include/Ligne.h"
#include<CUnit/CUnit.h>
#include"testLigne.h"

void TestLigne(){
    for (int i = 1; i<=TAILLE; i++) {
        CU_ASSERT(ObtenirNumeroLigne(CreerLigne(i)) == i);
    }
}