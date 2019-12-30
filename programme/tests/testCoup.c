#include "testCoup.h"

void testEgaliteCoup() {
  Couleur noir = CouleurNoir();

  Coup coup1 = creerCoup(creerPosition(creerLigne(1),creerColonne(3)), noir);
  Coup coup2 = creerCoup(creerPosition(creerLigne(1),creerColonne(3)), noir);

  CU_ASSERT(estEgalCoup(coup1, coup2));

}
