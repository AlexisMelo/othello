#include"../include/Ligne.h"
#include<CUnit/CUnit.h>
#include"testLigne.h"

void TestLigne(){
    for (int i = 1; i<=LONGUEUR; i++) {
        CU_ASSERT(obtenirNumeroLigne(creerLigne(i)) == i);
    }
}