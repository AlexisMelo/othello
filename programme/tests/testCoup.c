#include "testCoup.h"

void testEgaliteCoup() {
  Couleur noir = COULEUR_ObtenirCouleurNoir();

  Coup coup1 = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(1),COLONNE_ObtenirColonneDepuisInt(3)), noir);
  Coup coup2 = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(1),COLONNE_ObtenirColonneDepuisInt(3)), noir);

  CU_ASSERT(COUP_SontEgauxCoups(coup1, coup2));

}
