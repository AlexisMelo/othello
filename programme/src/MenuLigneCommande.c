#include "MenuLigneCommande.h"

void MenuLigneCommande(int nbArguments, char ** arguments) {

  if (strcmp(arguments[1], "standard") == 0) {
    printf("Jouer partie Joueur vs IA avec profondeur %d\n", ObtenirProfondeurIA(nbArguments,arguments));
  }
  else if (strcmp(arguments[1], "tournois") == 0) {
    printf("Jouer partie IA vs IA avec profondeur %d\n", ObtenirProfondeurIA(nbArguments,arguments));
  }
  else {
    MessageDAide();
  }
}
