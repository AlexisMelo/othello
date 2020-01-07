#include "testCoups.h"

void testCreerCoups() {
  Coups coups = COUPS_CreerCoups();
/* 
  CU_ASSERT(LC_estVide(coups->lesCoups)); */
  CU_ASSERT(coups.nbCoups == 0);
}

void testAjoutCoups() {

  Coup monCoup = COUP_CreerCoup(POSITION_CreerPosition(1,1),COULEUR_ObtenirCouleurNoir());

  Coups coups = COUPS_CreerCoups();
  COUPS_AjouterCoup(coups.lesCoups,monCoup);
/* 
  CU_ASSERT(!LC_estVide(coups->lesCoups)); */
  CU_ASSERT(coups.nbCoups == 1);
  CU_ASSERT(COUP_SontEgauxCoups(monCoup,COUPS_ObtenirCoup(coups)))
 // printf("%d       %c           %s", monCoup.couleur.nom, monCoup.couleur.symbole, monCoup.couleur.hexa);
  //printf("%d       %c           %s", COUPS_ObtenirCoup(*coups).couleur.nom, COUPS_ObtenirCoup(*coups).couleur.symbole, COUPS_ObtenirCoup(*coups).couleur.hexa);
}
