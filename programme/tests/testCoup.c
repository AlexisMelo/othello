#include "testCoup.h"

void testEgaliteCoup() {
  Couleur noir = CouleurNoir();

  Coup coup1 = CreerCoup(CreerPosition(CreerLigne(1),CreerColonne(3)), noir);
  Coup coup2 = CreerCoup(CreerPosition(CreerLigne(1),CreerColonne(3)), noir);

  CU_ASSERT(EstEgalCoup(coup1, coup2));

}
