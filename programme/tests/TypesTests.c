#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <string.h>
#include "Colonne.h"
#include "Ligne.h"
#include "TypesTest.h"

#define CU_ADD_TEST(suite, test) (CU_add_test(suite, #test, (CU_TestFunc)test))


int main(){
    CU_ErrorCode registryInitializationState;
    registryInitializationState = CU_initialize_registry();
    CU_pSuite colonneSuite;
    CU_pSuite ligneSuite;
    CU_pSuite couleurSuite;
    CU_pSuite plateauSuite;
    CU_pSuite UneDirectionSuite;
    CU_pSuite LesDirectionsSuite;
    CU_pSuite RechercheCoupSuite;
    CU_pSuite CoupSuite;
    CU_pSuite CoupsSuite;

    if (registryInitializationState == CUE_SUCCESS){

        colonneSuite = CU_add_suite("Colonne", NULL,NULL);
        ligneSuite = CU_add_suite("Ligne", NULL,NULL);
        couleurSuite = CU_add_suite("Couleur", NULL,NULL);
        plateauSuite = CU_add_suite("Plateau", NULL,NULL);
        UneDirectionSuite = CU_add_suite("UneDirection", NULL,NULL);
        LesDirectionsSuite = CU_add_suite("LesDirections", NULL,NULL);
        RechercheCoupSuite = CU_add_suite("RechercheCoup", NULL,NULL);
        CoupSuite = CU_add_suite("Coup",NULL,NULL);
        CoupsSuite = CU_add_suite("Coups",NULL,NULL);

         CU_ADD_TEST(colonneSuite,TestColonne);

         CU_ADD_TEST(ligneSuite,TestLigne);

         CU_ADD_TEST(couleurSuite,testBlanc);
         CU_ADD_TEST(couleurSuite,testNoir);

         CU_ADD_TEST(plateauSuite,TestPlateau);

         CU_ADD_TEST(UneDirectionSuite,testParcourirUneDirection);

         CU_ADD_TEST(LesDirectionsSuite,testParcourirLesDirections);

        CU_ADD_TEST(RechercheCoupSuite,testRechercheDesCoups);

         CU_ADD_TEST(CoupSuite,testEgaliteCoup);

        CU_ADD_TEST(CoupsSuite,testCreerCoups);
        CU_ADD_TEST(CoupsSuite,testAjoutCoups);

        CU_basic_set_mode(CU_BRM_NORMAL);
        CU_basic_run_tests();
        CU_cleanup_registry();
    }
    return 0;
}
