#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <string.h>
#include "testColonne.h"
#include "testLigne.h"
#include "testCouleur.h"
#include"../include/Colonne.h"
#include"../include/Ligne.h"


#define CU_ADD_TEST(suite, test) (CU_add_test(suite, #test, (CU_TestFunc)test))


int main(){
    CU_ErrorCode registryInitializationState;
    registryInitializationState = CU_initialize_registry();
    CU_pSuite colonneSuite;
    CU_pSuite ligneSuite;
    CU_pSuite couleurSuite;
    if (registryInitializationState == CUE_SUCCESS){
        colonneSuite = CU_add_suite("Colonne", NULL,NULL);
        ligneSuite = CU_add_suite("Ligne", NULL,NULL);
        couleurSuite = CU_add_suite("Couleur", NULL,NULL);
        CU_ADD_TEST(colonneSuite,TestColonne);
        CU_ADD_TEST(ligneSuite,TestLigne);
        CU_ADD_TEST(couleurSuite,testBlanc);
        CU_ADD_TEST(couleurSuite,testNoir);
        CU_basic_set_mode(CU_BRM_NORMAL);
        CU_basic_run_tests();
        CU_cleanup_registry();
    }
    return 0;
}