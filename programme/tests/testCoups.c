#include "testCoups.h"

void testCreerCoups() {
  Coups * coups = CreerCoups();

  CU_ASSERT(LC_estVide(coups->coups));
  CU_ASSERT(coups->nbDeCoups == 0);
}

void testAjoutCoups() {

  Coup monCoup = creerCoup(creerPosition(1,1),CouleurNoir());

  Coups * coups = CreerCoups();
  AjouterCoup(coups,monCoup);

  CU_ASSERT(!LC_estVide(coups->coups));
  CU_ASSERT(coups->nbDeCoups == 1);
  CU_ASSERT(estEgalCoup(monCoup,COUPS_ObtenirCoup(*coups)))
  printf("%d       %c           %s", monCoup.couleur.nom, monCoup.couleur.symbole, monCoup.couleur.hexa);
  printf("%d       %c           %s", COUPS_ObtenirCoup(*coups).couleur.nom, COUPS_ObtenirCoup(*coups).couleur.symbole, COUPS_ObtenirCoup(*coups).couleur.hexa);
}
