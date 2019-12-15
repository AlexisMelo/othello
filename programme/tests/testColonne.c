#include"../include/Colonne.h"
#include <CUnit/CUnit.h>
#include "testColonne.h"



void TestColonne(){
    for (int i = 1; i<=LARGEUR; i++) {
        CU_ASSERT(ObtenirNumeroColonne(creerColonne(i)) == i);
    }
}
