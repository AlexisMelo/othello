#include "testCoups.h"

void testCreerCoups() {
  Coups coups = COUPS_CreerCoups();
  CU_ASSERT(coups.nbCoups == 0);
}

void testAjoutCoups() {

  Coup monCoup = CreerCoup(CreerPosition(1,1),CouleurNoir());

  Coups * coups = CreerCoups();
  AjouterCoup(coups,monCoup);

  Coups coups = COUPS_CreerCoups();
  COUPS_AjouterCoup(&coups,monCoup);

  CU_ASSERT(coups.nbCoups == 1);
  CU_ASSERT(COUP_SontEgauxCoups(monCoup,COUPS_ObtenirCoup(coups)))
}
